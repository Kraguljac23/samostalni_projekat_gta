#ifndef HELIHOPTERI_H_INCLUDED
#define HELIHOPTERI_H_INCLUDED

enum TipHelihoptera{VOJNI, PUTNICKI, LUKSUZNI};


class helihopteri(): public vozila(){
private:
    TipHelihoptera heli;
    float gorivo;
public:
    helihopteri(): vozila(){
        TipVozila = VAZDUSNO;
        if(heli == VOJNI){
            seats = 3;
            Cena.buy = 550000;
            Cena.sell = 345000;
            gears = 1;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
        }else if(heli == PUTNICKI){
            seats = 8;
            cena.buy = 150000;
            cena.sell = 85000;
            gears = 1;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
        }else if(heli = LUKSUZNI){
            seats = 4;
            cena.buy = 1000*(rand()%6)*1000;
            cena.sell = 1000*(rand()%4)*1000;
            gears = 1;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;

    }

    helihopteri(float g, double m, int s, int ts, int gr, TipHelihoptera h, struct cena c, stanjeVozila ss):vozila(ts, gg, cc, ss, v, s){
        gorivo = g;
        money = m;
        heli = h;
    }

    bool helihopteri::upali(){
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

    bool helihopteri::popravi(){
    bool uspesno;

    if(money >= 1000){
    uspesno = true;
    stanje = UGASEN;
    gorivo = 100;
    money -= 1000;
    }else{
    uspesno = false;
    cout << "Nemate dovoljno novca za popravku vozila." << endl;
    }
    return uspesno;
    }

    bool helihopteri()::buy(){
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

    bool helihopteri::sell(){
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

    bool helihopteri::refill(){
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

    bool helihopteri::ugasi(){
    bool uspenso;

    if(stanje == UGASEN || stanje == POKVAREN){
        uspenso = false;
        cout << "Vozilo je vec ugaseno." << endl;
    }else{
    uspenso = true;
    stanje = UGASEN;
    }
    return stanjeVozila;
    }

    helihopteri(const helihopteri& h):vozila(h.seats, h.gears, h.TopSpeed, h.voz, h.cena){
        gorivo = h.gorivo;
        money = h.money;
        heli = h.heli;
    }



    float getgorivo()const {return gorivo;}
    void setgorivo(float g)(gorivo = g);

    getTipHelihoptera()const {return heli;}
    void setTipHelihoptera(TipHelihoptera h)(heli = h);
};

#endif // HELIHOPTERI_H_INCLUDED
