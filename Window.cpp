#include "Window.hpp"
#include "graphics.hpp"
#include <iostream>
#include <sstream>
#include <vector>

using namespace genv;
using namespace std;

Window::Window(int X, int Y) :
    _X(X),_Y(Y)
{
    gout.open(X,Y);
}

void Window::event_loop()
{
    event ev;
    while(gin >> ev){
        for(Widget* v:w){
            if(v->is_selected(ev)){
                v->handle(ev);
            }
            v->draw();
        }
        for(int i=0; i < szamok.size(); i++){
            if(ev.keycode==key_enter){
                cout << "A " << i+1 << ". elem erteke:" <<szamok[i] << endl;
            }
        }
        gout << refresh;
    }
}

