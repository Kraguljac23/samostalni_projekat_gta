#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

enum BojaMape{PURPLE, BLUE, GREY};
enum TipMesta{OBJEKTI, OSOBE};

class mapa(){
private:
    List<Ustanova> u;
    BojaMape boja;
    DinString DeoMape;
    bool otkljucano;
    TipMesta mesto;
public:
    mapa():EscMenu(){
    if()
    }

    mapa(DinString dm, BojaMape b, bool o, TipMesta m){
         boja = b;
         otkljucano = o;
         DeoMape = dm;
         mesto = m;
    }

    mapa(const mapa& m): EscMenu(m.vreme){
        boja = m.boja;
        otkljucano = m.otkljucano;
        DeoMape = m.deomape;
        mesto = m.mesto;
    }



    getBojaMape()const {return boja;}
    void setBojaMape(BojaMape b)(boja = b);

    getDeoMape()const {return DeoMape;}
    void setDeoMape(DinString dm)(DeoMape = dm);

    getTipMesta()const {return mesto;}
    void setTipMesta(TipMesta m)(mesto = m);

    getotkljucano()const {return otkljucano;}
};

#endif // MAPA_H_INCLUDED
