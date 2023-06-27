#pragma once
#include <gtk/gtk.h>

class Display{
protected:
    GtkApplication* app;
    int status;
    // init all GTK variables as NULL by default
public:
    virtual void showText(const char* text) = 0;
};