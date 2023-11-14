#pragma once
#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

#include "Player.h"
#include "Rooms.h"
#include "Commons.h"
using namespace std;

class Movimiento {
public:
    static void movePlayer(Player& player, Room& newRoom, Direction direction);
    // Otros métodos relacionados con el movimiento
};

#endif // MOVIMIENTO_H
