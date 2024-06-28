#include "Collectible.h"

Collectible::Collectible(int points) : points(points) {}

int Collectible::getPoints() const {
    return points;
}