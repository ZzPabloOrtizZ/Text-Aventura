#pragma once
#ifndef ITEMS_H
#define ITEMS_H

#include <string>
using namespace std;

class Item {
public:
    Item(string name);
    string getName() const;
    // Otros métodos y atributos

private:
    string name;
};

#endif // ITEMS_H
