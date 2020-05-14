#ifndef POLICIJSKA_VOZILA_H_INCLUDED
#define POLICIJSKA_VOZILA_H_INCLUDED

enum KojeVozilo{SAOBRACAJNO, SPECIJALCI, BLINDIRANO};

class PolicijskaVozila(): public vozila(){
private:
    KojeVozilo vozilo;
    bool compyter; //da li poseduje compytersa podacima osumnjicenih
    int sirena; //koliko razlicitih sirena vozilo poseduje
public:
    PolicijskaVozila():vozila(){
        TipVozila = DRUMSKO;
        Cena.buy = 750000;
        Cena.sell = 500000;
        gears = 6;
        seats = 5;
        gorivo = 100;
        TopSpeed = 210;
        vozilo = SPECIJALCI;
        computer = true;
        sirena = 3;

    }

        PolicijskaVozila(int s, float g, KojeVozilo v, int gg, int s, int ts, struct Cena cc, stanjeVozila ss, TipVozila v): vozila(gg, ss, cc, v, ts, s, g){
            sirena = s;
            vozilo = v;

        }

        PolicijskaVozila(const PolicijskaVozila& p): vozila(p.seats, p.gears, p.TopSpeed, p.voz, p.cena, p.stanje, p.gorivo){
            sirena = p.sirena;
            computer = p.computer;
            vozilo = p.vozilo;
        }


    int getSirena()const {return sirena;}
    void setsirena(int s)(sirena = s);

    getKojeVozilo()const {return vozilo;}
    void setKojeVozilo(KojeVozilo v)(vozilo = v);


};



#endif // POLICIJSKA_VOZILA_H_INCLUDED
