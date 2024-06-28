#include "Obstacle.h"

Obstacle::Obstacle(int x, int y, int width, int height) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

void Obstacle::update() {
    // Update obstacle logic here
}

void Obstacle::render() {
    // Render obstacle graphics here
}

bool Obstacle::checkCollision(int playerX, int playerY, int playerWidth, int playerHeight) {
    if (x < playerX + playerWidth && x + width > playerX && y < playerY + playerHeight && y + height > playerY) {
        return true; // Collision detected
    }
    
    return false; // No collision
}