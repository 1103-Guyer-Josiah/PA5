/*
Edited by Guyer,Josiah
5/8/2025
*/
#ifndef TROPHY_H
#define TROPHY_H

#include "item.h"


class Trophy : public Item{
    public:
        Trophy();
        Trophy(int,int);
        Trophy(const Trophy&);

        char itemDisplay() const override;
};
#endif