#include "tower.h"
#include "unit.h"
#include <string>

using namespace std;

Tower::Tower(int uid, Point pos, int hp, int atkdmg, int atkrng,
            int atkspd, int percep, int atkcnt, int wall):
            Unit(uid, pos, hp, atkdmg, atkrng, atkspd, percep, atkcnt), wallArmour_(wall)
{
    //validation
}

string Tower::serializeTower(){
    string s;
    s = Unit::serializeUnit();

    tower_t t;
    t.wallArmour = wallArmour_;
    
    s += string((const char*)&t, sizeof(t));
    
    return s;
}
