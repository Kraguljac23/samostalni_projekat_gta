#ifndef POLICIJSKA_VOZILA_H_INCLUDED
#define POLICIJSKA_VOZILA_H_INCLUDED

enum Pozicija{GRADJANIN, SAOBRACAJAC, SPECIJALAC};

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
        }else if(poz == GRADJANIN){
        uspesno = false;
        wl = 5;
        cout << "Niste ovlasceni da upravljate ovim vozilom." << endl;
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

    bool PolicijskaVozila::popravi(){
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

    bool Policijskavozila::buy(){
    bool uspesno;

    if(money >= cena && (poz == SAOBRACAJAC || poz  == SPECIJALAC)){
        uspesno = true;
        money -= cena;
    }else{
    uspesno = false;
    cout << "Nemate dovoljno sredstava za kupovinu vozila."
    }
    return uspesno;
    }

     bool PolicijskaVozila::sell(){
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
