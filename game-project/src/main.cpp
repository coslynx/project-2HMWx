#include "entities/Player.h"
#include "entities/Obstacle.h"
#include "entities/Collectible.h"
#include "entities/Enemy.h"
#include "levels/Level.h"
#include "graphics/Renderer.h"
#include "audio/SoundManager.h"

int main() {
    // Initialize game components
    Renderer renderer;
    SoundManager soundManager;
    Player player;
    Level level;

    // Game loop
    while (!player.isGameOver()) {
        // Handle user input
        player.handleInput();

        // Update game state
        player.update();
        level.update();

        // Render graphics
        renderer.render(player, level);

        // Play sound effects
        soundManager.play(player.getAction());

        // Check for collisions
        if (player.checkCollision(level.getObstacles())) {
            player.setGameOver(true);
        }

        // Check for collectibles
        player.collect(level.getCollectibles());

        // Check for enemies
        if (player.checkEnemyCollision(level.getEnemies())) {
            player.setGameOver(true);
        }

        // Check for level completion
        if (player.reachedGoal()) {
            level.loadNextLevel();
        }
    }

    // Display game over screen
    renderer.renderGameOver(player.getScore());

    return 0;
}