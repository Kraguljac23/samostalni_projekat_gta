#ifndef ESCMENU_H_INCLUDED
#define ESCMENU_H_INCLUDED

class EscMenu(){
private:
    int vreme; // minute
public:
    EscMenu(){
    vreme = 2;

    }

    EscMenu(int v){
    vreme = v;
    }

    EscMenu(const EscMenu& e){
    vreme = e.vreme;
    }

    bool select();
    bool cancel();
    bool zoom();
    bool unzoom();

    int getvreme()const {return vreme;}
    void setvreme(int v)(vreme = v);
};

#endif // ESCMENU_H_INCLUDED
