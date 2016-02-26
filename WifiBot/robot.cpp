#include "robot.h"
#include <iostream>

using namespace std;

Robot::Robot(QObject *parent) : QObject(parent)
{
    QObject::connect(&soc,SIGNAL(connected()),this,SLOT(acquittement_connection()));  // signal émis lors de la connexion au serveur
    QObject:: connect(&soc, SIGNAL(readyRead()), this, SLOT(reception_paquet()));   // signal émis lorsque des données sont prêtes à être lues
}

void Robot::mise_a_jour_info_connexion(QString IP2, int port2)
{
    IP=IP2;
    port = port2;
    cout << "changement ip et port effectue" << endl;
}

void Robot::connexion()
{
    cout << "connexion au robot" << endl;
    soc.connectToHost(IP,port);
}

void Robot::acquittement_connection()
{
    emit vers_IHM_acquittement_connection(); // on envoie un signal à l'IHM
    cout << "connexion etablie"<<endl;
}
void Robot::reception_paquet()
{
    QString ligne;
    while(soc.canReadLine())
    {
        ligne = soc.readLine();     // on lit une ligne
    }
}
