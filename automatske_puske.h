#ifndef AUTOMATSKE_PUSKE_H_INCLUDED
#define AUTOMATSKE_PUSKE_H_INCLUDED

#include "oruzje.h"

enum TipPuske{AUTOMATSKA, BURST};

class AutomatskePuske: public oruzje{
private:
   TipPuske gun;
   double Stanje;
   int TrenutnoMunicije;
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
    }

    AutomatskePuske(int c, int br, double s, int tm, TipPuske g, TipPucanja p, TipOruzja t):oruzje(c, br, p, t){
        Stanje = s;
        TrenutnoMunicije = tm;
        gun = g;
    }

    bool AutomatskePuske()::buy(){
    bool uspesno;

    if(Stanje >= cena){
        uspesno = true;
        Stanje -= cena;
    }else{
    uspesno = false;
    cout << "Nemate dovoljno sredstava za kupovinu oruzja."
    }
    return uspesno;
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

    AutomatskePuske(const AutomatskePuske &a):oruzje(a.cena, a.BrMunicije, a.tip, a.puc){
        Stanje = a.Stanje;
        TrenutnoMunicije = a.TrenutnoMunicije;
        gun = a.gun;
    }



    GetTipPuske()const {return gun;}
    void SetTipPuske(TipPuske g)(gun = g);

    GetStanje()const{return Stanje;}
    void SetStanje(double Stanje)(Stanje = s);

    int GetTrenutnoMunicije()const{return TrenutnoMunicije;}
    void setTrenutnoMunicije(int TrenutnoMunicije)(TrenutnoMunicije = m);
};



#endif // AUTOMATSKE_PUSKE_H_INCLUDED
