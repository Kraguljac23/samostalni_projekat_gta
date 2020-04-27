#ifndef PISTOLJI_H_INCLUDED
#define PISTOLJI_H_INCLUDED

#include "oruzje.h"

enum tipPistolja{AUTOMATSKI, SINGLE};

class pistolji: public oruzje{
private:
    TipOruzja tip;
    TipPucanja puc;
    int cena;
    int BrMunicije;
    int stanje;
    int TrenutnoMunicije;
public:
    tip = PISTOLJ;

    if(tipPistolja == AUTOMATSKI){
        puc = AUTOMATSKI;
    }else{
    puc = SINGLE;
    }

    cena = 900;
    BrMunicije = 20;

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


    int GetCena()const {return cena;}
    void setCena(int cena)(cena = c);

    int GetBrMunicije() const {return BrMunicije;}
    void setBrMunicije(int BrMunicije)(BrMunicije br);

    int GetTipOruzja()const {return tip;}
    void SetTipOruzja(TipOruzja t)(tip = t);

    int GetTipPucanja()const {return puc;}
    void SetTipPucanja(TipPucanja p)(puc = p);

    int GetStanje()const {return stanje;}
    void SetStanje(int stanje)(stanje = s);

    int GetTrenutnoMunicije() const {return TrenutnoMunicije;}
    void SetTrenutnoMunicije(int TrenutnoMunicije)(TrenutnoMunicije = m);
};


#endif // PISTOLJI_H_INCLUDED
