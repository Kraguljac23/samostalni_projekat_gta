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
    cena = 1700;
    BrMunicije = 5;
    tip = BAZUKA;
    puc = SINGLE;

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
