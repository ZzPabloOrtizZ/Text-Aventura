#include "Rooms.h"

Room::Room(string name, string description, string enemyName, int enemyHealth)
    : name(name), description(description), enemy(enemyName, enemyHealth) {
    // Aqu� puedes agregar cualquier inicializaci�n adicional para Room
}

string Room::getName() const {
    return name;
}

string Room::getDescription() const {
    return description;
}

void Room::addItem(const Item& item) {
    items.push_back(item);
}

void Room::addEnemy(const Enemy& enemy) {
    this->enemy = enemy;
    // Considera c�mo manejar�s este m�todo ahora que el constructor inicializa un enemigo
}
