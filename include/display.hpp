#pragma once

class Display{
    // init all GTK variables as NULL by default
public:
    virtual void showText(const char* text) = 0;
};