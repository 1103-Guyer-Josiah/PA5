#ifndef ITEM_H
#define ITEM_H
#include <iostream>

class Item{
    int xPosition{0}, yPosition{0};
    int value;

    public:
    int getxPosition():
    int getyPosition();

    void setyPosition();
    void setxPosition();

    virtual char itemDisplay(bool);
    virtual int itemValue();
};
#endif