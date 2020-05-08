#ifndef MOTORI_H_INCLUDED
#define MOTORI_H_INCLUDED

#include "vozila.h"

enum TipMotora{SPORTSKI, CROSS, QUAD};


class motori: public vozila{
private:
    TipMotora moto;
    float gorivo;
public:
    motori(): vozila(){
        if(moto == SPORTSKI){
            seats = 2;
            Cena.buy = 550000;
            Cena.sell = 345000;
            gears = 6;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
        }else if(moto == CROSS){
            seats = 6;
            cena.buy = 360000;
            cena.sell = 225000;
            gears = 5;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
        }else if(moto = QUAD){
            seats = 2;
            cena.buy = 1000*(rand()%6)*1000;
            cena.sell = 1000*(rand()%4)*1000;
            gears = 6;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
    }

    auti(TipMotora mm, float g, int m, int ss, int gg, int ts, TipVozila v, struct Cena cc):vozila(ss, gg, ts, v, cc, s){
        moto = mm;
        gorivo = g;
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

    bool auti::popravi(){
    bool uspesno;

    if(stanje >= 1000){
    uspesno = true;
    stanje = UGASEN;
    gorivo = 100;
    }else{
    uspesno = false;
    cout << "Nemate dovoljno novca za popravku vozila." << endl;
    }
    return uspesno;
    }

    bool auti()::buy(){
    bool uspesno;

    if(stanje >= cena){
        uspesno = true;
        stanje -= cena;
    }else{
    uspesno = false;
    cout << "Nemate dovoljno sredstava za kupovinu auta."
    }
    return uspesno;
    }

    bool auti::sell(){
    bool uspesno;

    if(stanje == POKVAREN){
        uspesno = false;
        cout << "Vas auto je pokvaren, da biste ga prodali morate ga popraviti." << endl;
    }else{
    uspesno = true;
    money += cena.sell;
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

    auti(const auti& a):vozila(a.seats, a.gears, a.TopSpeed, a.voz, a.cena, a.stanje){
        gorivo = a.gorivo;
        moto = a.moto;
    }




    float getgorivo()const{return gorivo;}
    void setGorivo(float g)(gorivo = g);

    getDriveTrain()const {return drive;}
    void setDriveTrain(DriveTrain d)(drive = d);

};

#endif // MOTORI_H_INCLUDED
