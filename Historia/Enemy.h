#ifndef ENEMY_H
#define ENEMY_H

#include <string>
using namespace std;

class Enemy {
public:
    Enemy(string name, int health);
    string getName() const;  // Asegúrate de que esta línea esté presente
    // Otros métodos y atributos

private:
    string name;
    int health;
};

#endif // ENEMY_H
