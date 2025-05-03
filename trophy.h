#ifndef TROPHY_H
#define TROPHY_H
#include <iostream>
using namespace std;

class Trophy{
    int xPosition{0}, yPosition{0}, count = 1;
    bool triggeredStatus = false;


    public:
    Trophy();
    Trophy(int,int);
    Trophy(const Trophy&);

    int getxPosition() const;
    int getyPosition() const;
    int getCount() const;
    bool getStatus() const;

    void setxPosition(int);
    void setyPosition(int);
    void setCount();
    void setStatus(bool);

    char trophyDisplay();


};
#endif