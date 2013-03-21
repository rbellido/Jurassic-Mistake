#ifndef MULTISHOT_TOWER_H
#define MULTISHOT_TOWER_H

#include "tower.h"


class MultiShotTower : public Tower
{
public:
    Team * team; // other team for multishot damage calculations
    int multiShotDamage;
    int multiShotRange; // Range in which we can damage other units
    
    MultiShotTower(int uid, Point pos, int hp, int atkdmg, int atkrng,
int atkspd, int percep, int atkcnt, int wall, Team * t,
int mulsdmg, int mulsrng);
    
    virtual void Attack(Team*);
private:
};

#endif
