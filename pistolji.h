#ifndef PISTOLJI_H_INCLUDED
#define PISTOLJI_H_INCLUDED

#include "oruzje.h"

enum tipPistolja{AUTOMATSKI, SINGLE, REVOLVER};
enum princip{CAPLOCK, SEMI};

class pistolji: public oruzje{
private:
    tipPistolja pis;
    bool laser;
    princip prc;
public:
    pistolji():oruzje(){
    tip = PISTOLJ;

    if(tipPistolja == AUTOMATSKI){
        puc = AUTOMATSKI;
        prc = SEMI;
    }else if(tipPistolja == SINGLE){
        puc = SINGLE;
        prc = SEMI;
    }else if(tipPistolja == REVOLVER){
        puc = SINGLE;
        prc = CAPLOCK;
    }

    if(laser == true){
        accuracy += 0.5;
    }else{
        accuracy = 3.5;
    }

    cena = 900;
    range = 100;
    BrMunicije = 20;
    }
    pistolji(int c, int br,princip p, float d, tipPistolja p, TipOruzja t, TipPucanja p) : oruzje(c, br, p, t, d, r){
        pis = p;
        laser = l;
        prc = pp;
    }


    pistolji(const pistolji &p):oruzje(p.cena, p.tip, p.puc, p.BrMunicije, p.damage, p.range){
        pis = p.pis;
        prc = p.prc;
    }


    GettipPistplja()const {return pis;}
    void settipPistolja(tipPistolja p)(pis = p);

    getlaser()const {return laser;}
    void setlaser(bool l)(laser = l);

    getprincip()const {return prc;}
    void setprincip(princip p)(prc = p);
};


#endif // PISTOLJI_H_INCLUDED
