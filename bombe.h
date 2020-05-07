#ifndef BOMBE_H_INCLUDED
#define BOMBE_H_INCLUDED

#include "oruzje.h"

enum TipBombe{GRANATA, STUN, SMOKE};


class bombe: public oruzje{
private:
    TipBombe bum;
    double stanje;
    int damage;
    int TrenutnoMunicije;
public:
    bomba():oruzje(){
    tip = BOMBA;
    puc = EXPLOSION;
    cena = 1100;
    BrMunicije = 3;

     if(TipBombe == STUN || TipBombe == SMOKE{
        damage = 0;
    }else {
    damage = 150;
    }
    }

    bomba(int c, int br, int d, int tm, double s, TipBombe b, TipOruzja t, TipPucanja p):oruzje(c, br, p, t){
        cena = c;
        BrMunicije = br;
        damage = d;
        TrenutnoMunicije = tm;
        stanje = s;
        bum = b;
        tip = t;
        puc = p;
    }


    bool bombe::buy(){
    bool uspesno;

    if(stanje >= cena * 3 && TrenutnoMunicije = 0){
        uspesno = true;
        TrenutnoMunicije = BrMunicije;
    }else{
    uspesno = false;
    count << "Nemate dovoljno sredstava za kupovinu oruzja."
    }
    return uspesno;
    }

    bombe(const bombe &boom):oruzje(boom.cena, boom.tip, boom.puc, boom.BrMunicije){
        TrenutnoMunicije = boom.TrenutnoMunicije;
        stanje = boom.stanje;
        damage = boom.damage;
        bum = boom.bum;
    }


    double GetStanje()const{return stanje;}
    void SetStanje(double stanje)(stanje = s);

    int GetTrenutnoMunicije()const {return TrenutnoMunicije;}
    void setTrenutnoMunicije(int m)(TrenutnoMunicije = m);

    GetTipBombe()const{return TipBombe;}
    void SetTipBombe(TipBombe b)(bum = b);

    int getdamage()const {return damage;}
    void setdamage(int d)(damage = d);
};



#endif // BOMBE_H_INCLUDED
