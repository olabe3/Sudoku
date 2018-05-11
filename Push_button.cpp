#include "Push_button.h"
#include "graphics.hpp"
#include <iostream>
#include <sstream>
#include <vector>

using namespace genv;
using namespace std;

Push_button::Push_button(int x, int y, int sx, int sy, std::string esemeny) : Widget(x,y,sx,sy)
{
	_esemeny = esemeny;
	_focused=true;
}

void Push_button::draw(){
    if (_focused){
			gout << move_to(_x, _y) << color(20, 20, 230) << box(_size_x, _size_y);
			gout << move_to(_x+2, _y+2) << color(100, 100, 125) << box(_size_x-4, _size_y-4);
			gout << move_to((_x+_size_x/2)-(gout.twidth(_esemeny)/2), ((_y+_size_y/2))+gout.cascent()/2-gout.cdescent()/2) << color(215, 215, 255) << text(_esemeny);
    }
}

void Push_button::handle(event ev)
{
	if (ev.keycode==key_enter) {
        action();
    }
}

bool Push_button::is_selected(event ev)
{
    return true;
}
