#ifndef PISTOLJI_H_INCLUDED
#define PISTOLJI_H_INCLUDED

#include "oruzje.h"

enum tipPistolja{AUTOMATSKI, SINGLE};

class pistolji: public oruzje{
private:
    tipPistolja pis;
    double stanje;
    int TrenutnoMunicije;
public:
    pistolji():oruzje(){
    tip = PISTOLJ;

    if(tipPistolja == AUTOMATSKI){
        puc = AUTOMATSKI;
    }else{
    puc = SINGLE;
    }

    cena = 900;
    BrMunicije = 20;
    }
    pistolji(int c, int br, double s, int tm, tipPistolja p, TipOruzja t, TipPucanja p) : oruzje(c, br, p, t){
        stanje = s;
        TrenutnoMunicije = tm;
        pis = p;
    }

    bool pistolji::buy(){
    bool uspesno;

    if(stanje >= cena){
        uspesno = true;
        stanje -= cena;
    }else{
    uspesno = false;
    cout << "Nemate dovoljno sredstava za kupovinu oruzja."
    }
    return uspesno;
    }

    bool pistolji::reload(){
    bool uspesno;

    if(TrenutnoMunicije < BrMunicije){
        uspesno = true;
       TrenutnoMunicije = BrMunicije;
    }else{
    uspesno = false;
    cout << "Pistolj je vec napunjen."
    }
    return uspesno;
    }

    pistolji(const pistolji &p):oruzje(p.cena, p.tip, p.puc, p.BrMunicije){
        tip = p.tip;
        puc = p.puc;
        cena = p.cena;
        BrMunicije = p.BrMunicije;
        TrenutnoMunicije = p.TrenutnoMunicije;
        stanje = p.stanje;
        pis = p.pis;
    }

    double GetStanje()const {return stanje;}
    void SetStanje(double stanje)(stanje = s);

    int GetTrenutnoMunicije() const {return TrenutnoMunicije;}
    void SetTrenutnoMunicije(int TrenutnoMunicije)(TrenutnoMunicije = m);

    GettipPistplja()const {return pis;}
    void settipPistolja(tipPistolja p)(pis = p);
};


#endif // PISTOLJI_H_INCLUDED
