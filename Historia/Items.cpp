#include "Items.h"

Item::Item(string name) : name(name) {}

string Item::getName() const {
    return name;
}
