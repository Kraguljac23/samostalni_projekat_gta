#ifndef MOTORI_H_INCLUDED
#define MOTORI_H_INCLUDED

#include "vozila.h"

enum TipMotora{SPORT, CROSS, QUAD, TOURING};

class motori: public vozila{
private:
    TipMotora moto;
    bool ABS;
    bool mirrors;
    DinString plates;
public:
    motori(): vozila(){
        if(moto == SPORTSKI){
            seats = 2;
            Cena.buy = 550000;
            Cena.sell = 345000;
            gears = 6;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            ABS = false;
            mirrors = false;
            plates = "PUN GAS";
        }else if(moto == CROSS){
            seats = 6;
            cena.buy = 360000;
            cena.sell = 225000;
            gears = 5;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            ABS = true;
            mirrors = false;
            plates = "PROLLZ";
        }else if(moto = QUAD){
            seats = 2;
            cena.buy = 1000*(rand()%6)*1000;
            cena.sell = 1000*(rand()%4)*1000;
            gears = 6;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            ABS = false;
            mirrors = false;
            plates = "MUD4LIFE";
    }else if(moto = TOURING){
            seats = 2;
            cena.buy = 1000*(rand()%6)*1000;
            cena.sell = 1000*(rand()%4)*1000;
            gears = 6;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            ABS = true;
            mirrors = true;
            plates = "ROLLIN";
    }

    auti(TipMotora mm,DinString p, TipKacige k float g, int ss, int gg, int ts, TipVozila v, struct Cena cc):vozila(ss, gg, ts, v, cc, s, g, m){
        moto = mm;
        ABS = a;
        mirrors = m;
        plates = p;
    }


    auti(const motori& a):vozila(m.seats, m.gears, m.TopSpeed, m.voz, m.cena, m.stanje, m.gorivo, m.marka){
        moto = a.moto;
        ABS = a.ABS;
        mirrors = a.mirrors;
        plates = a.plates;
    }


    getDriveTrain()const {return drive;}
    void setDriveTrain(DriveTrain d)(drive = d);

    getABS()const {return ABS;}
    void setABS(bool a)(ABS = a);

    DinString getplates()const {return plates;}
    void setplates(DinString p)(plates = p);

    getmirrors()const {return mirrors;}
    void setmirrors()(mirrors = m);

};

#endif // MOTORI_H_INCLUDED
