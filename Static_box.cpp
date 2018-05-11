#include "Static_box.hpp"
#include <iostream>
#include <sstream>
#include <vector>

using namespace genv;
using namespace std;

Static_box::Static_box(int x, int y, int sx, int sy, string felirat, int aktiv, int rossz) : Widget(x,y,sx,sy)
{
	_felirat = felirat;
	_aktiv = aktiv;
	_rossz = rossz;
	_focused=false;
}

void Static_box::draw()
{
    if(_aktiv==0){
        if(_rossz==0){
             gout << move_to(_x, _y) << color(95, 95, 95) << box(_size_x, _size_y);
            gout << move_to(_x+2, _y+2) << color(50, 50, 50) << box(_size_x-4, _size_y-4);
            gout << move_to(_x+_size_y/2-gout.twidth(_felirat), ((_y+_size_y/2))+gout.cascent()/2-gout.cdescent()/2+2) << color(255, 0, 0) << text(_felirat);
        }
        else{
            gout << move_to(_x, _y) << color(95, 95, 95) << box(_size_x, _size_y);
            gout << move_to(_x+2, _y+2) << color(50, 50, 50) << box(_size_x-4, _size_y-4);
            gout << move_to(_x+_size_y/2-gout.twidth(_felirat), ((_y+_size_y/2))+gout.cascent()/2-gout.cdescent()/2+2) << color(255, 255, 255) << text(_felirat);
        }
    }
    if(_aktiv==1){
        gout << move_to(_x, _y) << color(95, 95, 95) << box(_size_x, _size_y);
        gout << move_to(_x+2, _y+2) << color(255, 255, 255) << box(_size_x-4, _size_y-4);
        gout << move_to(_x+_size_y/2-gout.twidth(_felirat), ((_y+_size_y/2))+gout.cascent()/2-gout.cdescent()/2+2) << color(0, 0, 0) << text(_felirat);
    }
	if(_focused)
    {
        if(_rossz==0){
            gout << move_to(_x, _y) << color(255, 0, 0) << box(_size_x, _size_y);
            gout << move_to(_x+2, _y+2) << color(50, 50, 50) << box(_size_x-4, _size_y-4);
            gout << move_to(_x+_size_y/2-gout.twidth(_felirat), ((_y+_size_y/2))+gout.cascent()/2-gout.cdescent()/2+2) << color(255, 0, 0) << text(_felirat);
        }
        else{
            gout << move_to(_x, _y) << color(255, 0, 0) << box(_size_x, _size_y);
            gout << move_to(_x+2, _y+2) << color(50, 50, 50) << box(_size_x-4, _size_y-4);
            gout << move_to(_x+_size_y/2-gout.twidth(_felirat), ((_y+_size_y/2))+gout.cascent()/2-gout.cdescent()/2+2) << color(255, 255, 255) << text(_felirat);
        }
    }

    gout << move_to(17,17) << color(0,0,255) << box(551,3);
    gout << move_to(17,20) << color(0,0,255) << box(3,548);
    gout << move_to(17,568) << color(0,0,255) << box(551,3);
    gout << move_to(568,17) << color(0,0,255) << box(3,554);
    gout << move_to(200,20) << color(0,0,255) << box(4,548);
    gout << move_to(384,20) << color(0,0,255) << box(4,548);
    gout << move_to(20,200) << color(0,0,255) << box(548,4);
    gout << move_to(20,384) << color(0,0,255) << box(548,4);
}

void Static_box::handle(event ev)
{
}

bool Static_box::is_selected(event ev)
{
    if(_aktiv==0){
        if (ev.pos_x>_x && ev.pos_x<_x+_size_x && ev.pos_y>_y && ev.pos_y<_y+_size_y && ev.button==btn_left){
            _focused=true;
        }
        if (!(ev.pos_x>_x && ev.pos_x<_x+_size_x && ev.pos_y>_y && ev.pos_y<_y+_size_y)&& ev.button==btn_left) {
            _focused=false;
        }
    }
    else{
        _focused=false;
    }
    return _focused;
}
