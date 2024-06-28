#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <iostream>
#include <string>

class Obstacle {
public:
    Obstacle();
    Obstacle(int x, int y, int width, int height, std::string obstacleType);

    void setPosition(int x, int y);
    void setSize(int width, int height);
    void setObstacleType(std::string obstacleType);
    void render();

    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;
    std::string getObstacleType() const;

private:
    int m_x;
    int m_y;
    int m_width;
    int m_height;
    std::string m_obstacleType;
};

#endif