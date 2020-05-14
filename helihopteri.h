#ifndef HELIHOPTERI_H_INCLUDED
#define HELIHOPTERI_H_INCLUDED

enum TipHelihoptera{VOJNI, PUTNICKI, LUKSUZNI};


class helihopteri(): public vozila(){
private:
    TipHelihoptera heli;
    bool blindiran;
    bool naoruzanje;
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
            naoruzanje = true;
            blindiran = true;
        }else if(heli == PUTNICKI){
            seats = 8;
            cena.buy = 150000;
            cena.sell = 85000;
            gears = 1;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            naoruzanje = false;
            blindiran = false;
        }else if(heli = LUKSUZNI){
            seats = 4;
            cena.buy = 1000*(rand()%6)*1000;
            cena.sell = 1000*(rand()%4)*1000;
            gears = 1;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            naoruzanje = true;
            blindiran = true;
    }

    helihopteri(int g,DinString m, int s, int ts, int gr, TipHelihoptera h, struct cena c, stanjeVozila ss):vozila(ts, gg, cc, ss, v, s, g, m){
        heli = h;
        naoruzanje = n;
        blindiran = b;
    }



    helihopteri(const helihopteri& h):vozila(h.seats, h.gears, h.TopSpeed, h.voz, h.cena, h.gorivo, h.marka){
        heli = h.heli;
        naoruzanje = h.naoruzanje;
        blindiran = h.blindiran;
    }


    getTipHelihoptera()const {return heli;}
    void setTipHelihoptera(TipHelihoptera h)(heli = h);

    getnaoruzanje()const {return naoruzanje;}
    void setnaoruzanje(bool n)(naoruzanje = n);

    getblindiran()const {return blindiran;}
    void setblindiran(bool b)(blindiran = b);
};

#endif // HELIHOPTERI_H_INCLUDED
