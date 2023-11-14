#include "Enemy.h"

Enemy::Enemy(string name, int health) : name(name), health(health) {
    // Constructor
}

string Enemy::getName() const {
    return name;
}
