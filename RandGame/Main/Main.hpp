#ifndef NORDICARTS_RANDGAME_H
#define NORDICARTS_RANDGAME_H

// General System Includes#include <iostream>

#include <stdio.h>
#include <thread>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <map>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>
#include <cstdint>
#include <chrono>
#include <exception>
#include <stdexcept>

// Build Number of Main
#include "./buildNumber.hpp"

// Game Stuff
#include <Game/Game.hpp>

// NordicOS Stuff
#include <NordicOS/OS.hpp>

// Valkyrie
#include <Valkyrie/Valkyrie.hpp>

// Namespace
namespace NordicArts {
    void ThreadUpdateGame(GameNS::Game *pGame, GameNS::GameState eGS);
    void ThreadRenderGame(GameNS::Game *pGame, GameNS::GameState eGS);
    void handleException(std::exception_ptr ptrException);
    
    int main();
};

#endif
