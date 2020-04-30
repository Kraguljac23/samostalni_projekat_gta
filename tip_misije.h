#ifndef TIP_MISIJE_H_INCLUDED
#define TIP_MISIJE_H_INCLUDED

#include "misije.h"

enum TipMisije(PLJACKA, UBISTVO);


class TipMisije:public misije{
private:
    TipMisije tip;
    vreme pocetka;
    vreme zavrsetka;
    int reward;
    NazivMisije naziv;
    string opis;
public:
    TipMisije(): misije{
    tip = PLJACKA;
    pocetka.h = 21;
    pocetka.m = 0;
    pocetka.s = 0;
    if(tip = UBIJSTVO){
        zavrsetka.h = 21;
        zavrsetka.m = 4;
        zavrsetka.s = 30;
    }else{
    zavrsetka.h = 21;
    zavrsetka.m = 14;
    zavrsetka.s = 25;
    }
    naziv = "Prologue";
    opis = "Moras da opljackas banku sa svojom bandom. Nadji nekoliko taoca, uzmi pare i potrudi se da sto pre pobegnes od policije!"
    }


    TipMisije(TipMisije t, vreme z, vreme p, int r, string o, NazivMisije n):misije(){
        tip = t;
        zavrsetka = z;
        pocetka = p;
        reward = r;
        opis = o;
        naziv = n;
    }
    
    TipMisije(const TipMisije& t){
        tip = t.tip;
        pocetka = t.pocetka;
        zavrsetka = t.zavrsetka;
        opis = t.opis;
        misije = t.NazivMisije;
        opis = t.opis;
        }

        TipMisije(const TipMisije& t): tip (t.tip), pocetka(t.pocetka), zavrsetka(t.zavrsetka), opis(t.opis), misije(t.NazivMisije, t.opis);
        TipMisije getTipMisije() const
        {
            return tip;
        }
        vreme getpovrarka() const
        {
            return vreme;
        }
        vreme getzavrsetka() const
        {
            return zavrsetka;
        }
        reward* getR()
        {
            return r;
        }
        getopis() const
        {
            return opis;
        }
        getNazivMisije() const
        {
            return NazivMisije;
        }
        void SetTipMisije(TipMisije t)
        {
            tip = t;
        }
        void setpocetka(vreme p)
        {
            pocetka = p;
        }
        void setzavrsetka(vreme z)
        {
            zavrsetka = z;
        }
        void setopis(string opis o)
        {
            opis = o;
        }
        void setNazivMisije(string NazivMisije n)
        {
            NazivMisije = n;
        }

};
#endif // TIP_MISIJE_H_INCLUDED
