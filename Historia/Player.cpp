#include "Player.h"

Player::Player(string name) : name(name) {}

string Player::getName() const {
    return name;
}

void Player::addItem(const Item& item) {
    inventory.push_back(item);
}

void Player::useItem(const string& itemName) {
    // Aqu� puedes implementar la l�gica para usar un �tem
    // Por ejemplo, buscar el �tem en el inventario y aplicar su efecto
}
