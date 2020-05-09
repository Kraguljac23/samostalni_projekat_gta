#ifndef POLICIJSKA_VOZILA_H_INCLUDED
#define POLICIJSKA_VOZILA_H_INCLUDED

class PolicijskaVozila(): public vozila(){
private:
    Pozicija poz;
    float gorivo;
public:
    PolicijskaVozila():vozila(){
        TipVozila = DRUMSKO;
        Cena.buy = 750000;
        Cena.sell = 500000;
        gears = 6;
        seats = 5;
        gorivo = 100;
        TopSpeed = 210;

    }

        PolicijskaVozila(int g, Pozicija p, int gg, int s, int ts, struct Cena cc, stanjeVozila ss, TipVozila v): vozila(gg, ss, cc, v, ts, s){
        gorivo = g;
        poz = p;
        }

        PolicijskaVozila(const PolicijskaVozila& p): vozila(p.gears, p.seats, p.TopSpeed, p.cena){
        gorivo = p.gorivo;
        poz = p.poz;
        }


        bool PolicijskaVozila::upali(){
        bool uspesno;

        if(gorivo == 0 || stanje == POKVAREN){
            uspesno = false;
            cout << "Vozilo se nije upalilo, ili je pokvareno ili nema goriva." << endl;
        }else{
        uspesno = true;
        }
        return uspesno;
        }


        bool PolicijskaVozila::ugasi(){
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

    bool PolicijsakVozila::refill(){
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


    float getGorivo()const{return gorivo;}
    void setGorivo(float g)(gorivo = g);

    getPozicija()const {return poz;}
    void setPozicija(Pozicija p)(poz = p);
};



#endif // POLICIJSKA_VOZILA_H_INCLUDED
