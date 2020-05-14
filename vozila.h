#ifndef VOZILA_H_INCLUDED
#define VOZILA_H_INCLUDED

enum TipVozila(DRUMSKO, VAZDUSNO, VODENO);
enum stanjeVozila{UPALJEN, UGASEN, POKVAREN};


class vozila{
private:

    struct Cena{
    double buy;
    double sell;
};
    Cena cena;
    DinString marka;
    TipVozila voz;
    stanjeVozila stanje;
    int seats;
    int gears;
    int TopSpeed;
    float gorivo;
public:
    vozila(){
    voz = DRUMSKO;
    cena.buy = 565000;
    cena.sell = 345000;
    gears = 5;
    seats = 2;
    TopSpeed = 140;
    gorivo = 100;
    marka = "BMW";
    }

    vozila(DinString m, int s, float g, int gg, int ts, TipVozila v, struct Cena cc, stanjeVozila ss){
        seats = s;
        gears = gg;
        TopSpeed = ts;
        voz = v;
        cena = cc;
        gorivo = g;
        marka = m;
    }

    vozila(const vozila& v){
        seats = v.seats;
        gears = v.gears;
        TopSpeed = v.TopSpeed;
        ime = v.ime;
        voz = v.voz;
        cena = v.cena
        gorivo = v.gorivo;
        marka = v.marka;
    }

    bool upali();
    bool ugasi();
    bool refill();

    DinString getmarka()const {return marka;}
    void setmarka(DinString m)(marka = m);

    int getCena()const{return Cena;}
    void setCena(int c)(cena = c);

    float getGorivo()const {return gorivo;}
    void setGorivo(float g)(gorivo = g);

    int getSeats()const {return seats;}
    void setSeats(int s)(seats = s);

    int getGears()const {return gears;}
    void setGears(int g)(gears = g);

    getTipVozila()const {return voz;}
    void setTipVozila(TipVozila v)(voz = v);

    int GetTopSpeed()const {return TopSpeed;}
    void setTopSpeed(int ts)(TopSpeed = ts);

    getStanjeVozila()const {return stanje;}
    void setstanjeVozila(stanjeVozila s)(stanje = s);
};

#endif // VOZILA_H_INCLUDED
