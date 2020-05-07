#ifndef TIP_MISIJE_H_INCLUDED
#define TIP_MISIJE_H_INCLUDED

#include "misije.h"

enum TipMisije(PLJACKA, UBISTVO);

struct vreme{
    int h;
    int m;
    int s;
};

typedef Vreme vreme;
class TipMisije:public misije{
private:
    TipMisije tip;
    vreme pocetka;
    vreme zavrsetka;
    double reward;
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
    if(tip = PLJACKA){
            reward = 10000*(rand());
        }else{
        reward = 10000;
        }
    NazivMisije = "Prologue";
    opis = "Moras da opljackas banku sa svojom bandom. Nadji nekoliko taoca, uzmi pare i potrudi se da sto pre pobegnes od policije!"
    }

    TipMisije(TipMisije t, vreme z, vreme p, double r, DinString o, DinString n):misije(o, n){
        tip = t;
        zavrsetka = z;
        pocetka = p;
        reward = r;
    }

    TipMisije(const TipMisije& t):misije(t.opis, t.NazivMisije){
        tip = t.tip;
        pocetka = t.pocetka;
        zavrsetka = t.zavrsetka;
        opis = t.opis;
        }

        getTipMisije()const {return tip;}
        void setTipMisije(TipMisije t)(tip = t);

        getpocetka() const{return pocetka;}
        void setpocetka(vreme p)(pocetka = p)

        double getreward()const {return reward;}
        void setreward(double r)(reward = r);

        getzavrsetka() const{return zavrsetka;}
        void setzavrsetka(vreme z)(zavrsetka = z);


};
#endif // TIP_MISIJE_H_INCLUDED
