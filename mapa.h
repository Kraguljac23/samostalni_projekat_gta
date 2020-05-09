#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

enum TipMape{NAVIGATION, WL, ESCMANU};
enum BojaMape{PURPLE, BLUE, GREY};
enum Velicina{ZOOMED, UNZOOMED};

class mapa(){
private:
    TipMape MAP;
    BojaMape boja;
    Velicina SIZE;
public:
    mapa():EscMenu(){
    if(MAP = WL){
        vreme = 1;
        boja = BLUE;
        SIZE = ZOOMED;
    }else if(MAP = ESCMANU){
        vreme = 2;
        boja = GREY;
        SIZE = UNZOOMED;
    }else if(MAP = NAVIGATION)
        boja = PURPLE;
        vreme = 3;
        SIZE = ZOOMED;
    }

    mapa(TipMape m, BojaMape b, Velicina s){
         MAP = m;
         boja = b;
         SIZE = s;
    }

    mapa(const mapa& m){
        MAP = m.MAP;
        boja = m.boja;
        SIZE = m.SIZE;
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
};

#endif // MAPA_H_INCLUDED
