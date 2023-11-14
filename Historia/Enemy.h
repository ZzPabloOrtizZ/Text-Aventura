#ifndef ENEMY_H
#define ENEMY_H

#include <string>
using namespace std;

class Enemy {
public:
    Enemy(string name, int health);
    string getName() const;  // Aseg�rate de que esta l�nea est� presente
    // Otros m�todos y atributos

private:
    string name;
    int health;
};

#endif // ENEMY_H
