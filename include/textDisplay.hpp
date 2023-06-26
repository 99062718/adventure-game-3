#pragma once
#include "display.hpp"

class TextDisplay : public Display{
public:
    TextDisplay();

    void showText(const char* text) override;
};