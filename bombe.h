#ifndef BOMBE_H_INCLUDED
#define BOMBE_H_INCLUDED

#include "oruzje.h"

enum TipBombe{GRANATA, STUN, SMOKE, STICKY, CLUSTER};
enum TipEksplozije{ONCLICK, AUTO};

class bombe: public oruzje{
private:
    TipBombe bum;
    TipEksplozije eks;
    DinString boja;
public:
    bomba():oruzje(){
    tip = BOMBA;
    puc = EXPLOSION;
    cena = 1100;
    BrMunicije = 3;
    TrenutnoMunicije = 2;
    range = 10;
    eks = AUTO;

     if(TipBombe == STUN || TipBombe == SMOKE{
        damage = 0;
    }else {
    damage = 150;
    }
    }

    bomba(int c, int br, float d, DinString bb, TipEksplozije e, int tm, TipBombe b, TipOruzja t, TipPucanja p, int r):oruzje(c, br, p, t, d, r){
        bum = b;
        eks = e;
        boja = bb;
    }



    bombe(const bombe &boom):oruzje(boom.cena, boom.tip, boom.puc, boom.BrMunicije, boom.TrenutnoMunicije, boom.damage, boom.range){
        bum = boom.bum;
        eks = boom.eks;
        boja = boom.boja;
    }


    GetTipBombe()const{return TipBombe;}
    void SetTipBombe(TipBombe b)(bum = b);

    DinString getboja()const {return boja;}
    void setboja(DinString bb)(boja = bb);

    getTipEksplozije()const {return eks;}
    void setTipEksplozije(TipEksplozije e)(eks = e);
};



#endif // BOMBE_H_INCLUDED
