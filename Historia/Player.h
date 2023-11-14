#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Items.h"
using namespace std;

class Player {
public:
    Player(string name);
    string getName() const;
    void addItem(const Item& item);
    void useItem(const string& itemName);
    // Otros métodos y atributos

private:
    string name;
    vector<Item> inventory;
};

#endif // PLAYER_H
