#include "thread_motorisation.h"
#include "Robot.h"
#include <QTest>

thread_motorisation::thread_motorisation()
{
    moveToThread( this );
}

void thread_motorisation::run()
{
    marche = true;
    moteur = 0;
    intensite = 0.4;
    bot = new Robot();
    bot->mise_a_jour_info_connexion(IP,port);
    bot->connexion();
    while(marche == true)
    {
        if (moteur == 0)
            bot->arret();
        else if(moteur == 1)
            bot->avant(intensite);
        else if (moteur == 2)
            bot->arriere(intensite);
        else if (moteur == 3)
            bot->gauche(intensite);
        else if (moteur == 4)
            bot->droite(intensite);
        else if (moteur == 5)
            bot->avant_droite(intensite);
        else if (moteur == 6)
            bot->avant_gauche(intensite);
        else if (moteur == 7)
            bot->arriere_droite(intensite);
        else if (moteur == 8)
            bot->arriere_gauche(intensite);
        QTest::qSleep(25);
    }
    bot->deconnexion();
}

void thread_motorisation::mise_a_jour_info_connexion(QString IP2, int port2)
{
    IP=IP2;
    port = port2;
}

void thread_motorisation::commande_moteur(int moteur2, float intensite2)
{
    moteur = moteur2;
    intensite = intensite2;
}

void thread_motorisation::stop()
{
    marche = false;
}
