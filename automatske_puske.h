#ifndef AUTOMATSKE_PUSKE_H_INCLUDED
#define AUTOMATSKE_PUSKE_H_INCLUDED

#include "oruzje.h"

enum TipPuske{AUTOMATSKA, BURST};

class AutomatskePuske: public oruzje{
private:
   TipPuske gun;
   bool prigusivac;
   bool scope;
   int zoom;
   bool grip;
public:
    AutomatskePuske():oruzje(){

    tip = AUTOMATSKA_PUSKA;

    if(TipPuske = AUTOMATSKA){
        puc = AUTOMATSKI;
    }else if(TipPuske == BURST){
        puc = BURST;
    }

    if(grip == true){
        accuracy += 1;
    }else{
        accuracy = 4.5;
    }

    range = 250;
    prigusivac = true;
    cena = 3500;
    scope = true;
    zoom = 2;
    BrMunicije = 30;
    }

    AutomatskePuske(int c,int z, int br, int s, TipPuske g, TipPucanja p, TipOruzja t, int r):oruzje(c, br, p, t, r){
        gun = g;
        prigusivac = p;
        zoom = z;
        scope = s;
        grip = g;
    }


    AutomatskePuske(const AutomatskePuske &a):oruzje(a.cena, a.BrMunicije, a.tip, a.puc, a.range){
        gun = a.gun;
        prigusivac = a.prigusivac;
        zoom = a.zoom;
        grip = a.grip;
        scope = a.scope;
    }



    GetTipPuske()const {return gun;}
    void SetTipPuske(TipPuske g)(gun = g);

    int getzoom()const{return zoom;}
    void setzoom(int z)(zoom = z);

    getgrip()const {return grip;}
    void setgrip(bool g)(grip = g);

    getscope()const {return scope;}
    void setscope(bool s)(scope = s);

    getprigusivac()const {return prigusivac;}
    void setprigusivac(bool p)(prigusivac = p);
};



#endif // AUTOMATSKE_PUSKE_H_INCLUDED
