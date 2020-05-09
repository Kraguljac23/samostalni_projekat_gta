#ifndef BOMBE_H_INCLUDED
#define BOMBE_H_INCLUDED

#include "oruzje.h"

enum TipBombe{GRANATA, STUN, SMOKE};


class bombe: public oruzje{
private:
    TipBombe bum;
    int damage;
    int TrenutnoMunicije;
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

    bomba(int c, int br, int d, int tm, TipBombe b, TipOruzja t, TipPucanja p):oruzje(c, br, p, t){
        cena = c;
        BrMunicije = br;
        damage = d;
        TrenutnoMunicije = tm;
                bum = b;
        tip = t;
        puc = p;
    }



    bombe(const bombe &boom):oruzje(boom.cena, boom.tip, boom.puc, boom.BrMunicije){
        TrenutnoMunicije = boom.TrenutnoMunicije;
        damage = boom.damage;
        bum = boom.bum;
    }


    int GetTrenutnoMunicije()const {return TrenutnoMunicije;}
    void setTrenutnoMunicije(int m)(TrenutnoMunicije = m);

    GetTipBombe()const{return TipBombe;}
    void SetTipBombe(TipBombe b)(bum = b);

    int getdamage()const {return damage;}
    void setdamage(int d)(damage = d);
};



#endif // BOMBE_H_INCLUDED
