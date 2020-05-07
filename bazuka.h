#ifndef BAZUKA_H_INCLUDED
#define BAZUKA_H_INCLUDED

#include "oruzje.h"

class bazuka: public oruzje{
private:
    int TrenutnoMunicije;
    double stanje;
public:
    bazuka():oruzje(){
    cena = 1700;
    BrMunicije = 5;
    tip = BAZUKA;
    puc = SINGLE;
    }

    bazuka(int c, int br, int tm, double s, TipPucanja p, TipOruzja t):oruzje(c, br, p, t){
        TrenutnoMunicije = tm;
        stanje = s;
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

    bazuka(const bazuka &b):oruzje(b.cena, b.tip, b.puc, b.BrMunicije){
        stanje = b.stanje;
        TrenutnoMunicije = b.TrenutnoMunicije;
    }


    int GetTrenutnoMunicije()const {return TrenutnoMunicije;}
    void SetTrenutnoMunicije(int TrenutnoMunicije)(TrenutnoMunicije m);

    double GetStanje() const {return stanje;}
    void SetStanje(double s)(stanje = s);

};


#endif // BAZUKA_H_INCLUDED
