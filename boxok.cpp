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
    gout << move_to(760,20) << color(255,255,255) << text("Szab�lyok:\n\n J�t�kszab�lyok:\n\n 1, Minden kit�lt�tt v�zszintes SOR tartalmazza 1-t�l 9-ig mind a kilenc sz�mjegyet,\n\n 2, Minden kit�lt�tt f�gg�leges SOR (vagy oszlop)\n is tartalmazza 1-t�l 9-ig mind a kilenc sz�mjegyet,\n\n 3, Minden kit�lt�tt h�romszor h�rmas N�GYZET\n is tartalmazza 1-t�l 9-ig mind a kilenc sz�mjegyet �gy, hogy \n\n EGYETLEN SZ�M SEM ISM�TL�DHET �S EGYIK SEM HAGYHAT� EL!\n\n J�t�k menete:\n\n 1, A k�v�nt sz�mjegyet a sz�mbe�ll�t� doboz seg�ts�g�vel �ll�thatja be:\n �rt�ket a + megnyom�s�val vagy a FEL billenty�vel n�velhet.\n �rt�ket a - megynom�s�val vagy a LE billenty�vel cs�kkenthet.\n\n 2, A kiv�lasztott sz�mjegyet a k�v�nt mez�be bevinni az al�bbi m�don tudja megval�s�tnai:\n A k�v�nt mez�t bal eg�rgombbal r�kantintva tudja kiv�lasztani\n �rt�kd�s a k�v�laszotott mez�nek az ENTER felirat� doboz\n bal eg�rgombbal t�rt�n� megnyom�s�val lehets�ges.\n\n 3, Amennyiben olyan sz�mot adott meg egy mez�nek, ami a szab�lyokkal ellent�tes,\n a mez�kben l�v� helytelen sz�mok pirosan jelennek meg.\n Jav�t�si lehet�s�g, ha a helytelen mez�be ism�telten 0-t �r.\n\n 4, Amennyiben minden sz�mot helyesen �rt be, �n nyert!\n A helyesen kit�lt�tt sudoku minden mez�je z�lden jelenik meg!\n\n Kellemes id�t�lt�st k�v�nok!");
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
