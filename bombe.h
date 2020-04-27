#ifndef BOMBE_H_INCLUDED
#define BOMBE_H_INCLUDED

#include "oruzje.h"

enum TipBombe{GRANATA, STUN, SMOKE};


class bombe: public oruzje{
private:
    TipOruzja tip;
    TipPucanja puc;
    TipBombe bum;
    int cena;
    int stanje;
    int damage;
    int BrMunicije;
    int TrenutnoMunicije;
public:
    tip = BOMBA;
    puc = EXPLOSION;
    cena = 1100;
    BrMunicije = 3;

    if(TipBombe == STUN || TipBombe == SMOKE{
        damage = 0;
    }else {
    damage = 150;
    }

    bool bombe::buy(){
    bool uspesno;

    if(stanje >= cena * 3 && TrenutnoMunicije = 0){
        uspesno = true;
        TrenutnoMunicije = BrMunicije;
    }else{
    uspesno = false;
    count << "Nemate dovoljno sredstava za kupovinu oruzja."
    }
    return uspesno;
    }


    int GetBrMunicije()const {return BrMunicije;}
    void SetBrMunicije(int BrMunicije)(BrMunicije br);

    int GetCena()const {return cena;}
    void SetCena(int cena)(cena = c);

    int GetTipOruzja()const{return tip;}
    void SetTipOruzja(TipOruzja = t)(tip = t);

    int GetTipPucanja()const{return TipPucanja;}
    void SetTipPucanja(TipPucanja p)(puc = p);

    int GetStanje()const{return stanje;}
    void SetStanje(int stanje)(stanje = s);

    int GetTrenutnoMunicije()const {return TrenutnoMunicije;}
    void setStanje(int TrenutnoMunicije)(TrenutnoMunicije = m);

    int GetTipBombe()const{return TipBombe;}
    void SetTipBombe(TipBombe b)(bum = b);
};



#endif // BOMBE_H_INCLUDED
