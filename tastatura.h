#ifndef TASTATURA_H_INCLUDED
#define TASTATURA_H_INCLUDED

enum tasteri{SPACE, LMC, RMC, WSAD, SHIFT};

class tastatura(): public komande{
private:
    tasteri tast;
    DinString pritisnutTaster;
public:
    tastatura():komande(){
    brojPritisaka = 0;
    poz = DEFAULT;
    uredjaj = PC;
    }

    tastatura(int bp, tasteri t, TipUredjaja u, pozicija p, DinString pt):komande(u, p, bp){
        pritisnutTaster = pt;
        tast = t;
    }

    tastatura(const tastatura& t):komande(t.uredjaj, t.poz, t.brojPritisaka){
        tast = t.tast;
        pritisnutTaster = t.pritisnutTaster;
    }

    bool tastatura::kreni(){
    bool uspesno;

    if(pritisnutTaster == WSAD){
        uspesno = true;
        poz = KRENUO;
        brojPritisaka += 1;
    }else{
    uspesno = false;
    }
    return uspesno;
    }

    bool tastatura::skoci(){
    bool uspesno;

    if(pritisnutTaster == SPACE){
        uspesno = true;
        poz = SKOCIO;
        brojPritisaka += 1;

    }else{
    uspesno = false;
    }
    return uspesno;
    }

    bool tastatura::pucaj(){
    bool uspesno;

    if(pritisnutTaster == LMC){
        uspesno = true;
        poz = PUCA;
        brojPritisaka += 1;
    }else{
    uspesno = false;
    }
    return uspesno;
    }

    bool tastatura::ciljaj(){
    bool uspesno;

    if(pritisnutTaster == RMC){
        uspesno = true;
        poz = CILJA;
        brojPritisaka += 1;
    }else{
    uspesno = false;
    }
    return uspesno;
    }


    getpritisnutTaster()const {return pritisnutTaster;}
    void setpritisnutTaster(DinString pt)(pritisnutTaster = pt);

    gettasteri()const {return tast;}
    void settasteri(tasteri t)(tast = t);
};

#endif // TASTATURA_H_INCLUDED
