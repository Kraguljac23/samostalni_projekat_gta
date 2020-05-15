#ifndef UBIJSTVO_H_INCLUDED
#define UBIJSTVO_H_INCLUDED

class ubistvo: public misije{
private:
    DinString imeZrtve;
    int brojZrtava;
public:
    ubistvo():misije(){
        imeZrtve = "Trevor";
        brojZrtava = 1;
    }

    ubistvo(DinString nm, DinString mp, double r, DinString o, DinString n, DinString iz, int bz):misije(nm, o, r, mp, n){
        imeZrtve = iz;
        brojZrtava = bz;
    }

    ubistvo(const ubistvo& u):misije(u.opis, u.nazivMisije, u.MissionPart, u.NPCs, u.reward){
        imeZrtve = u.imeZrtve;
        brojZrtava = u.brojZrtava;
    }

    dinString getimeZrtve()const {return imeZrtve;}
    void setimeZrtve(dinstring iz)(imeZrtve = iz);

    int getbrojZrtava()const {return brojZrtava;}
    void setbrojZrtava(int bz)(brojZrtava = bz);
};

#endif // UBIJSTVO_H_INCLUDED
