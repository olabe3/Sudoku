#include "Boxok.hpp"
#include "Static_box.hpp"
#include "Window.hpp"
#include "Push_button.h"
#include "graphics.hpp"
#include <vector>
#include <iostream>
#include <fstream>
using namespace genv;
using namespace std;

class My_Window;

class Set_button : public Push_button {
    My_Window *_myparent;
public:
    Set_button(My_Window * parent,int x, int y, int sx, int sy, std::string esemeny) : Push_button(x,y,sx,sy,esemeny), _myparent(parent) {}
    virtual void action();
};

class My_Window : public Window {
public:
    Boxok *b1;
    Set_button *set1;
    Static_box *s1;
    Static_box *s2;
    Static_box *s3;
    Static_box *s4;
    Static_box *s5;
    Static_box *s6;
    Static_box *s7;
    Static_box *s8;
    Static_box *s9;
    Static_box *s10;
    Static_box *s11;
    Static_box *s12;
    Static_box *s13;
    Static_box *s14;
    Static_box *s15;
    Static_box *s16;
    Static_box *s17;
    Static_box *s18;
    Static_box *s19;
    Static_box *s20;
    Static_box *s21;
    Static_box *s22;
    Static_box *s23;
    Static_box *s24;
    Static_box *s25;
    Static_box *s26;
    Static_box *s27;
    Static_box *s28;
    Static_box *s29;
    Static_box *s30;
    Static_box *s31;
    Static_box *s32;
    Static_box *s33;
    Static_box *s34;
    Static_box *s35;
    Static_box *s36;
    Static_box *s37;
    Static_box *s38;
    Static_box *s39;
    Static_box *s40;
    Static_box *s41;
    Static_box *s42;
    Static_box *s43;
    Static_box *s44;
    Static_box *s45;
    Static_box *s46;
    Static_box *s47;
    Static_box *s48;
    Static_box *s49;
    Static_box *s50;
    Static_box *s51;
    Static_box *s52;
    Static_box *s53;
    Static_box *s54;
    Static_box *s55;
    Static_box *s56;
    Static_box *s57;
    Static_box *s58;
    Static_box *s59;
    Static_box *s60;
    Static_box *s61;
    Static_box *s62;
    Static_box *s63;
    Static_box *s64;
    Static_box *s65;
    Static_box *s66;
    Static_box *s67;
    Static_box *s68;
    Static_box *s69;
    Static_box *s70;
    Static_box *s71;
    Static_box *s72;
    Static_box *s73;
    Static_box *s74;
    Static_box *s75;
    Static_box *s76;
    Static_box *s77;
    Static_box *s78;
    Static_box *s79;
    Static_box *s80;
    Static_box *s81;

    My_Window(int X, int Y) : Window(X,Y) {
        b1 = new Boxok(650,200,100,90,1,9);
        set1 = new Set_button(this,660,300,90,90,"Enter");
        s1 = new Static_box(20,20,60,60,"0",0,1);
        s2 = new Static_box(80,20,60,60,"9",1,1);
        s3 = new Static_box(140,20,60,60,"6",1,1);
        s4 = new Static_box(204,20,60,60,"4",1,1);
        s5 = new Static_box(264,20,60,60,"0",0,1);
        s6 = new Static_box(324,20,60,60,"0",0,1);
        s7 = new Static_box(388,20,60,60,"1",1,1);
        s8 = new Static_box(448,20,60,60,"0",0,1);
        s9 = new Static_box(508,20,60,60,"7",1,1);
        s10 = new Static_box(20,80,60,60,"8",1,1);
        s11 = new Static_box(80,80,60,60,"0",0,1);
        s12 = new Static_box(140,80,60,60,"5",1,1);
        s13 = new Static_box(204,80,60,60,"0",0,1);
        s14 = new Static_box(264,80,60,60,"9",1,1);
        s15 = new Static_box(324,80,60,60,"0",0,1);
        s16 = new Static_box(388,80,60,60,"0",0,1);
        s17 = new Static_box(448,80,60,60,"0",0,1);
        s18 = new Static_box(508,80,60,60,"3",1,1);
        s19 = new Static_box(20,140,60,60,"4",1,1);
        s20 = new Static_box(80,140,60,60,"0",0,1);
        s21 = new Static_box(140,140,60,60,"0",0,1);
        s22 = new Static_box(204,140,60,60,"0",0,1);
        s23 = new Static_box(264,140,60,60,"0",0,1);
        s24 = new Static_box(324,140,60,60,"6",1,1);
        s25 = new Static_box(388,140,60,60,"0",0,1);
        s26 = new Static_box(448,140,60,60,"9",1,1);
        s27 = new Static_box(508,140,60,60,"5",1,1);
        s28 = new Static_box(20,204,60,60,"0",0,1);
        s29 = new Static_box(80,204,60,60,"0",0,1);
        s30 = new Static_box(140,204,60,60,"0",0,1);
        s31 = new Static_box(204,204,60,60,"0",0,1);
        s32 = new Static_box(264,204,60,60,"0",0,1);
        s33 = new Static_box(324,204,60,60,"0",0,1);
        s34 = new Static_box(388,204,60,60,"0",0,1);
        s35 = new Static_box(448,204,60,60,"0",0,1);
        s36 = new Static_box(508,204,60,60,"8",1,1);
        s37 = new Static_box(20,264,60,60,"2",1,1);
        s38 = new Static_box(80,264,60,60,"7",1,1);
        s39 = new Static_box(140,264,60,60,"8",1,1);
        s40 = new Static_box(204,264,60,60,"0",0,1);
        s41 = new Static_box(264,264,60,60,"0",0,1);
        s42 = new Static_box(324,264,60,60,"0",0,1);
        s43 = new Static_box(388,264,60,60,"6",1,1);
        s44 = new Static_box(448,264,60,60,"4",1,1);
        s45 = new Static_box(508,264,60,60,"0",0,1);
        s46 = new Static_box(20,324,60,60,"0",0,1);
        s47 = new Static_box(80,324,60,60,"5",1,1);
        s48 = new Static_box(140,324,60,60,"4",1,1);
        s49 = new Static_box(204,324,60,60,"6",1,1);
        s50 = new Static_box(264,324,60,60,"0",0,1);
        s51 = new Static_box(324,324,60,60,"0",0,1);
        s52 = new Static_box(388,324,60,60,"3",1,1);
        s53 = new Static_box(448,324,60,60,"1",1,1);
        s54 = new Static_box(508,324,60,60,"0",0,1);
        s55 = new Static_box(20,388,60,60,"5",1,1);
        s56 = new Static_box(80,388,60,60,"0",0,1);
        s57 = new Static_box(140,388,60,60,"9",1,1);
        s58 = new Static_box(204,388,60,60,"3",1,1);
        s59 = new Static_box(264,388,60,60,"0",0,1);
        s60 = new Static_box(324,388,60,60,"0",0,1);
        s61 = new Static_box(388,388,60,60,"0",0,1);
        s62 = new Static_box(448,388,60,60,"0",0,1);
        s63 = new Static_box(508,388,60,60,"0",0,1);
        s64 = new Static_box(20,448,60,60,"0",0,1);
        s65 = new Static_box(80,448,60,60,"0",0,1);
        s66 = new Static_box(140,448,60,60,"0",0,1);
        s67 = new Static_box(204,448,60,60,"9",1,1);
        s68 = new Static_box(264,448,60,60,"0",0,1);
        s69 = new Static_box(324,448,60,60,"4",1,1);
        s70 = new Static_box(388,448,60,60,"0",0,1);
        s71 = new Static_box(448,448,60,60,"0",0,1);
        s72 = new Static_box(508,448,60,60,"1",1,1);
        s73 = new Static_box(20,508,60,60,"0",0,1);
        s74 = new Static_box(80,508,60,60,"3",1,1);
        s75 = new Static_box(140,508,60,60,"0",0,1);
        s76 = new Static_box(204,508,60,60,"5",1,1);
        s77 = new Static_box(264,508,60,60,"7",1,1);
        s78 = new Static_box(324,508,60,60,"8",1,1);
        s79 = new Static_box(388,508,60,60,"9",1,1);
        s80 = new Static_box(448,508,60,60,"2",1,1);
        s81 = new Static_box(508,508,60,60,"0",0,1);

        w.push_back(b1);
        w.push_back(set1);
        w.push_back(s1);
        szamok.push_back("0");
        w.push_back(s2);
        szamok.push_back("9");
        w.push_back(s3);
        szamok.push_back("6");
        w.push_back(s4);
        szamok.push_back("4");
        w.push_back(s5);
        szamok.push_back("0");
        w.push_back(s6);
        szamok.push_back("0");
        w.push_back(s7);
        szamok.push_back("1");
        w.push_back(s8);
        szamok.push_back("0");
        w.push_back(s9);
        szamok.push_back("7");
        w.push_back(s10);
        szamok.push_back("8");
        w.push_back(s11);
        szamok.push_back("0");
        w.push_back(s12);
        szamok.push_back("5");
        w.push_back(s13);
        szamok.push_back("0");
        w.push_back(s14);
        szamok.push_back("9");
        w.push_back(s15);
        szamok.push_back("0");
        w.push_back(s16);
        szamok.push_back("0");
        w.push_back(s17);
        szamok.push_back("0");
        w.push_back(s18);
        szamok.push_back("3");
        w.push_back(s19);
        szamok.push_back("4");
        w.push_back(s20);
        szamok.push_back("0");
        w.push_back(s21);
        szamok.push_back("0");
        w.push_back(s22);
        szamok.push_back("0");
        w.push_back(s23);
        szamok.push_back("0");
        w.push_back(s24);
        szamok.push_back("6");
        w.push_back(s25);
        szamok.push_back("0");
        w.push_back(s26);
        szamok.push_back("9");
        w.push_back(s27);
        szamok.push_back("5");
        w.push_back(s28);
        szamok.push_back("0");
        w.push_back(s29);
        szamok.push_back("0");
        w.push_back(s30);
        szamok.push_back("0");
        w.push_back(s31);
        szamok.push_back("0");
        w.push_back(s32);
        szamok.push_back("0");
        w.push_back(s33);
        szamok.push_back("0");
        w.push_back(s34);
        szamok.push_back("0");
        w.push_back(s35);
        szamok.push_back("0");
        w.push_back(s36);
        szamok.push_back("8");
        w.push_back(s37);
        szamok.push_back("2");
        w.push_back(s38);
        szamok.push_back("7");
        w.push_back(s39);
        szamok.push_back("8");
        w.push_back(s40);
        szamok.push_back("0");
        w.push_back(s41);
        szamok.push_back("0");
        w.push_back(s42);
        szamok.push_back("0");
        w.push_back(s43);
        szamok.push_back("6");
        w.push_back(s44);
        szamok.push_back("4");
        w.push_back(s45);
        szamok.push_back("0");
        w.push_back(s46);
        szamok.push_back("0");
        w.push_back(s47);
        szamok.push_back("5");
        w.push_back(s48);
        szamok.push_back("4");
        w.push_back(s49);
        szamok.push_back("6");
        w.push_back(s50);
        szamok.push_back("0");
        w.push_back(s51);
        szamok.push_back("0");
        w.push_back(s52);
        szamok.push_back("3");
        w.push_back(s53);
        szamok.push_back("1");
        w.push_back(s54);
        szamok.push_back("0");
        w.push_back(s55);
        szamok.push_back("5");
        w.push_back(s56);
        szamok.push_back("0");
        w.push_back(s57);
        szamok.push_back("9");
        w.push_back(s58);
        szamok.push_back("3");
        w.push_back(s59);
        szamok.push_back("0");
        w.push_back(s60);
        szamok.push_back("0");
        w.push_back(s61);
        szamok.push_back("0");
        w.push_back(s62);
        szamok.push_back("0");
        w.push_back(s63);
        szamok.push_back("0");
        w.push_back(s64);
        szamok.push_back("0");
        w.push_back(s65);
        szamok.push_back("0");
        w.push_back(s66);
        szamok.push_back("0");
        w.push_back(s67);
        szamok.push_back("9");
        w.push_back(s68);
        szamok.push_back("0");
        w.push_back(s69);
        szamok.push_back("4");
        w.push_back(s70);
        szamok.push_back("0");
        w.push_back(s71);
        szamok.push_back("0");
        w.push_back(s72);
        szamok.push_back("1");
        w.push_back(s73);
        szamok.push_back("0");
        w.push_back(s74);
        szamok.push_back("3");
        w.push_back(s75);
        szamok.push_back("0");
        w.push_back(s76);
        szamok.push_back("5");
        w.push_back(s77);
        szamok.push_back("7");
        w.push_back(s78);
        szamok.push_back("8");
        w.push_back(s79);
        szamok.push_back("9");
        w.push_back(s80);
        szamok.push_back("2");
        w.push_back(s81);
        szamok.push_back("0");
    }

};

void Set_button::action() {
    event(ev);
    if(_myparent->s1->is_selected(ev)){
        _myparent->s1->setText(_myparent->b1->erteke());
        _myparent->szamok[0]=_myparent->b1->erteke();
    }
    if(_myparent->s2->is_selected(ev)){
        _myparent->s2->setText(_myparent->b1->erteke());
        _myparent->szamok[1]=_myparent->b1->erteke();
    }
    if(_myparent->s3->is_selected(ev)){
        _myparent->s3->setText(_myparent->b1->erteke());
        _myparent->szamok[2]=_myparent->b1->erteke();
    }
    if(_myparent->s4->is_selected(ev)){
        _myparent->s4->setText(_myparent->b1->erteke());
        _myparent->szamok[3]=_myparent->b1->erteke();
    }
    if(_myparent->s5->is_selected(ev)){
        _myparent->s5->setText(_myparent->b1->erteke());
        _myparent->szamok[4]=_myparent->b1->erteke();
    }
    if(_myparent->s6->is_selected(ev)){
        _myparent->s6->setText(_myparent->b1->erteke());
        _myparent->szamok[5]=_myparent->b1->erteke();
    }
    if(_myparent->s7->is_selected(ev)){
        _myparent->s7->setText(_myparent->b1->erteke());
        _myparent->szamok[6]=_myparent->b1->erteke();
    }
    if(_myparent->s8->is_selected(ev)){
        _myparent->s8->setText(_myparent->b1->erteke());
        _myparent->szamok[7]=_myparent->b1->erteke();
    }
    if(_myparent->s9->is_selected(ev)){
        _myparent->s9->setText(_myparent->b1->erteke());
        _myparent->szamok[8]=_myparent->b1->erteke();
    }
    if(_myparent->s10->is_selected(ev)){
        _myparent->s10->setText(_myparent->b1->erteke());
        _myparent->szamok[9]=_myparent->b1->erteke();
    }
    if(_myparent->s11->is_selected(ev)){
        _myparent->s11->setText(_myparent->b1->erteke());
        _myparent->szamok[10]=_myparent->b1->erteke();
    }
    if(_myparent->s12->is_selected(ev)){
        _myparent->s12->setText(_myparent->b1->erteke());
        _myparent->szamok[11]=_myparent->b1->erteke();
    }
    if(_myparent->s13->is_selected(ev)){
        _myparent->s13->setText(_myparent->b1->erteke());
        _myparent->szamok[12]=_myparent->b1->erteke();
    }
    if(_myparent->s14->is_selected(ev)){
        _myparent->s14->setText(_myparent->b1->erteke());
        _myparent->szamok[13]=_myparent->b1->erteke();
    }
    if(_myparent->s15->is_selected(ev)){
        _myparent->s15->setText(_myparent->b1->erteke());
        _myparent->szamok[14]=_myparent->b1->erteke();
    }
    if(_myparent->s16->is_selected(ev)){
        _myparent->s16->setText(_myparent->b1->erteke());
        _myparent->szamok[15]=_myparent->b1->erteke();
    }
    if(_myparent->s17->is_selected(ev)){
        _myparent->s17->setText(_myparent->b1->erteke());
        _myparent->szamok[16]=_myparent->b1->erteke();
    }
    if(_myparent->s18->is_selected(ev)){
        _myparent->s18->setText(_myparent->b1->erteke());
        _myparent->szamok[17]=_myparent->b1->erteke();
    }
    if(_myparent->s19->is_selected(ev)){
        _myparent->s19->setText(_myparent->b1->erteke());
        _myparent->szamok[18]=_myparent->b1->erteke();
    }
    if(_myparent->s20->is_selected(ev)){
        _myparent->s20->setText(_myparent->b1->erteke());
        _myparent->szamok[19]=_myparent->b1->erteke();
    }
    if(_myparent->s21->is_selected(ev)){
        _myparent->s21->setText(_myparent->b1->erteke());
        _myparent->szamok[20]=_myparent->b1->erteke();
    }
    if(_myparent->s22->is_selected(ev)){
        _myparent->s22->setText(_myparent->b1->erteke());
        _myparent->szamok[21]=_myparent->b1->erteke();
    }
    if(_myparent->s23->is_selected(ev)){
        _myparent->s23->setText(_myparent->b1->erteke());
        _myparent->szamok[22]=_myparent->b1->erteke();
    }
    if(_myparent->s24->is_selected(ev)){
        _myparent->s24->setText(_myparent->b1->erteke());
        _myparent->szamok[23]=_myparent->b1->erteke();
    }
    if(_myparent->s25->is_selected(ev)){
        _myparent->s25->setText(_myparent->b1->erteke());
        _myparent->szamok[24]=_myparent->b1->erteke();
    }
    if(_myparent->s26->is_selected(ev)){
        _myparent->s26->setText(_myparent->b1->erteke());
        _myparent->szamok[25]=_myparent->b1->erteke();
    }
    if(_myparent->s27->is_selected(ev)){
        _myparent->s27->setText(_myparent->b1->erteke());
        _myparent->szamok[26]=_myparent->b1->erteke();
    }
    if(_myparent->s28->is_selected(ev)){
        _myparent->s28->setText(_myparent->b1->erteke());
        _myparent->szamok[27]=_myparent->b1->erteke();
    }
    if(_myparent->s29->is_selected(ev)){
        _myparent->s29->setText(_myparent->b1->erteke());
        _myparent->szamok[28]=_myparent->b1->erteke();
    }
    if(_myparent->s30->is_selected(ev)){
        _myparent->s30->setText(_myparent->b1->erteke());
        _myparent->szamok[29]=_myparent->b1->erteke();
    }
    if(_myparent->s31->is_selected(ev)){
        _myparent->s31->setText(_myparent->b1->erteke());
        _myparent->szamok[30]=_myparent->b1->erteke();
    }
    if(_myparent->s32->is_selected(ev)){
        _myparent->s32->setText(_myparent->b1->erteke());
        _myparent->szamok[31]=_myparent->b1->erteke();
    }
    if(_myparent->s33->is_selected(ev)){
        _myparent->s33->setText(_myparent->b1->erteke());
        _myparent->szamok[32]=_myparent->b1->erteke();
    }
    if(_myparent->s34->is_selected(ev)){
        _myparent->s34->setText(_myparent->b1->erteke());
        _myparent->szamok[33]=_myparent->b1->erteke();
    }
    if(_myparent->s35->is_selected(ev)){
        _myparent->s35->setText(_myparent->b1->erteke());
        _myparent->szamok[34]=_myparent->b1->erteke();
    }
    if(_myparent->s36->is_selected(ev)){
        _myparent->s36->setText(_myparent->b1->erteke());
        _myparent->szamok[35]=_myparent->b1->erteke();
    }
    if(_myparent->s37->is_selected(ev)){
        _myparent->s37->setText(_myparent->b1->erteke());
        _myparent->szamok[36]=_myparent->b1->erteke();
    }
    if(_myparent->s38->is_selected(ev)){
        _myparent->s38->setText(_myparent->b1->erteke());
        _myparent->szamok[37]=_myparent->b1->erteke();
    }
    if(_myparent->s39->is_selected(ev)){
        _myparent->s39->setText(_myparent->b1->erteke());
        _myparent->szamok[38]=_myparent->b1->erteke();
    }
    if(_myparent->s40->is_selected(ev)){
        _myparent->s40->setText(_myparent->b1->erteke());
        _myparent->szamok[39]=_myparent->b1->erteke();
    }
    if(_myparent->s41->is_selected(ev)){
        _myparent->s41->setText(_myparent->b1->erteke());
        _myparent->szamok[40]=_myparent->b1->erteke();
    }
    if(_myparent->s42->is_selected(ev)){
        _myparent->s42->setText(_myparent->b1->erteke());
        _myparent->szamok[41]=_myparent->b1->erteke();
    }
    if(_myparent->s43->is_selected(ev)){
        _myparent->s43->setText(_myparent->b1->erteke());
        _myparent->szamok[42]=_myparent->b1->erteke();
    }
    if(_myparent->s44->is_selected(ev)){
        _myparent->s44->setText(_myparent->b1->erteke());
        _myparent->szamok[43]=_myparent->b1->erteke();
    }
    if(_myparent->s45->is_selected(ev)){
        _myparent->s45->setText(_myparent->b1->erteke());
        _myparent->szamok[44]=_myparent->b1->erteke();
    }
    if(_myparent->s46->is_selected(ev)){
        _myparent->s46->setText(_myparent->b1->erteke());
        _myparent->szamok[45]=_myparent->b1->erteke();
    }
    if(_myparent->s47->is_selected(ev)){
        _myparent->s47->setText(_myparent->b1->erteke());
        _myparent->szamok[46]=_myparent->b1->erteke();
    }
    if(_myparent->s48->is_selected(ev)){
        _myparent->s48->setText(_myparent->b1->erteke());
        _myparent->szamok[47]=_myparent->b1->erteke();
    }
    if(_myparent->s49->is_selected(ev)){
        _myparent->s49->setText(_myparent->b1->erteke());
        _myparent->szamok[48]=_myparent->b1->erteke();
    }
    if(_myparent->s50->is_selected(ev)){
        _myparent->s50->setText(_myparent->b1->erteke());
        _myparent->szamok[49]=_myparent->b1->erteke();
    }
    if(_myparent->s51->is_selected(ev)){
        _myparent->s51->setText(_myparent->b1->erteke());
        _myparent->szamok[50]=_myparent->b1->erteke();
    }

    if(_myparent->s52->is_selected(ev)){
        _myparent->s52->setText(_myparent->b1->erteke());
        _myparent->szamok[51]=_myparent->b1->erteke();
    }
    if(_myparent->s53->is_selected(ev)){
        _myparent->s53->setText(_myparent->b1->erteke());
        _myparent->szamok[52]=_myparent->b1->erteke();
    }
    if(_myparent->s54->is_selected(ev)){
        _myparent->s54->setText(_myparent->b1->erteke());
        _myparent->szamok[53]=_myparent->b1->erteke();
    }
    if(_myparent->s55->is_selected(ev)){
        _myparent->s55->setText(_myparent->b1->erteke());
        _myparent->szamok[54]=_myparent->b1->erteke();
    }
    if(_myparent->s56->is_selected(ev)){
        _myparent->s56->setText(_myparent->b1->erteke());
        _myparent->szamok[55]=_myparent->b1->erteke();
    }
    if(_myparent->s57->is_selected(ev)){
        _myparent->s57->setText(_myparent->b1->erteke());
        _myparent->szamok[56]=_myparent->b1->erteke();
    }
    if(_myparent->s58->is_selected(ev)){
        _myparent->s58->setText(_myparent->b1->erteke());
        _myparent->szamok[57]=_myparent->b1->erteke();
    }
    if(_myparent->s59->is_selected(ev)){
        _myparent->s59->setText(_myparent->b1->erteke());
        _myparent->szamok[58]=_myparent->b1->erteke();
    }
    if(_myparent->s60->is_selected(ev)){
        _myparent->s60->setText(_myparent->b1->erteke());
        _myparent->szamok[59]=_myparent->b1->erteke();
    }
    if(_myparent->s61->is_selected(ev)){
        _myparent->s61->setText(_myparent->b1->erteke());
        _myparent->szamok[60]=_myparent->b1->erteke();
    }
    if(_myparent->s62->is_selected(ev)){
        _myparent->s62->setText(_myparent->b1->erteke());
        _myparent->szamok[61]=_myparent->b1->erteke();
    }
    if(_myparent->s63->is_selected(ev)){
        _myparent->s63->setText(_myparent->b1->erteke());
        _myparent->szamok[62]=_myparent->b1->erteke();
    }
    if(_myparent->s64->is_selected(ev)){
        _myparent->s64->setText(_myparent->b1->erteke());
        _myparent->szamok[63]=_myparent->b1->erteke();
    }
    if(_myparent->s65->is_selected(ev)){
        _myparent->s65->setText(_myparent->b1->erteke());
        _myparent->szamok[64]=_myparent->b1->erteke();
    }
    if(_myparent->s66->is_selected(ev)){
        _myparent->s66->setText(_myparent->b1->erteke());
        _myparent->szamok[65]=_myparent->b1->erteke();
    }
    if(_myparent->s67->is_selected(ev)){
        _myparent->s67->setText(_myparent->b1->erteke());
        _myparent->szamok[66]=_myparent->b1->erteke();
    }
    if(_myparent->s68->is_selected(ev)){
        _myparent->s68->setText(_myparent->b1->erteke());
        _myparent->szamok[67]=_myparent->b1->erteke();
    }
    if(_myparent->s69->is_selected(ev)){
        _myparent->s69->setText(_myparent->b1->erteke());
        _myparent->szamok[68]=_myparent->b1->erteke();
    }
    if(_myparent->s70->is_selected(ev)){
        _myparent->s70->setText(_myparent->b1->erteke());
        _myparent->szamok[69]=_myparent->b1->erteke();
    }
    if(_myparent->s71->is_selected(ev)){
        _myparent->s71->setText(_myparent->b1->erteke());
        _myparent->szamok[70]=_myparent->b1->erteke();
    }
    if(_myparent->s72->is_selected(ev)){
        _myparent->s72->setText(_myparent->b1->erteke());
        _myparent->szamok[71]=_myparent->b1->erteke();
    }
    if(_myparent->s73->is_selected(ev)){
        _myparent->s73->setText(_myparent->b1->erteke());
        _myparent->szamok[72]=_myparent->b1->erteke();
    }
    if(_myparent->s74->is_selected(ev)){
        _myparent->s74->setText(_myparent->b1->erteke());
        _myparent->szamok[73]=_myparent->b1->erteke();
    }
    if(_myparent->s75->is_selected(ev)){
        _myparent->s75->setText(_myparent->b1->erteke());
        _myparent->szamok[74]=_myparent->b1->erteke();
    }
    if(_myparent->s76->is_selected(ev)){
        _myparent->s76->setText(_myparent->b1->erteke());
        _myparent->szamok[75]=_myparent->b1->erteke();
    }
    if(_myparent->s77->is_selected(ev)){
        _myparent->s77->setText(_myparent->b1->erteke());
        _myparent->szamok[76]=_myparent->b1->erteke();
    }
    if(_myparent->s78->is_selected(ev)){
        _myparent->s78->setText(_myparent->b1->erteke());
        _myparent->szamok[77]=_myparent->b1->erteke();
    }
    if(_myparent->s79->is_selected(ev)){
        _myparent->s79->setText(_myparent->b1->erteke());
        _myparent->szamok[78]=_myparent->b1->erteke();
    }
    if(_myparent->s80->is_selected(ev)){
        _myparent->s80->setText(_myparent->b1->erteke());
        _myparent->szamok[79]=_myparent->b1->erteke();
    }
    if(_myparent->s81->is_selected(ev)){
        _myparent->s81->setText(_myparent->b1->erteke());
        _myparent->szamok[80]=_myparent->b1->erteke();
    }
    for(int i=0; i<_myparent->szamok.size();i++){
        int index=1;
        ///Sorba Előre///
        if(index==1){
            if(i<80){
                if(i!=8 && i!=17 && i!=26 && i!=35 && i!=44 && i!=53 && i!=62 && i!=71){
                    if(_myparent->szamok[i]==_myparent->szamok[i+1]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i<79){
                if(i!=8 && i!=17 && i!=26 && i!=35 && i!=44 && i!=53 && i!=62 && i!=71 && i!=7 && i!=16 && i!=25 && i!=34 && i!=43 && i!=52 && i!=61 && i!=70){
                    if(_myparent->szamok[i]==_myparent->szamok[i+2]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i<78){
                if(i!=8 && i!=17 && i!=26 && i!=35 && i!=44 && i!=53 && i!=62 && i!=71 && i!=7 && i!=16 && i!=25 && i!=34 && i!=43 && i!=52 && i!=61 && i!=70 && i!=6 && i!=15 && i!=24 && i!=33 && i!=42 && i!=51 && i!=60 && i!=69){
                    if(_myparent->szamok[i]==_myparent->szamok[i+3]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i<77){
                if(i!=8 && i!=17 && i!=26 && i!=35 && i!=44 && i!=53 && i!=62 && i!=71 && i!=7 && i!=16 && i!=25 && i!=34 && i!=43 && i!=52 && i!=61 && i!=70 && i!=6 && i!=15 && i!=24 && i!=33 && i!=42 && i!=51 && i!=60 && i!=69 && i!=5 && i!=14 && i!=23 && i!=32 && i!=41 && i!=50 && i!=59 && i!=68){
                    if(_myparent->szamok[i]==_myparent->szamok[i+4]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i<76){
                if(i!=8 && i!=17 && i!=26 && i!=35 && i!=44 && i!=53 && i!=62 && i!=71 && i!=7 && i!=16 && i!=25 && i!=34 && i!=43 && i!=52 && i!=61 && i!=70 && i!=6 && i!=15 && i!=24 && i!=33 && i!=42 && i!=51 && i!=60 && i!=69 && i!=5 && i!=14 && i!=23 && i!=32 && i!=41 && i!=50 && i!=59 && i!=68 && i!=4 && i!=13 && i!=22 && i!=31 && i!=40 && i!=49 && i!=58 && i!=67){
                    if(_myparent->szamok[i]==_myparent->szamok[i+5]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i<75){
                if(i!=8 && i!=17 && i!=26 && i!=35 && i!=44 && i!=53 && i!=62 && i!=71 && i!=7 && i!=16 && i!=25 && i!=34 && i!=43 && i!=52 && i!=61 && i!=70 && i!=6 && i!=15 && i!=24 && i!=33 && i!=42 && i!=51 && i!=60 && i!=69 && i!=5 && i!=14 && i!=23 && i!=32 && i!=41 && i!=50 && i!=59 && i!=68 && i!=4 && i!=13 && i!=22 && i!=31 && i!=40 && i!=49 && i!=58 && i!=67 && i!=3 && i!=12 && i!=21 && i!=30 && i!=39 && i!=48 && i!=57 && i!=66){
                    if(_myparent->szamok[i]==_myparent->szamok[i+6]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i<74){
                if(i!=8 && i!=17 && i!=26 && i!=35 && i!=44 && i!=53 && i!=62 && i!=71 && i!=7 && i!=16 && i!=25 && i!=34 && i!=43 && i!=52 && i!=61 && i!=70 && i!=6 && i!=15 && i!=24 && i!=33 && i!=42 && i!=51 && i!=60 && i!=69 && i!=5 && i!=14 && i!=23 && i!=32 && i!=41 && i!=50 && i!=59 && i!=68 && i!=4 && i!=13 && i!=22 && i!=31 && i!=40 && i!=49 && i!=58 && i!=67 && i!=3 && i!=12 && i!=21 && i!=30 && i!=39 && i!=48 && i!=57 && i!=66 && i!=2 && i!=11 && i!=20 && i!=29 && i!=38 && i!=47 && i!=56 && i!=65){
                    if(_myparent->szamok[i]==_myparent->szamok[i+7]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i<73){
                if(i!=8 && i!=17 && i!=26 && i!=35 && i!=44 && i!=53 && i!=62 && i!=71 && i!=7 && i!=16 && i!=25 && i!=34 && i!=43 && i!=52 && i!=61 && i!=70 && i!=6 && i!=15 && i!=24 && i!=33 && i!=42 && i!=51 && i!=60 && i!=69 && i!=5 && i!=14 && i!=23 && i!=32 && i!=41 && i!=50 && i!=59 && i!=68 && i!=4 && i!=13 && i!=22 && i!=31 && i!=40 && i!=49 && i!=58 && i!=67 && i!=3 && i!=12 && i!=21 && i!=30 && i!=39 && i!=48 && i!=57 && i!=66 && i!=2 && i!=11 && i!=20 && i!=29 && i!=38 && i!=47 && i!=56 && i!=65 && i!=1 && i!=10 && i!=19 && i!=28 && i!=37 && i!=46 && i!=55 && i!=64){
                    if(_myparent->szamok[i]==_myparent->szamok[i+8]){
                        index=0;
                    }
                }
            }
        }
        ///Sorba Hátra///
        if(index==1){
            if(i>0){
                if(i!=9 && i!=18 && i!=27 && i!=36 && i!=45 && i!=54 && i!=63 && i!=72){
                    if(_myparent->szamok[i]==_myparent->szamok[i-1]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i>1){
                if(i!=9 && i!=18 && i!=27 && i!=36 && i!=45 && i!=54 && i!=63 && i!=72 && i!=10 && i!=19 && i!=28 && i!=37 && i!=46 && i!=55 && i!=64 && i!=73){
                    if(_myparent->szamok[i]==_myparent->szamok[i-2]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i>2){
                if(i!=9 && i!=18 && i!=27 && i!=36 && i!=45 && i!=54 && i!=63 && i!=72 && i!=10 && i!=19 && i!=28 && i!=37 && i!=46 && i!=55 && i!=64 && i!=73 && i!=11 && i!=20 && i!=29 && i!=38 && i!=47 && i!=56 && i!=65 && i!=74){
                    if(_myparent->szamok[i]==_myparent->szamok[i-3]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i>3){
                if(i!=9 && i!=18 && i!=27 && i!=36 && i!=45 && i!=54 && i!=63 && i!=72 && i!=10 && i!=19 && i!=28 && i!=37 && i!=46 && i!=55 && i!=64 && i!=73 && i!=11 && i!=20 && i!=29 && i!=38 && i!=47 && i!=56 && i!=65 && i!=74 && i!=12 && i!=21 && i!=30 && i!=39 && i!=48 && i!=57 && i!=66 && i!=75){
                    if(_myparent->szamok[i]==_myparent->szamok[i-4]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i>4){
                if(i!=9 && i!=18 && i!=27 && i!=36 && i!=45 && i!=54 && i!=63 && i!=72 && i!=10 && i!=19 && i!=28 && i!=37 && i!=46 && i!=55 && i!=64 && i!=73 && i!=11 && i!=20 && i!=29 && i!=38 && i!=47 && i!=56 && i!=65 && i!=74 && i!=12 && i!=21 && i!=30 && i!=39 && i!=48 && i!=57 && i!=66 && i!=75 && i!=13 && i!=22 && i!=31 && i!=40 && i!=49 && i!=58 && i!=67 && i!=76){
                    if(_myparent->szamok[i]==_myparent->szamok[i-5]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i>5){
                if(i!=9 && i!=18 && i!=27 && i!=36 && i!=45 && i!=54 && i!=63 && i!=72 && i!=10 && i!=19 && i!=28 && i!=37 && i!=46 && i!=55 && i!=64 && i!=73 && i!=11 && i!=20 && i!=29 && i!=38 && i!=47 && i!=56 && i!=65 && i!=74 && i!=12 && i!=21 && i!=30 && i!=39 && i!=48 && i!=57 && i!=66 && i!=75 && i!=13 && i!=22 && i!=31 && i!=40 && i!=49 && i!=58 && i!=67 && i!=76 && i!=14 && i!=23 && i!=32 && i!=41 && i!=50 && i!=59 && i!=68 && i!=77){
                    if(_myparent->szamok[i]==_myparent->szamok[i-6]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i>6){
                if(i!=9 && i!=18 && i!=27 && i!=36 && i!=45 && i!=54 && i!=63 && i!=72 && i!=10 && i!=19 && i!=28 && i!=37 && i!=46 && i!=55 && i!=64 && i!=73 && i!=11 && i!=20 && i!=29 && i!=38 && i!=47 && i!=56 && i!=65 && i!=74 && i!=12 && i!=21 && i!=30 && i!=39 && i!=48 && i!=57 && i!=66 && i!=75 && i!=13 && i!=22 && i!=31 && i!=40 && i!=49 && i!=58 && i!=67 && i!=76 && i!=14 && i!=23 && i!=32 && i!=41 && i!=50 && i!=59 && i!=68 && i!=77 && i!=15 && i!=24 && i!=33 && i!=42 && i!=51 && i!=60 && i!=69 && i!=78){
                    if(_myparent->szamok[i]==_myparent->szamok[i-7]){
                        index=0;
                    }
                }
            }
        }
        if(index==1){
            if(i>7){
                if(i!=9 && i!=18 && i!=27 && i!=36 && i!=45 && i!=54 && i!=63 && i!=72 && i!=10 && i!=19 && i!=28 && i!=37 && i!=46 && i!=55 && i!=64 && i!=73 && i!=11 && i!=20 && i!=29 && i!=38 && i!=47 && i!=56 && i!=65 && i!=74 && i!=12 && i!=21 && i!=30 && i!=39 && i!=48 && i!=57 && i!=66 && i!=75 && i!=13 && i!=22 && i!=31 && i!=40 && i!=49 && i!=58 && i!=67 && i!=76 && i!=14 && i!=23 && i!=32 && i!=41 && i!=50 && i!=59 && i!=68 && i!=77 && i!=15 && i!=24 && i!=33 && i!=42 && i!=51 && i!=60 && i!=69 && i!=78 && i!=16 && i!=25 && i!=34 && i!=43 && i!=52 && i!=61 && i!=70 && i!=79){
                    if(_myparent->szamok[i]==_myparent->szamok[i-8]){
                        index=0;
                    }
                }
            }
        }
        ///Lefele Előre///
        if(index==1){
            if(i<72){
                if(_myparent->szamok[i]==_myparent->szamok[i+9]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i<63){
                if(_myparent->szamok[i]==_myparent->szamok[i+18]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i<54){
                if(_myparent->szamok[i]==_myparent->szamok[i+27]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i<45){
                if(_myparent->szamok[i]==_myparent->szamok[i+36]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i<36){
                if(_myparent->szamok[i]==_myparent->szamok[i+45]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i<27){
                if(_myparent->szamok[i]==_myparent->szamok[i+54]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i<18){
                if(_myparent->szamok[i]==_myparent->szamok[i+63]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i<9){
                if(_myparent->szamok[i]==_myparent->szamok[i+72]){
                    index=0;
                }
            }
        }
        ///Lefele Hátra///
        if(index==1){
            if(i>8){
                if(_myparent->szamok[i]==_myparent->szamok[i-9]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i>17){
                if(_myparent->szamok[i]==_myparent->szamok[i-18]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i>26){
                if(_myparent->szamok[i]==_myparent->szamok[i-27]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i>35){
                if(_myparent->szamok[i]==_myparent->szamok[i-36]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i>44){
                if(_myparent->szamok[i]==_myparent->szamok[i-45]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i>53){
                if(_myparent->szamok[i]==_myparent->szamok[i-54]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i>62){
                if(_myparent->szamok[i]==_myparent->szamok[i-63]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i>71){
                if(_myparent->szamok[i]==_myparent->szamok[i-72]){
                    index=0;
                }
            }
        }

        ///Négyzetek///
        if(index==1){
            if(i==0 || i==3 || i==6 || i==27 || i==30 || i==33 || i==54 || i==57 || i==60){
                if(_myparent->szamok[i]==_myparent->szamok[i+1] || _myparent->szamok[i]==_myparent->szamok[i+2] || _myparent->szamok[i]==_myparent->szamok[i+9] || _myparent->szamok[i]==_myparent->szamok[i+10] || _myparent->szamok[i]==_myparent->szamok[i+11] || _myparent->szamok[i]==_myparent->szamok[i+18] || _myparent->szamok[i]==_myparent->szamok[i+19] || _myparent->szamok[i]==_myparent->szamok[i+20]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i==1 || i==4 || i==7 || i==28 || i==31 || i==34 || i==55 || i==58 || i==61){
                if(_myparent->szamok[i]==_myparent->szamok[i-1] || _myparent->szamok[i]==_myparent->szamok[i+1] || _myparent->szamok[i]==_myparent->szamok[i+8] || _myparent->szamok[i]==_myparent->szamok[i+9] || _myparent->szamok[i]==_myparent->szamok[i+10] || _myparent->szamok[i]==_myparent->szamok[i+17] || _myparent->szamok[i]==_myparent->szamok[i+18] || _myparent->szamok[i]==_myparent->szamok[i+19]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i==2 || i==5 || i==8 || i==29 || i==32 || i==35 || i==56 || i==59 || i==62){
                if(_myparent->szamok[i]==_myparent->szamok[i-1] || _myparent->szamok[i]==_myparent->szamok[i-2] || _myparent->szamok[i]==_myparent->szamok[i+7] || _myparent->szamok[i]==_myparent->szamok[i+8] || _myparent->szamok[i]==_myparent->szamok[i+9] || _myparent->szamok[i]==_myparent->szamok[i+16] || _myparent->szamok[i]==_myparent->szamok[i+17] || _myparent->szamok[i]==_myparent->szamok[i+18]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i==9 || i==12 || i==15 || i==36 || i==39 || i==42 || i==63 || i==66 || i==69){
                if(_myparent->szamok[i]==_myparent->szamok[i+1] || _myparent->szamok[i]==_myparent->szamok[i+2] || _myparent->szamok[i]==_myparent->szamok[i+9] || _myparent->szamok[i]==_myparent->szamok[i+10] || _myparent->szamok[i]==_myparent->szamok[i+11] || _myparent->szamok[i]==_myparent->szamok[i-9] || _myparent->szamok[i]==_myparent->szamok[i-8] || _myparent->szamok[i]==_myparent->szamok[i-7]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i==10 || i==13 || i==16 || i==37 || i==40 || i==43 || i==64 || i==67 || i==70){
                if(_myparent->szamok[i]==_myparent->szamok[i-1] || _myparent->szamok[i]==_myparent->szamok[i+1] || _myparent->szamok[i]==_myparent->szamok[i+8] || _myparent->szamok[i]==_myparent->szamok[i+9] || _myparent->szamok[i]==_myparent->szamok[i+10] || _myparent->szamok[i]==_myparent->szamok[i-10] || _myparent->szamok[i]==_myparent->szamok[i-9] || _myparent->szamok[i]==_myparent->szamok[i-8]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i==11 || i==14 || i==17 || i==38 || i==41 || i==44 || i==65 || i==68 || i==71){
                if(_myparent->szamok[i]==_myparent->szamok[i-1] || _myparent->szamok[i]==_myparent->szamok[i-2] || _myparent->szamok[i]==_myparent->szamok[i+7] || _myparent->szamok[i]==_myparent->szamok[i+8] || _myparent->szamok[i]==_myparent->szamok[i+9] || _myparent->szamok[i]==_myparent->szamok[i-11] || _myparent->szamok[i]==_myparent->szamok[i-10] || _myparent->szamok[i]==_myparent->szamok[i-9]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i==18 || i==21 || i==24 || i==45 || i==48 || i==51 || i==72 || i==75 || i==78){
                if(_myparent->szamok[i]==_myparent->szamok[i+1] || _myparent->szamok[i]==_myparent->szamok[i+2] || _myparent->szamok[i]==_myparent->szamok[i-9] || _myparent->szamok[i]==_myparent->szamok[i-8] || _myparent->szamok[i]==_myparent->szamok[i-7] || _myparent->szamok[i]==_myparent->szamok[i-18] || _myparent->szamok[i]==_myparent->szamok[i-17] || _myparent->szamok[i]==_myparent->szamok[i-16]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i==19 || i==22 || i==25 || i==46 || i==49 || i==52 || i==73 || i==76 || i==79){
                if(_myparent->szamok[i]==_myparent->szamok[i-1] || _myparent->szamok[i]==_myparent->szamok[i+1] || _myparent->szamok[i]==_myparent->szamok[i-10] || _myparent->szamok[i]==_myparent->szamok[i-9] || _myparent->szamok[i]==_myparent->szamok[i-8]|| _myparent->szamok[i]==_myparent->szamok[i-19] || _myparent->szamok[i]==_myparent->szamok[i-18] || _myparent->szamok[i]==_myparent->szamok[i-17]){
                    index=0;
                }
            }
        }
        if(index==1){
            if(i==20 || i==23 || i==26 || i==47 || i==50 || i==53 || i==74 || i==77 || i==80){
                if(_myparent->szamok[i]==_myparent->szamok[i-1] || _myparent->szamok[i]==_myparent->szamok[i-2] || _myparent->szamok[i]==_myparent->szamok[i-11] || _myparent->szamok[i]==_myparent->szamok[i-10] || _myparent->szamok[i]==_myparent->szamok[i-9]|| _myparent->szamok[i]==_myparent->szamok[i-20] || _myparent->szamok[i]==_myparent->szamok[i-19] || _myparent->szamok[i]==_myparent->szamok[i-18]){
                    index=0;
                }
            }
        }


        if(i==0){
            _myparent->s1->setRossz(index);
        }
        if(i==1){
            _myparent->s2->setRossz(index);
        }
        if(i==2){
            _myparent->s3->setRossz(index);
        }
        if(i==3){
            _myparent->s4->setRossz(index);
        }
        if(i==4){
            _myparent->s5->setRossz(index);
        }
        if(i==5){
            _myparent->s6->setRossz(index);
        }
        if(i==6){
            _myparent->s7->setRossz(index);
        }
        if(i==7){
            _myparent->s8->setRossz(index);
        }
        if(i==8){
            _myparent->s9->setRossz(index);
        }
        if(i==9){
            _myparent->s10->setRossz(index);
        }
        if(i==10){
            _myparent->s11->setRossz(index);
        }
        if(i==11){
            _myparent->s12->setRossz(index);
        }
        if(i==12){
            _myparent->s13->setRossz(index);
        }
        if(i==13){
            _myparent->s14->setRossz(index);
        }
        if(i==14){
            _myparent->s15->setRossz(index);
        }
        if(i==15){
            _myparent->s16->setRossz(index);
        }
        if(i==16){
            _myparent->s17->setRossz(index);
        }
        if(i==17){
            _myparent->s18->setRossz(index);
        }
        if(i==18){
            _myparent->s19->setRossz(index);
        }
        if(i==19){
            _myparent->s20->setRossz(index);
        }
        if(i==20){
            _myparent->s21->setRossz(index);
        }
        if(i==21){
            _myparent->s22->setRossz(index);
        }
        if(i==22){
            _myparent->s23->setRossz(index);
        }
        if(i==23){
            _myparent->s24->setRossz(index);
        }
        if(i==24){
            _myparent->s25->setRossz(index);
        }
        if(i==25){
            _myparent->s26->setRossz(index);
        }
        if(i==26){
            _myparent->s27->setRossz(index);
        }
        if(i==27){
            _myparent->s28->setRossz(index);
        }
        if(i==28){
            _myparent->s29->setRossz(index);
        }
        if(i==29){
            _myparent->s30->setRossz(index);
        }
        if(i==30){
            _myparent->s31->setRossz(index);
        }
        if(i==31){
            _myparent->s32->setRossz(index);
        }
        if(i==32){
            _myparent->s33->setRossz(index);
        }
        if(i==33){
            _myparent->s34->setRossz(index);
        }
        if(i==34){
            _myparent->s35->setRossz(index);
        }
        if(i==35){
            _myparent->s36->setRossz(index);
        }
        if(i==36){
            _myparent->s37->setRossz(index);
        }
        if(i==37){
            _myparent->s38->setRossz(index);
        }
        if(i==38){
            _myparent->s39->setRossz(index);
        }
        if(i==39){
            _myparent->s40->setRossz(index);
        }
        if(i==40){
            _myparent->s41->setRossz(index);
        }
        if(i==41){
            _myparent->s42->setRossz(index);
        }
        if(i==42){
            _myparent->s43->setRossz(index);
        }
        if(i==43){
            _myparent->s44->setRossz(index);
        }
        if(i==44){
            _myparent->s45->setRossz(index);
        }
        if(i==45){
            _myparent->s46->setRossz(index);
        }
        if(i==46){
            _myparent->s47->setRossz(index);
        }
        if(i==47){
            _myparent->s48->setRossz(index);
        }
        if(i==48){
            _myparent->s49->setRossz(index);
        }
        if(i==49){
            _myparent->s50->setRossz(index);
        }
        if(i==50){
            _myparent->s51->setRossz(index);
        }
        if(i==51){
            _myparent->s52->setRossz(index);
        }
        if(i==52){
            _myparent->s53->setRossz(index);
        }
        if(i==53){
            _myparent->s54->setRossz(index);
        }
        if(i==54){
            _myparent->s55->setRossz(index);
        }
        if(i==55){
            _myparent->s56->setRossz(index);
        }
        if(i==56){
            _myparent->s57->setRossz(index);
        }
        if(i==57){
            _myparent->s58->setRossz(index);
        }
        if(i==58){
            _myparent->s59->setRossz(index);
        }
        if(i==59){
            _myparent->s60->setRossz(index);
        }
        if(i==60){
            _myparent->s61->setRossz(index);
        }
        if(i==61){
            _myparent->s62->setRossz(index);
        }
        if(i==62){
            _myparent->s63->setRossz(index);
        }
        if(i==63){
            _myparent->s64->setRossz(index);
        }
        if(i==64){
            _myparent->s65->setRossz(index);
        }
        if(i==65){
            _myparent->s66->setRossz(index);
        }
        if(i==66){
            _myparent->s67->setRossz(index);
        }
        if(i==67){
            _myparent->s68->setRossz(index);
        }
        if(i==68){
            _myparent->s69->setRossz(index);
        }
        if(i==69){
            _myparent->s70->setRossz(index);
        }
        if(i==70){
            _myparent->s71->setRossz(index);
        }
        if(i==71){
            _myparent->s72->setRossz(index);
        }
        if(i==72){
            _myparent->s73->setRossz(index);
        }
        if(i==73){
            _myparent->s74->setRossz(index);
        }
        if(i==74){
            _myparent->s75->setRossz(index);
        }
        if(i==75){
            _myparent->s76->setRossz(index);
        }
        if(i==76){
            _myparent->s77->setRossz(index);
        }
        if(i==77){
            _myparent->s78->setRossz(index);
        }
        if(i==78){
            _myparent->s79->setRossz(index);
        }
        if(i==79){
            _myparent->s80->setRossz(index);
        }
        if(i==80){
            _myparent->s81->setRossz(index);
        }
    }
}


int main()
{
    My_Window * mywindow = new My_Window(800,600);
    mywindow->event_loop();
    return 0;
}
