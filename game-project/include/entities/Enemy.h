#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"

class Enemy : public Entity {
public:
    Enemy(int x, int y) : Entity(x, y) {}

    void update() override {
        // Update enemy logic
    }

    void render() override {
        // Render enemy
    }

    void handleCollision() override {
        // Handle collision with enemy
    }

    void move() {
        // Move enemy
    }

    void attack() {
        // Enemy attack logic
    }
};

#endif