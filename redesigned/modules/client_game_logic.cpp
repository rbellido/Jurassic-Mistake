#include "../resource.h"
#include "client_game_logic.h"

/* Sends a create unit request to network module.
 *
 * PRE:     
 * POST:    Request has been sent to the network module (not directly to server) 
 * RETURNS: true if request was sent
 *          false if no request was sent
 * NOTES:   Partial validation is to be performed here (eg. sufficient funds, valid placement). Additional validation will be performed server side. */
bool ClientGameLogic::createUnit(UnitType type, Point location)
{
   // TODO: validation

   clientNetwork_.createUnit(this->playerId, type, location);
   
   return true;
}

/* Sends a move player (self) request to network module.
 *
 * PRE:     
 * POST:    Request has been sent to the network module (not directly to server)
 * RETURNS: true if request was sent
 *          false if no request was sent
 * NOTES:   Partial validation is to be performed here (eg. valid location). Additional validation will be performed server side. */
bool ClientGameLogic::movePlayer(Direction direction)
{
   // TODO: validation

   clientNetwork_.movePlayer(this->playerId, direction);

   return true;
}

/* Sends an attack request to network module.
 *
 * PRE:     
 * POST:    Request has been sent to the network module (not directly to server)
 * RETURNS: true if request was sent
 *          false if no request was sent
 * NOTES:   Partial validation is to be performed here (eg. builders can't attack). Additional validation will be performed server side. */
bool ClientGameLogic::attack(Direction direction)
{
   // TODO: validation

   clientNetwork_.attack(this->playerId, direction);

   return true;
}

/* Exits the game.
 *
 * PRE:     
 * POST:    
 * RETURNS: 
 * NOTES:   Any teardown should be performed here (eg. notify server). */
void ClientGameLogic::exit()
{
}