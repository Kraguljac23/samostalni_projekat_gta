#ifndef SNAJPERI_H_INCLUDED
#define SNAJPERI_H_INCLUDED

#include "oruzje.h"

class sniperi: public oruzje{
private:
    int ScopeZoom;
public:
    sniperi():oruzje(){
    tip = SNAJPER;
    ScopeZoom = 4;
    puc = SINGLE;
    cena = 11000;
    BrMunicije = 15;
    }

    sniperi(int c, int br, int sz, int tm, TipOruzja t, TipPucanja p):oruzje(c, br, p, t,tm){
        ScopeZoom = sz;
    }

     sniperi(const sniperi &s):oruzje(s.cena, s.tip, s.puc, s.BrMunicije, s.TrenutnoMunicije){
        ScopeZoom = s.ScopeZoom;
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


    double GetScopeZoom() const{return ScopeZoom;}
    void SetScopeZoom(int sz)(ScopeZoom = sz);

};



#endif // SNAJPERI_H_INCLUDED
