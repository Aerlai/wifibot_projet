#ifndef THREAD_MOTORISATION_H
#define THREAD_MOTORISATION_H


class thread_motorisation : public QThread
{
    Q_OBJECT

public:
    thread_motorisation();

protected:
     void run();
     void stop();
};

#endif // THREAD_MOTORISATION_H
