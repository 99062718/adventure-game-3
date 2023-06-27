#pragma once
#include "display.hpp"

class VisualDisplay : public Display{
public:
    VisualDisplay(int argc, char** argv);

    void showText(const char* text) override;
};