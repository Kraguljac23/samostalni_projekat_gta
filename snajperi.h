#ifndef SNAJPERI_H_INCLUDED
#define SNAJPERI_H_INCLUDED

#include "oruzje.h"

class sniperi: public oruzje{
private:
    TipOruzja tip;
    TipPucanja puc;
    int cena;
    int BrMunicije;
    int stanje;  //koliko igrac ima trenutno para na svom racunu
    int TrenutnoMunicije;
public:
    sniperi():oruzje(){
    tip = SNAJPER;
    puc = SINGLE;
    cena = 11000;
    BrMunicije = 15;
    }
    sniperi(int c, int br, int s, int tm, TipOruzja t, TipPucanja p){
        cena = c;
        BrMunicije = br;
        stanje = s;
        TrenutnoMunicije = tm;
        tip = t;
        puc = p;
    }
    
    bool sniperi::buy(){
    bool uspesno;

    if(stanje >= cena){
        uspesno = true;
        stanje -= cena;
    }else{
        uspesno = false;
    cout << "Nemate dovoljno sredstava za kupovinu oruzja." << endl
    }
    return uspesno;
    }

    bool sniperi::reload(){
    bool uspesno;

    if(TrenutnoMunicije < BrMunicije){
     uspesno = true;
     TrenutnoMunicije = BrMunicije;
    }else{
    uspesno = false;
    cout << "Snajper je vec napunjen." << endl
    }
    return uspesno;
    }
    
    sniperi(const sniperi &s){
        cena = s.cena;
        BrMunicije = s.BrMunicije;
        stanje = s.stanje;
        TrenutnoMunicije = s.TrenutnoMunicije;
        tip = s.tip;
        puc = s.puc;
    }

    int GetCena() const {return cena;}
    void SetCena(int cena)(cena = c);

    int GetTipOruzja() const {return tip;}
    void SetTipOruzja(TipOruzja t)(tip = t);

    int GetTipPucanja() const {return puc;}
    void SetTipPucanja(TipPucanja puc)(puc = p);

    int GetBrMunicije() const {return BrMunicije;}
    void setBrMunicije(int BrMunicije)(BrMunicije = br);

    int GetStanje() const{return stanje;}
    void SetStanje(int stanje)(stanje = s);

    int GetTrenutnoMunicije() const {return TrenutnoMunicije;}
    void SetTrenutnoMunicije(int TrenutnoMunicije)(TrenutnoMunicije = m);
};



#endif // SNAJPERI_H_INCLUDED
