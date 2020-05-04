#ifndef JOYSTICK_H_INCLUDED
#define JOYSTICK_H_INCLUDED

enum Tasteri{R1, L1, PECURKE, IKS};

class joystick(): public komande{
private:
    Tasteri Tast;
    DinString pritisnutTaster;
public:
    tastatura():komande(){
    brojPritisaka = 0;
    poz = DEFAULT;
    uredjaj = PC;
    }

    joystick(int bp, tasteri t, TipUredjaja u, pozicija p, DinString pt):komande(u, p, bp){
        pritisnutTaster = pt;
        tast = t;
    }

    joystick(const tastatura& t):komande(t.uredjaj, t.poz, t.brojPritisaka){
        tast = t.tast;
        pritisnutTaster = t.pritisnutTaster;
    }

    bool joystick::kreni(){
    bool uspesno;

    if(pritisnutTaster == PECURKE){
        uspesno = true;
        poz = KRENUO;
        brojPritisaka += 1;
    }else{
    uspesno = false;
    }
    return uspesno;
    }

    bool joystick::skoci(){
    bool uspesno;

    if(pritisnutTaster == IKS){
        uspesno = true;
        poz = SKOCIO;
        brojPritisaka += 1;
    }else{
    uspesno = false;
    }
    return uspesno;
    }

    bool joystick::pucaj(){
    bool uspesno;

    if(pritisnutTaster == R1){
        uspesno = true;
        poz = PUCA;
        brojPritisaka += 1;
    }else{
    uspesno = false;
    }
    return uspesno;
    }

    bool joystick::ciljaj(){
    bool uspesno;

    if(pritisnutTaster == L1){
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

    getTasteri()const {return tast;}
    void setTasteri(Tasteri T)(Tast = T);
};

#endif // JOYSTICK_H_INCLUDED
