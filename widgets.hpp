#ifndef WIDGETS_HPP_INCLUDED
#define WIDGETS_HPP_INCLUDED

#include "graphics.hpp"

class Widget {
protected:
    int _x, _y, _size_x, _size_y;
public:
    Widget(int x, int y, int sx, int sy);
    virtual bool is_selected(genv::event ev) = 0;
    virtual void draw() = 0;
    virtual void handle(genv::event ev) = 0;
    void setText(std::string s){};
};



#endif // WIDGETS_HPP_INCLUDED
