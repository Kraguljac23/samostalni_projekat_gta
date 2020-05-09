#ifndef AUTOMATSKE_PUSKE_H_INCLUDED
#define AUTOMATSKE_PUSKE_H_INCLUDED

#include "oruzje.h"

enum TipPuske{AUTOMATSKA, BURST};

class AutomatskePuske: public oruzje{
private:
   TipPuske gun;
public:
    AutomatskePuske():oruzje(){

    tip = AUTOMATSKA_PUSKA;

    if(TipPuske = AUTOMATSKA){
        puc = AUTOMATSKI;
    }else if(TipPuske == BURST){
        puc = BURST;
    }

    cena = 3500;
    BrMunicije = 30;
    TrenutnoMunicije = 0;
    }

    AutomatskePuske(int c, int br, int tm, TipPuske g, TipPucanja p, TipOruzja t):oruzje(c, br, p, t, tm){
        gun = g;
    }

bool AutomatskePuske::reload(){
    bool uspenso;

    if(TrenutnoMunicije < BrMunicije){
        uspenso = true;
        TrenutnoMunicije = BrMunicije;
    }else{
    uspenso = false;
    cout << "Puska je vec napunjena." << endl
    }
    return uspenso;
    }


    AutomatskePuske(const AutomatskePuske &a):oruzje(a.cena, a.BrMunicije, a.tip, a.puc, a.TrenutnoMunicije){
        gun = a.gun;
    }

    GetTipPuske()const {return gun;}
    void SetTipPuske(TipPuske g)(gun = g);
};
