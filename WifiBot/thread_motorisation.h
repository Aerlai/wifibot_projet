#ifndef THREAD_MOTORISATION_H
#define THREAD_MOTORISATION_H

#include <QThread>
#include "Robot.h"



class thread_motorisation : public QThread
{

public:
     thread_motorisation();
     Robot * bot;
protected:
     void run();
private:
     QString IP;
     int port;
     QTcpSocket soc;
     int moteur;
     float intensite;
     bool marche;
public slots:
    void mise_a_jour_info_connexion(QString IP2, int port2);
    void commande_moteur(int , float);
    void stop();

};

#endif // THREAD_MOTORISATION_H
