#include "textDisplay.hpp"
#include <stdio.h>

TextDisplay::TextDisplay(){

}

void TextDisplay::showText(const char* text){
    printf(text);
}