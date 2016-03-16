#ifndef THREAD_MOTORISATION_H
#define THREAD_MOTORISATION_H

#include <QThread>
#include "Robot.h"


class thread_motorisation : public QThread
{

public:
     thread_motorisation(QString IP2, int port2);
     Robot * bot;
protected:
     void run();
private:
     //Robot * bot;
     QString IP;
     int port;
     QTcpSocket soc;
public slots:
    void mise_a_jour_info_connexion(QString IP2, int port2);

};

#endif // THREAD_MOTORISATION_H
