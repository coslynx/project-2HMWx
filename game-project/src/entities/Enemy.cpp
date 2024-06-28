#include "Enemy.h"

Enemy::Enemy(int x, int y, int health) : Entity(x, y), health(health) {}

void Enemy::update() {
    // Update enemy logic here
}

void Enemy::draw() {
    // Draw enemy graphics here
}

void Enemy::takeDamage(int damage) {
    health -= damage;
    if (health <= 0) {
        // Enemy defeated logic
    }
}