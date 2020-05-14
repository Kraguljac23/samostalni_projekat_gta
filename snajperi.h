#ifndef SNAJPERI_H_INCLUDED
#define SNAJPERI_H_INCLUDED

#include "oruzje.h"

class sniperi: public oruzje{
private:
    bool prigusivac;
    bool scope;
    int zoom;
public:
    sniperi():oruzje(){
    tip = SNAJPER;
    puc = SINGLE;
    prigusivac = true;
    cena = 11000;
    BrMunicije = 15;
    range = 1500;
    }

    sniperi(int z, int c, float d, int br, int s, int tm, TipOruzja t, TipPucanja p, int r):oruzje(c, br, p, t, d, r){
        prigusivac = p;
        scope = s;
        zoom = z;
    }

     sniperi(const sniperi &s):oruzje(s.cena, s.tip, s.puc, s.BrMunicije, s.range){
        prigusivac = s.prigusivac;
        scope = s.scope;
        zoom = s.zoom;
    }

int getzoom()const {return zoom;}
void setzoom(int z)(zoom = z);

getprigusivac()const{return prigusivac;}
void setprigusivac(bool p)(prigusivac = p);

getscope()const {return scope;}
void setscope(bool s)(scope = s);
};



#endif // SNAJPERI_H_INCLUDED
