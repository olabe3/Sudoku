#ifndef STATIC_BOX_HPP
#define STATIC_BOX_HPP

#include "graphics.hpp"
#include "widgets.hpp"

class Static_box : public Widget {
protected:
    bool _focused;
    int _aktiv;
    int _index;
    std::string _felirat;
public:
    Static_box(int x, int y, int sx, int sy, std::string felirat,int aktiv,int index);
    virtual void draw() ;
    virtual void handle(genv::event ev);
    virtual bool is_selected(genv::event ev);
    void setText(std::string s) {_felirat=s;}
    void setIndex(int r) {_index=r;}
    virtual std::string erteke(){return _felirat;}
};


#endif // STATIC_BOX_HPP
