#ifndef PUSH_BUTTON_H
#define PUSH_BUTTON_H

#include <iostream>
#include <vector>
#include "graphics.hpp"
#include "widgets.hpp"

class Push_button : public Widget
{
protected:
    bool _focused;
    std::string _esemeny;
public:
    Push_button(int x, int y, int sx, int sy, std::string esemeny);
    virtual bool is_selected(genv::event ev);
    virtual void draw();
    virtual void handle(genv::event ev);
    virtual void action()=0;
};

#endif // PUSH_BUTTON_H
