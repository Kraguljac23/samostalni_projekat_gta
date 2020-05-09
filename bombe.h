#ifndef BOMBE_H_INCLUDED
#define BOMBE_H_INCLUDED

#include "oruzje.h"

enum TipBombe{GRANATA, STUN, SMOKE};


class bombe: public oruzje{
private:
    TipBombe bum;
    int damage;
public:
    bomba():oruzje(){
    tip = BOMBA;
    puc = EXPLOSION;
    cena = 1100;
    BrMunicije = 3;
    TrenutnoMunicije = 2;

     if(TipBombe == STUN || TipBombe == SMOKE{
        damage = 0;
    }else {
    damage = 150;
    }
    }

    bomba(int c, int br, int d, int tm, TipBombe b, TipOruzja t, TipPucanja p):oruzje(c, br, p, t, tm){
        damage = d;
        bum = b;
    }



    bombe(const bombe &boom):oruzje(boom.cena, boom.tip, boom.puc, boom.BrMunicije, boom.TrenutnoMunicije){
        damage = boom.damage;
        bum = boom.bum;
    }


    GetTipBombe()const{return TipBombe;}
    void SetTipBombe(TipBombe b)(bum = b);

    int getdamage()const {return damage;}
    void setdamage(int d)(damage = d);
};



#endif // BOMBE_H_INCLUDED
