#ifndef CLIENT_H
#define CLIENT_H

#include "../resource.h"
#include "client_game_logic.h"
#include "client_network.h"
#include "graphics.h"
#include "control.h"

class Client
{
public:
   // Constructors
   Client();

   // Functions
   void run();
private:
   // Modules
   ClientGameLogic clientGameLogic_;
   ClientNetwork clientNetwork_;
   Graphics graphics_;
   Control control_;
};

#endif