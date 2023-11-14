#pragma once
#ifndef ROOMS_H
#define ROOMS_H

#include <string>
#include <vector>
#include "Items.h"
#include "Enemy.h"
using namespace std;

class Room {
public:
    Room(string name, string description, string enemyName, int enemyHealth);
    string getName() const;
    string getDescription() const;
    void addItem(const Item& item);
    void addEnemy(const Enemy& enemy); // Considera si todavía necesitas este método
    // Otros métodos y atributos

private:
    string name;
    string description;
    vector<Item> items;
    Enemy enemy;
};

#endif // ROOMS_H
