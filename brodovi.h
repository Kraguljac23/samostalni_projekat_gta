#ifndef BRODOVI_H_INCLUDED
#define BRODOVI_H_INCLUDED

enum TipBroda{GLISERI, JETSKI, JAHTE};

class brodovi(): public vozila(){
private:
    TipBroda brod;
    float gorivo;
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
        }else if(brod == JETSKI){
            seats = 2;
            cena.buy = 360000;
            cena.sell = 325000;
            gears = 1;
            TopSpeed = 1+(rand()%4)*100;
            gorivo = 100;
        }else if(brod = JAHTE){
            seats = 10;
            cena.buy = 1000*(rand()%6)*1000;
            cena.sell = 1000*(rand()%4)*1000;
            gears = 1;
            TopSpeed = 1+(rand()%3)*100;
            gorivo = 100;

    }

    brodovi(float g, int s, int ts, int gg, TipBroda b, stanjeVozila ss, struct Cena cc, tipVozila v):vozila(gg, ts, ss, v, cc, s){
        drive = d;
        gorivo = g;
        brod = b;
    }

    bool brodovi::upali(){
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

    bool brodovi::refill(){
    bool uspesno;

    if(stanje = UPALJEN){
        uspesno = false;
        cout << "Da biste napunili brod morate ga prvo ugasiti." << endl;
    }else{
    uspesno = true;
    gorivo = 100;
    }
    return uspesno;
    }

    bool brodovi::ugasi(){
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

    brodovi(const brodovi& b):vozila(){
        gorivo = b.gorivo;
        brod = b.brod;
    }



    float getGorivo()const{return gorivo;}
    void setGOrivo(float g)(gorivo = g);

    getTipBroda()const {return brod;}
    void setTipBroda(TipBroda b)(brod = b);

#endif // BRODOVI_H_INCLUDED
