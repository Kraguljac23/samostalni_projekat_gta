#ifndef VOZILA_H_INCLUDED
#define VOZILA_H_INCLUDED

enum TipVozila(DRUMSKO, VAZDUSNO, VODENO);
enum stanjeVozila{UPALJEN, UGASEN, POKVAREN};

struct Cena{
    double buy;
    double sell;
};
class vozila{
private:
    Cena cena;
    TipVozila voz;
    stanjeVozila stanje;
    int seats;
    int gears;
    int TopSpeed;
public:
    vozila(){
    voz = DRUMSKO;
    cena.buy = 565000;
    cena.sell = 345000;
    gears = 5;
    seats = 2;
    TopSpeed = 140;
    }

    vozila(int s, int gg, int ts, TipVozila v, struct Cena cc, stanjeVozila ss){
        seats = s;
        gears = gg;
        TopSpeed = ts;
        voz = v;
        cena = cc;
    }

    vozila(const vozila& v){
        seats = v.seats;
        gears = v.gears;
        TopSpeed = v.TopSpeed;
        ime = v.ime;
        voz = v.voz;
        cena = v.cena
    }

    bool upali();
    bool ugasi();
    bool popravi();
    bool sell();
    bool buy();
    bool refill();

    int getCena()const{return Cena;}
    void setCena(int c)(cena = c);

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
