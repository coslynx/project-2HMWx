#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include "entities/Player.h"
#include "entities/Obstacle.h"
#include "entities/Collectible.h"
#include "entities/Enemy.h"

class Level {
public:
    Level();
    ~Level();

    void loadLevel(int levelNumber);
    void update();
    void render();

private:
    std::vector<Obstacle> obstacles;
    std::vector<Collectible> collectibles;
    std::vector<Enemy> enemies;
    Player player;

    int levelNumber;
    int score;

    void checkCollisions();
    void updatePlayer();
    void updateObstacles();
    void updateCollectibles();
    void updateEnemies();
    void checkGameOver();
};

#endif