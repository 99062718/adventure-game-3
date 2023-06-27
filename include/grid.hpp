#pragma once
#include <vector>
#include "entity.hpp"

struct Grid{
    int height, width;
    Entity** positions;

    Grid(std::vector<Entity*> &entities, int height, int width);
};