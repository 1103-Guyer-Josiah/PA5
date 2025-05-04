#ifndef ITEM_H
#define ITEM_H
#include <iostream>

class Item{
    protected:
        int xPosition = 0, yPosition = 0, value = 0;
        bool t_Status = false; //trigger Status

    public:
        Item();
        Item(int, int);
        Item(const Item&);
        virtual ~Item();

        int getValue()const;
        int getxPosition() const;
        int getyPosition()const;

        void resetValue();
        void setyPosition(int);
        void setxPosition(int);
        void setStatus();

        virtual char itemDisplay() const=0;
        Item& operator =(const Item& rhs);
};
#endif