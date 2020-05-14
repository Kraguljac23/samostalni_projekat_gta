#ifndef BRODOVI_H_INCLUDED
#define BRODOVI_H_INCLUDED

enum TipBroda{GLISERI, JETSKI, JAHTE, JEDRILICE};
enum TipPogona{JEDRO, MOTOR};

class brodovi(): public vozila(){
private:
    TipBroda brod;
    TipPogona pogon;
    bool naoruzanje;
public:
    helihopteri(): vozila(){
        TipVozila = VAZDUSNO;
        if(brod == GLISERI){
            seats = 3;
            Cena.buy = 75000;
            Cena.sell = 50000;
            gears = 1;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            pogon = MOTOR;
            naoruzanje = true;
        }else if(brod == JETSKI){
            seats = 2;
            cena.buy = 360000;
            cena.sell = 325000;
            gears = 1;
            TopSpeed = 1+(rand()%4)*100;
            gorivo = 100;
            pogon = MOTOR;
            naoruzanje = false;
        }else if(brod = JAHTE){
            seats = 10;
            cena.buy = 1000*(rand()%6)*1000;
            cena.sell = 1000*(rand()%4)*1000;
            gears = 1;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;
            pogon = MOTOR;
            naoruzanje = true;
    }else if(brod = JEDRILICE){
            eats = 2;
            cena.buy = 95000;
            cena.sell = 75000;
            pogon = JEDRO;
            naoruzanje = false;
    }

    brodovi(int g, TipPogona p, int s, int ts, int gg, TipBroda b, stanjeVozila ss, struct Cena cc, tipVozila v):vozila(gg, ts, ss, v, cc, s, g, m){
        brod = b;
        pogon = p;
        naoruzanje = n;
    }



    brodovi(const brodovi& b):vozila(b.seats, b.gears, b.TopSpeed, b.ime, b.voz, b.cena, b.gorivo, b.marka){
        brod = b.brod;
        pogon = b.pogon;
        naoruzanje = b.naoruzanje;
    }


    getTipBroda()const {return brod;}
    void setTipBroda(TipBroda b)(brod = b);

    getnaoruzanje()const {return naoruzanje;}
    void setnaoruzanje(bool n)(naoruzanje = n);

    getTipPogona()const {return pogon;}
    void setTipPogona(TipPogona p)(pogon = p);

#endif // BRODOVI_H_INCLUDED
