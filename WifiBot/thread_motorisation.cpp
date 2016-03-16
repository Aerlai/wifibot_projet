#include "thread_motorisation.h"
#include "Robot.h"
#include <QTest>

thread_motorisation::thread_motorisation(QString IP2, int port2)
{
    IP=IP2;
    port = port2;
    bot = new Robot();
}

void thread_motorisation::run()
{
    bot->mise_a_jour_info_connexion("192.168.1.106", 15020);
    bot->connexion();
}

void thread_motorisation::mise_a_jour_info_connexion(QString IP2, int port2)
{
    IP=IP2;
    port = port2;
}
