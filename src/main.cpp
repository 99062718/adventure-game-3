#include "entity.hpp"
#include "item.hpp"
#include "globals.hpp"
#include "textDisplay.hpp"
#include <iostream>

Globals globals =  {new TextDisplay()};

int main(){
    std::array<Item*, 5>* itemList = new std::array<Item*, 5>{};
    Entity entity = Entity(1, 1, 1, 1, 1, 1, 1, 1, 1, itemList);
    Item* item = new Item{"item", 1, 1, 1, 1, 1};
    entity.setItem(item, 1);
    entity.setItem(item, 1);
    delete item;
    delete itemList;
}