#ifndef ORUZJE_H_INCLUDED
#define ORUZJE_H_INCLUDED

enum TipOruzja {SNAJPER, PISTOLJ, BOMBA, AUTOMATSKA_PUSKA, BAZUKA};
enum TipPucanja {AUTOMATSKI, BURST, SINGLE, EXPLOSION};

class oruzje{
private:
    TipOruzja tip;
    TipPucanja puc;
    int BrMunicije;
    int cena;
public:
    oruzje(){
    if(TipOruzja == SNAJPER;){
    puc = SINGLE;
    BrMunicije = 15;
    cena = 11000;
    }else if(TipOruzja == PISTOLJ){
    puc = SINGLE;
    BrMunicije = 20;
    cena = 900;
    }else if(TipOruzja == BOMBA){
    puc = EXPLOSION;
    BrMunicije = 3;
    cena = 1100;
    }else if(TipOruzja == AUTOMATSKA_PUSKA){
    puc = AUTOMATSKI;
    BrMunicije = 30;
    cena = 3500;
    }else if(TipOruzja == BAZUKA){
    puc = SINGLE;
    BrMunicije = 5;
    cena = 1700;
    }
    }

    oruzje(TipPucanja p, TipOruzja t, int br, int c){
        puc = p;
        tip = t;
        BrMunicije = br;
        cena = c;
    }

    oruzje(const oruzje &o){
        tip = o.tip;
        puc = o.puc;
        BrMunicije = o.BrMunicije;
        cena = o.cena;
    }

     bool buy();
     bool reload();

     int GetCena() const{return cena;}
     void SetCena(int cena)(cena = c);

     GetTipOruzja() const{return TipOruzja;}
     void SetTipOruzja(TipOruzja t){ tip = t;}

     GetTipPucanja() const{return TipPucanja;}
     void SetTipPucanja(TipPucanja p){puc = p;}

     int GetBrMunicije() const{return BrMunicije;}
     void SetBrMunicije(int BrMunicije)(BrMunicije = br);
};

#endif // ORUZJE_H_INCLUDED
