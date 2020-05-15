#ifndef PLJACKA_H_INCLUDED
#define PLJACKA_H_INCLUDED

enum TipPljacke{NOVAC, ZLATO, NAKIT, VOZILA};

class pljacka: public misije{
private:
    TipPljacke tip;
    double vrednost;
public:
    ubistvo():misije(){
        tip = NOVAC;
        vrednost = 156000;
    }

    pljacka(DinString nm, DinString mp, double r, DinString o, DinString n, TipPljacke t, double v):misije(nm, o, r, mp, n){
        tip = t;
        vrednost = v;
    }

    pljacka(const pljacka& p):misije(u.opis, u.nazivMisije, u.MissionPart, u.NPCs, u.reward){
        tip = p.tip;
        vrednost = p.vrednost;
    }

    getTipPljacke()const {return tip;}
    void setTipPljacke(TipPljacke t)(tip = t);

    double getvrednost()const {return vrednost;}
    void setvrednost(double v)(vrednost = v);
};

#endif // PLJACKA_H_INCLUDED
