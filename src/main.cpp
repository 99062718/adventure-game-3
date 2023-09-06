#include "entity.hpp"
#include "item.hpp"
#include "textDisplay.hpp"
#include "visualDisplay.hpp"
#include "globals.hpp"
#include <iostream>

Globals globals =  {};

int main(){
    globals.display = new TextDisplay();
    std::array<Item*, 5>* itemList = new std::array<Item*, 5>{};
    std::string name = "test";
    Entity entity = Entity(name, 1, 1, 1, 1, 1, 1, 1, 1, 1, itemList, 0);
    Item* item = new Item{"item", 1, 1, 1, 1, 1};
    entity.setItem(item, 1);
    entity.setItem(item, 1);
    delete item;
    delete itemList;
    delete globals.display;
}