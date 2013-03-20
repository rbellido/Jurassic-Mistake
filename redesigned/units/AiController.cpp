#include "AiController.h"
#include "../team.h"
/*

AI Controller

Loops through each teams units and passes the enemy team into the update function for
targeting enemy units.

*/

void AiUpdate(Team& team1, Team& team2)
{

	//loop through team 1 creeps
	for (size_t creep_idx = 0; creep_idx < team1.creeps.size(); ++creep_idx)
	{
		team1.creeps[creep_idx].Update(team2);
	}

	//loop through team 1 towers
	for (size_t tower_idx = 0; tower_idx < team1.towers.size(); ++tower_idx)
	{
		team1.towers[tower_idx].Update(team2);
	}

	//loop through team 2 creeps
	for (size_t creep_idx = 0; creep_idx < team2.creeps.size(); ++creep_idx)
	{
		team2.creeps[creep_idx].Update(team1);
	}

	//loop through team 2 towers
	for (size_t tower_idx = 0; tower_idx < team2.towers.size(); ++tower_idx)
	{
		team2.towers[tower_idx].Update(team1);
	}
}
