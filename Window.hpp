#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <vector>
#include "graphics.hpp"
#include "widgets.hpp"


class Window {
public:

protected:
    int _X, _Y;

public:
    Window(int X, int Y) ;
    std::vector<Widget*> w;
    std::vector<std::string> szamok;
    void event_loop();
    int palya;
};

#endif // WINDOW_HPP
