#ifndef ROBOT_H
#define ROBOT_H

#include <QObject>
#include <QtNetwork/QTcpSocket>

class Robot : public QObject
{
    Q_OBJECT
public:
    explicit Robot(QObject *parent = 0);

signals:
    void vers_IHM_acquittement_connection();

public slots:
    void mise_a_jour_info_connexion(QString IP2, int port2);
    void connexion();
    void deconnexion();
    void reception_paquet();       // en provenance de la socket, lit la socket, émet un signal vers l'IHM
    void commande_moteur(char vitesse_gauche,char vitesse_droite,char flag);

    // Deplacement
    void gauche(float intensite);
    void droite(float intensite);
    void avant(float intensite);
    void avant_gauche(float intensite);
    void avant_droite(float intensite);
    void arriere(float intensite);
    void arriere_gauche(float intensite);
    void arriere_droite(float intensite);
    void arret();



// signaux d'acquittement
private slots :
    void acquittement_connection();  // en provenance de la socket et émet un signal vers l'IHM


private:    // variable
    QString IP;
    int port;
    QTcpSocket soc;
};



#endif // ROBOT_H
