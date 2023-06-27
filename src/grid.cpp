#include "grid.hpp"

Grid::Grid(std::vector<Entity*> &entities, int height, int width):
    height(height), width(width){
        positions = new Entity*[height*width];

        for (int x = 0; x < entities.size(); x++) {
            positions[entities[x]->position] = entities[x];
        }
    }