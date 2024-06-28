#pragma once

#include <iostream>
#include "Entity.h"

class Collectible : public Entity {
public:
    Collectible(int x, int y) : Entity(x, y) {}

    void collect() {
        // Logic to handle collecting the item
    }
};