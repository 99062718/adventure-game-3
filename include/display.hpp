#pragma once

class Display{
    // init all GTK variables as NULL by default
public:
    Display();

    virtual void showText(const char* text);
};