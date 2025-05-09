/*
Edited by Guyer,Josiah
5/8/2025
*/
#ifndef TRAP_H
#define TRAP_H

#include "item.h"


class Trap : public Item{
    public:
        Trap();
        Trap(int,int);
        Trap(const Trap&);

        char itemDisplay() const override;
};
#endif