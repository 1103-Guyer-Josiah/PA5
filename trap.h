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