#ifndef AUTOMATSKE_PUSKE_H_INCLUDED
#define AUTOMATSKE_PUSKE_H_INCLUDED

#include "oruzje.h"

enum TipPuske{AUTOMATSKA, BURST};

class AutomatskePuske: oruzje{
private:
   TipOruzja tip;
   TipPucanja puc;
   TipPuske p;
   int cena;
   int BrMunicije;
   int Stanje;
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
   
    AutomatskePuske(int c, int br, int s, int tm, TipPuske g, TipPucanja p, TipOruzja t):oruzje(){
        cena = c;
        BrMunicije = br;
        Stanje = s;
        TrenutnoMunicije = tm;
        gun = g;
        puc = p;
        tip = t;
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
   
   AutomatskePuske(const AutomatskePuske &a):oruzje(){
        cena = a.cena;
        BrMunicije = a.BrMunicije;
        Stanje = a.Stanje;
        TrenutnoMunicije = a.TrenutnoMunicije;
        tip = a.tip;
        puc = a.puc;
        gun = a.gun;
    }

    int GetBrMunicije()const {return BrMunicije;}
    void SetBrMunicije(int BrMunicije)(BrMunicije = br);

    int GetCena()const {return cena;}
    void SetCena(int cena)(cena = c);

    int GetTipPucanja()const {return puc;}
    void SetTipPucanja(TipPucanja p)(puc = p);

    int GetTipOruzja()const{return tip;}
    void SetTipOruzja(TipOruzja t)(tip = t);

    int GetStanje()const{return Stanje;}
    void SetStanje(int Stanje)(Stanje = s);

    int GetTrenutnoMunicije()const{return TrenutnoMunicije;}
    void setTrenutnoMunicije(int TrenutnoMunicije)(TrenutnoMunicije = m);
};



#endif // AUTOMATSKE_PUSKE_H_INCLUDED
