#pragma once
#include "display.hpp"

class VisualDisplay : public Display
{
public:
    VisualDisplay();

    void showText(const char* text) override;
};