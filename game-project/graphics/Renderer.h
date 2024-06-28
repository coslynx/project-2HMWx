#pragma once

#include <iostream>
#include <string>
#include <vector>

class Renderer {
public:
    Renderer();
    ~Renderer();

    void init();
    void renderPlayer();
    void renderObstacle();
    void renderCollectible();
    void renderEnemy();
    void renderLevel();
    void renderGameOverScreen();
    void renderScore(int score);
    void renderTimer(int time);
    void renderPowerUps();
    void renderCustomLevelEditor();
    void renderLeaderboard();
    void renderGraphics();
};