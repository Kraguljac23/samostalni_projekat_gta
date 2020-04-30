#ifndef BAZUKA_H_INCLUDED
#define BAZUKA_H_INCLUDED

#include "oruzje.h"

class bazuka: public oruzje{
private:
    TipOruzja tip;
    TipPucanja puc;
    int cena;
    int BrMunicije;
    int TrenutnoMunicije;
    int stanje;
public:
    bazuka():oruzje(){
    cena = 1700;
    BrMunicije = 5;
    tip = BAZUKA;
    puc = SINGLE;
    }
    
    bazuka(int c, int br, int tm, int s, TipPucanja p, TipOruzja t):oruzje(){
        cena = c;
        BrMunicije = br;
        TrenutnoMunicije = tm;
        stanje = s;
        puc = p;
        tip = t;
    }

    bool bazuka::buy(){
    bool uspesno;

    if(stanje >= cena){
        uspesno = true;
    }else{
    uspesno = false;
    cout << "Nemate dovoljno sredstava za kupovinu oruzja."
    }
    return uspesno;
    }

    bool bazuka::reload(){
    bool uspesno;

    if(TrenutnoMunicije < BrMunicije){
        uspesno = true;
        TrenutnoMunicije = BrMunicije;
    }else{
    uspesno = false;
    cout << "Bazuka je vec napunjena."
    }
    return uspesno;
    }
    
     bazuka(const bazuka &b):oruzje(){
        cena = b.cena;
        BrMunicije = b.BrMunicije;
        stanje = b.stanje;
        TrenutnoMunicije = b.TrenutnoMunicije;
        tip = b.tip;
        puc = b.puc;
    }

    int GetCena()const {return cena;}
    void SetCena(int cena)(cena = c);

    int GetTipPucanja()const {return puc;}
    void SetTipPucanja(TipPucanja p)(puc = p);

    int GetTipOruzja()const {return tip;}
    void SetTipOruzja(TipOruzja t)(tip = t);

    int GetTrenutnoMunicije()const {return TrenutnoMunicije;}
    void SetTrenutnoMunicije(int TrenutnoMunicije)(TrenutnoMunicije m);

    int GetStanje() const {return stanje;}
    void SetStanje(int stanje)(stanje = s);

    int GetBrMunicije()const {return BrMunicije;}
    void SetBrMunicije(int BrMunicije)(BrMunicije br);
};


#endif // BAZUKA_H_INCLUDED
