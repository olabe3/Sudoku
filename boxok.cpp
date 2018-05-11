#include "Boxok.hpp"
#include "graphics.hpp"
#include <iostream>
#include <sstream>
using namespace genv;
using namespace std;

Boxok::Boxok(int x, int y, int sx, int sy, int _lk, int _ln)
    : Widget(x,y,sx,sy)
{
    ln = _ln;
    _focused=false;
    szam=lk=_lk;
}


string Boxok::erteke()
{
    stringstream ss;
    ss<<szam;
    return ss.str();
}


void Boxok::draw()
{
    gout << move_to(_x, _y) << color(255,255,255) << box(_size_x, _size_y);
    gout << move_to(_x+2, _y+2) << color(0,0,0) << box(_size_x-4, _size_y-4);
    std::stringstream ss;
    ss<<szam;
    gout << move_to(_x+_size_y/2-gout.twidth(ss.str()),((_y+_size_y/2))+gout.cascent()/2-gout.cdescent()/2+2) << color(255,255,255) << text(ss.str());
    gout << move_to(_x-_size_y/2, _y) << color(255,255,255) << box(_size_y/2, _size_y/2);
    gout << move_to(_x-_size_y/2+2, _y+2) << color(0,0,0) << box(_size_y/2-4, _size_y/2-4);
    gout << color(255,255,255);
    gout << move_to(_x-_size_y/4, _y+4) << line(0, _size_y-12);
    gout << move_to(_x-_size_y/2+4, _y+_size_y/4) << line(_size_y/2-8, 0);
    gout << move_to(_x-_size_y/2, _y+_size_y/2) << color(255,255,255) << box(_size_y/2, _size_y/2);
    gout << move_to(_x-_size_y/2+2, _y+_size_y/2+2) << color(0,0,0) << box(_size_y/2-4, _size_y/2-4);
    gout << color(255,255,255);
    gout << move_to(_x-_size_y/2+4, _y+3*(_size_y/4)) << line(_size_y/2-8, 0);
}

void Boxok::handle(event ev)
{
    if ((ev.keycode==key_up || (ev.pos_x>_x-_size_y/2 && ev.pos_x<_x && ev.pos_y>_y && ev.pos_y<_y+_size_y/2 && ev.button==btn_left)) && szam<ln) {
        szam++;
    }
    if ((ev.keycode==key_down || (ev.pos_x>_x-_size_y/2 && ev.pos_x<_x && ev.pos_y>_y+_size_y/2 && ev.pos_y<_y+_size_y && ev.button==btn_left)) && szam>lk){
        szam--;
    }
}
bool Boxok::is_selected(event ev)
{

    return true;
}
