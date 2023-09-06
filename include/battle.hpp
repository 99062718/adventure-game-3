#pragma once
#include "grid.hpp"

class Battle
{
    Grid* playerGrid;
    Grid* enemyGrid;
public:
    Battle(Grid* playerGrid, Grid* enemyGrid);

    bool calcMight();
    
};