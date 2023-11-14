#include "Player.h"

Player::Player(string name) : name(name) {}

string Player::getName() const {
    return name;
}

void Player::addItem(const Item& item) {
    inventory.push_back(item);
}

void Player::useItem(const string& itemName) {
    // Aquí puedes implementar la lógica para usar un ítem
    // Por ejemplo, buscar el ítem en el inventario y aplicar su efecto
}
