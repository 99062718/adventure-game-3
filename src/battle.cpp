#include "battle.hpp"

Battle::Battle(Grid* playerGrid, Grid* enemyGrid):
    playerGrid(playerGrid), enemyGrid(enemyGrid) {}

bool Battle::calcMight()
{
    int playerMight = 0;
    int enemyMight = 0;

    for (int i = 0; i < playerGrid->gridSize; i++) {
        if (playerGrid->positions[i] != nullptr) {
            playerMight += playerGrid->positions[i]->getAttack();
        }
    }

    for (int i = 0; i < enemyGrid->gridSize; i++) {
        if (enemyGrid->positions[i] != nullptr) {
            enemyMight += enemyGrid->positions[i]->getAttack();
        }
    }

    return (playerMight >= enemyMight) ? 0 : 1;
}
