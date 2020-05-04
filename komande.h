#ifndef KOMANDE_H_INCLUDED
#define KOMANDE_H_INCLUDED

enum TipUredjaja{PC, KONZOLA};
enum pozicija{DEFAULT, SKOCIO, KRENUO, CILJA, PUCA};


class komande(){
private:
    TipUredjaja uredjaj;
    pozicija poz;
    int brojPritisaka;
public:
    komande(){
    uredjaj = PC;
    brojPritisaka = 0;
    poz = DEFAULT;
    }

    komande(TipUredjaja u, pozicija p, int bp){
        uredjaj = u;
        brojPritisaka = bp;
        poz = p;
    }

    komande(const komande& k){
    uredjaj = k.uredjaj;
    poz = k.poz;
    brojPritisaka = k.brojPritisaka;
    }

    bool kreni();
    bool skoci();
    bool pucaj();
    bool ciljaj();


    getTipUredjaja()const {return uredjaj;}
    void setTipUredjaja(TipUredjaja u)(uredjaj = u);

    getpozicija()const {return poz;}
    void setpozicija(pozicija p)(poz = p);

    int getbrojPritisaka()const {return brojPritisaka;}
    void setbrojPritisaka(int bp)(brojPritisaka = bp);

};

#endif // KOMANDE_H_INCLUDED
