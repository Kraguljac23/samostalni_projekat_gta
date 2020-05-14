#ifndef AUTI_H_INCLUDED
#define AUTI_H_INCLUDED

#include "vozila.h"

enum TipAuta{SPORTSKI, TERENSKI, SPECIAL, COMMON};
enum TipKrova{KABRIOLET, HARDTOP, SIBER};
enum DriveTrain{RWD, AWD, FWD};


class auti: public vozila{
private:
    TipAuta car;
    DriveTrain drive;
    TipKrova krov;
    DinString plates;
public:
    auti(): vozila(){
        if(car == SPORTSKI){
            seats = 2;
            drive = RWD;
            Cena.buy = 550000;
            Cena.sell = 345000;
            gears = 6;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            krov = SIBER;
            plates = "JEEA MADAFAKA";
        }else if(car == TERENSKI){
            seats = 6;
            drive = AWD;
            cena.buy = 360000;
            cena.sell = 225000;
            gears = 5;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            krov = HARDTOP;
            plates = "SKRRT";
        }else if(car = SPECIAL){
            seats = 2;
            drive = RWD;
            cena.buy = 1000*(rand()%6)*1000;
            cena.sell = 1000*(rand()%4)*1000;
            gears = 6;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            krov = KABRIOLET;
            plates = "SPECIAL EDITION";
        }else if(car == COMMON){
            seats = 4;
            drive = FWD;
            cena.buy = 180000;
            cena.sell = 95000;
            gears = 5;
            TopSpeed = 1+(rand()%2)*100;
            gorivo = 100;
            krov = HARDTOP;
            plates = "FUCK MERCEDES";
        }

    }

    auti(TipAuta c,TipKrova k, DinString p, DriveTrain d, float g, int ss, int gg, int ts, TipVozila v, struct Cena cc, stanjeVozila ss):vozila(ss, gg, ts, v, cc, s, g, m){
        car = c;
        drive = d;
        krov = k;
        plates = p;
    }

    bool auti::upali(){
    bool uspesno;

    if(gorivo = 0 || stanje == POKVAREN){
        uspesno = false;
        cout << "Vozilo se nije upalilo, ili je pokvareno ili nema goriva." << endl;
    }else{
    uspesno = true;
    stanjeAuta = UPALJEN;
    }
    return uspesno;
    }

    bool auti::refill(){
    bool uspesno;

    if(stanje = UPALJEN){
        uspesno = false;
        cout << "Da biste napunili auto morate ga prvo ugasiti." << endl;
    }else{
    uspesno = true;
    gorivo = 100;
    }
    return uspesno;
    }

    auti(const auti& a):vozila(a.seats, a.gears, a.TopSpeed, a.ime, a.voz, a.cena, a.gorivo, a.marka){
        drive = a.drive;
        car = a.car;
        krov = a.krov;
        plates = a.plates;
    }



    getTipAuta()const {return car;}
    void setTipAuta(TipAuta a)(car = a);

    DinString getplates()const {return plates;}
    void setplates(DinString p)(plates = p);

    getTipKrova()const {return krov;}
    void setTipKrova(TipKrova k)(krov = l);

    getDriveTrain()const {return drive;}
    void setDriveTrain(DriveTrain d)(drive = d);

};

#endif // AUTI_H_INCLUDED
