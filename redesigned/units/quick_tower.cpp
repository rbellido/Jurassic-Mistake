/*------------------------------------------------------------------------------
-- FILE:        quick_tower.cpp
--
-- DATE:        2013/03/12
--
-- MAINTAINERS: Cody Rossiter, Kevin Tangeman, Steve Lo
--
-- FUNCTIONS:   Attack
--
-- DESCRIPTION: File contains implementation for the quick_tower class.
--              QuickTower inherits from Tower.
--              QuickTower attacks a single unit using a high speed, low power
--              attack.
------------------------------------------------------------------------------*/
#include "quick_tower.h"
#include "unit.h"
#include <string>

using namespace std;

QuickTower::QuickTower(int uid, Point pos, int hp, int atkdmg, int atkrng,
            int atkspd, int percep, int atkcnt, int wall):
            Tower(uid, pos, hp, atkdmg, atkrng, atkspd, percep, atkcnt, wall)
{
    //validation
}


QuickTower::QuickTower(int uid, int side, Point pos, int hp, int atkdmg, int atkrng,
            int atkspd, int percep, int atkcnt, int wall):
            Tower(uid, side, pos, hp, atkdmg, atkrng, atkspd, percep, atkcnt, wall)
{
    //validation
}

/*------------------------------------------------------------------------------
-- FUNCTION:    Attack
--
-- DATE:        2013/03/12
--
-- DESIGNER:    Cody Rossiter
-- PROGRAMMER:  Cody Rossiter
--
-- INTERFACE:   void Attack(void)
--
-- RETURNS:     void
--
-- DESCRIPTION: Function checks if tower can attack using the attackCount
--              counter. If it can, the counter is reset and pTarget is
--              damaged.
------------------------------------------------------------------------------*/
void QuickTower::Attack(void)
{
    // check if we can attack
    if( attackCount++ < attackSpeed )
        return;
        
    attackCount = 0;
    pTarget->health -= attackDamage;
}
