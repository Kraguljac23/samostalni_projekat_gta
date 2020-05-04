#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

enum TipMape{NAVIGATION, WL, ESCMANU};
enum BojaMape{PURPLE, BLUE, GREY};
enum Velicina{ZOOMED, UNZOOMED};

class mapa(): public EscMenu{
private:
    TipMape MAP;
    BojaMape boja;
    Velicina SIZE;
    bool wl;
public:
    mapa():EscMenu(){
    if(MAP = WL){
        vreme = 1;
        wl = true;
        boja = BLUE;
        SIZE = ZOOMED;
    }else if(MAP = ESCMANU){
        vreme = 2;
        wl = false;
        boja = GREY;
        SIZE = UNZOOMED;
    }else if(MAP = NAVIGATION)
        boja = PURPLE;
        wl = false;
        vreme = 3;
        SIZE = ZOOMED;
    }

    mapa(TipMape m, BojaMape b, Velicina s, bool w): EscMenu(v){
         MAP = m;
         boja = b;
         SIZE = s;
         wl = w;
    }

    mapa(const mapa& m): EscMenu(m.vreme){
        MAP = m.MAP;
        boja = m.boja;
        SIZE = m.SIZE;
        wl = m.wl;
    }

    bool mapa()::zoom{
    bool uspesno;

    if(SIZE == ZOOMED){
        uspesno = false;
        cout << "Ne mozete vise zumirati." << endl;
    }else{
    uspesno = true;
    SIZE = ZOOMED;
    }
    return uspesno;
    }

    bool mapa()::unzoom{
    bool uspesno;

    if(SIZE == UNZOOMED){
        uspesno = false;
        cout << "Ne mozete vise umanjiti." << endl;
    }else{
    uspesno = true;
    SIZE = UNZOOMED;
    }
    return uspesno;
    }

    bool mapa()::select{
    bool uspesno;

    if(MAP == ESCMANU){
        uspesno = true;
        MAP = NAVIGATION;
        boja = PURPLE;
    }else if(MAP == WL){
        uspesno = false;
        cout << "Imate wanted level ne mozete koristiti navigaciju." << endl
    }else if(MAP == NAVIGATION){
        uspesno = false;
        cout << "Navigacije ja vec ukljucena." << endl;
    }
    return uspesno;
    }

    bool mapa()::cancel{
    bool uspesno;

    if(MAP == NAVIGATION){
        uspesno = true;
        MAP = ESCMANU;
        boja = GREY;
    }else{
        uspesno = false;
        cout << "Nista nije selektovano." << endl;
    }
    return uspesno;
    }

    getTipMape()const {return MAP;}
    void setTipMape(TipMape m)(MAP = m);

    getBojaMape()const {return boja;}
    void setBojaMape(BojaMape b)(boja = b);

    getVelicina()const {return SIZE;}
    void setVelicina(Velicina s)(SIZE = s);

    bool getwl()const {return wl;}
};

#endif // MAPA_H_INCLUDED
