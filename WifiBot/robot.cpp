#include "robot.h"

Robot::Robot(QObject *parent) : QObject(parent)
{

}

Robot::mise_a_jour_info_connexion(QString IP2, int port2)
{
    IP=IP2;
    port = port2;
}

Robot::connexion()
{
    soc.connectToHost(IP,port);
}
