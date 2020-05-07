#ifndef SNAJPERI_H_INCLUDED
#define SNAJPERI_H_INCLUDED

#include "oruzje.h"

class sniperi: public oruzje{
private:
    double stanje;  //koliko igrac ima trenutno para na svom racunu
    int TrenutnoMunicije;
public:
    sniperi():oruzje(){
    tip = SNAJPER;
    puc = SINGLE;
    cena = 11000;
    BrMunicije = 15;
    }

    sniperi(int c, int br, double s, int tm, TipOruzja t, TipPucanja p):oruzje(c, br, p, t){
        stanje = s;
        TrenutnoMunicije = tm;
    }

     sniperi(const sniperi &s):oruzje(s.cena, s.tip, s.puc, s.BrMunicije){
        stanje = s.stanje;
        TrenutnoMunicije = s.TrenutnoMunicije;
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


    double GetStanje() const{return stanje;}
    void SetStanje(double stanje)(stanje = s);

    int GetTrenutnoMunicije() const {return TrenutnoMunicije;}
    void SetTrenutnoMunicije(int TrenutnoMunicije)(TrenutnoMunicije = m);
};



#endif // SNAJPERI_H_INCLUDED
