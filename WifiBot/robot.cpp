#include "robot.h"
#include <iostream>

using namespace std;

Robot::Robot(QObject *parent) : QObject(parent)
{
    QObject::connect(&soc,SIGNAL(connected()),this,SLOT(acquittement_connection()));  // signal émis lors de la connexion au serveur
    QObject:: connect(&soc, SIGNAL(readyRead()), this, SLOT(reception_paquet()));   // signal émis lorsque des données sont prêtes à être lues
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
    soc.connectToHost(IP,port);
}

// Deconnexion du Robot
void Robot::deconnexion()
{
    soc.close();
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
    // CRC non utile en TCP
    message.append((char)0);
    message.append((char)0);


    // Envoi du message
    soc.write(message);
    soc.flush();
}
