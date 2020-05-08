#ifndef BOMBE_H_INCLUDED
#define BOMBE_H_INCLUDED

#include "oruzje.h"

enum TipBombe{GRANATA, STUN, SMOKE};


class bombe: public oruzje{
private:
    TipBombe bum;
    float damage;
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

    bomba(int c, int br, float d, int tm, TipBombe b, TipOruzja t, TipPucanja p):oruzje(c, br, p, t, tm){
        damage = d;
        bum = b;
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

    bombe(const bombe &boom):oruzje(boom.cena, boom.tip, boom.puc, boom.BrMunicije, boom.TrenutnoMunicije){
        damage = boom.damage;
        bum = boom.bum;
    }



    GetTipBombe()const{return TipBombe;}
    void SetTipBombe(TipBombe b)(bum = b);

    float getdamage()const {return damage;}
    void setdamage(float d)(damage = d);
};



#endif // BOMBE_H_INCLUDED
