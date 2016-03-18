#include "robot.h"
#include <iostream>
#include "thread_motorisation.h"
#include <QTest>

using namespace std;

Robot::Robot(QObject *parent) : QObject(parent)
{
    soc= new QTcpSocket();
    QObject::connect(soc,SIGNAL(connected()),this,SLOT(acquittement_connection()));  // signal émis lors de la connexion au serveur
    QObject:: connect(soc, SIGNAL(readyRead()), this, SLOT(reception_paquet()));   // signal émis lorsque des données sont prêtes à être lues
}

// Mise a jour des information de connexion
void Robot::mise_a_jour_info_connexion(QString IP2, int port2)
{
    IP=IP2;
    port = port2;
    cout << "changement ip et port effectue" << endl;
}

// Connexion au robot
void Robot::connexion()
{
    cout << "connexion au robot" << endl;
    soc->connectToHost(IP,port);
    bool connecte = soc->waitForConnected(5000);
    cout << connecte << endl;
}

// Deconnexion du Robot
void Robot::deconnexion()
{
    soc->close();
    cout << "deconnecte du robot" << endl;
}

// Lorsque que le robot est connecté reception de l'acquitemment
void Robot::acquittement_connection()
{
    emit vers_IHM_acquittement_connection(); // on envoie un signal à l'IHM
    cout << "connexion etablie"<<endl;

}

void Robot::reception_paquet()
{

}

// /////////////// commandes du deplacmement //////////////////////////////////

void Robot::gauche(float intensite)
{
    commande_moteur(240*intensite,240*intensite,16);
}
void Robot::droite(float intensite)
{
    commande_moteur(240*intensite,240*intensite,64);
}
void Robot::avant(float intensite)
{
    commande_moteur(240*intensite,240*intensite,80);
}
void Robot::avant_gauche(float intensite)
{
    float calibrage = 0.70;
    commande_moteur(240*intensite*calibrage,240*intensite,80);
}
void Robot::avant_droite(float intensite)
{
    float calibrage = 0.70;
    commande_moteur(240*intensite,240*intensite*calibrage,80);
}
void Robot::arriere(float intensite)
{
    commande_moteur(240*intensite,240*intensite,0);
}
void Robot::arriere_gauche(float intensite)
{
    float calibrage = 0.70;
    commande_moteur(240*intensite*calibrage,240*intensite,0);
}
void Robot::arriere_droite(float intensite)
{
    float calibrage = 0.70;
    commande_moteur(240*intensite,240*intensite*calibrage,0);
}
void Robot::arret()
{
    commande_moteur(0,0,0);
}

// ////////////////////   fin      ////////////////////////////////////////////
void Robot::commande_moteur(char vitesse_gauche,char vitesse_droite,char flag)
{
    QByteArray message;

    message.clear();
    message.append((char)0xff);
    message.append((char)0x07);
    message.append((char)vitesse_gauche);
    message.append((char)0);
    message.append((char)vitesse_droite);
    message.append((char)0);
    message.append((char)flag);
    // CRC
    quint16 crc = Crc16( &message, 1); // calcul du crc du package envoyé
    message.append((char)crc);
    message.append((char)(crc>>8));
    cout << "message cree" << endl;

    // Envoi du message
    if(soc->open(QIODevice::ReadWrite))
    {
        soc->write(message);
        soc->flush();
        cout << "message envoye" << endl;
    }
}

quint16 Robot::Crc16(QByteArray* byteArray, int pos){
    unsigned char *data = (unsigned char* )byteArray->constData();
    quint16 crc = 0xFFFF;
    quint16 Polynome = 0xA001;
    quint16 Parity = 0;
    for(; pos < byteArray->length(); pos++){
        crc ^= *(data+pos);
        for (unsigned int CptBit = 0; CptBit <= 7 ; CptBit++){
            Parity= crc;
            crc >>= 1;
            if (Parity%2 == true) crc ^= Polynome;
        }
    }
    return crc;
}
