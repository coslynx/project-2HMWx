#pragma once

#include <iostream>
#include <string>

class Player {
public:
    Player();
    ~Player();

    void move(int x, int y);
    void jump();
    void collectItem();
    void collideWithObstacle();
    void collideWithEnemy();
    void increaseScore(int points);
    void decreaseHealth(int damage);

    int getXPosition();
    int getYPosition();
    int getScore();
    int getHealth();

private:
    int xPosition;
    int yPosition;
    int score;
    int health;
};