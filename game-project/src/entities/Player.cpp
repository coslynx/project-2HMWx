#include "Player.h"
#include <iostream>

Player::Player(int startX, int startY) : x(startX), y(startY), score(0), lives(3) {}

void Player::move(int deltaX, int deltaY) {
    x += deltaX;
    y += deltaY;
}

void Player::jump() {
    // Implement jump logic here
}

void Player::checkCollision() {
    // Implement collision detection logic here
}

void Player::collectItem() {
    // Implement item collection logic here
}

void Player::handleEnemyCollision() {
    // Implement enemy collision logic here
}

void Player::updateScore(int points) {
    score += points;
}

void Player::loseLife() {
    lives--;
}

int Player::getScore() {
    return score;
}

int Player::getLives() {
    return lives;
}

int Player::getX() {
    return x;
}

int Player::getY() {
    return y;
}