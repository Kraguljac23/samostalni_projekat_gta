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
    float damage;
    float range; //koliko odredjeno oruzje dobacuje (u metrima)
    float accuracy;
public:
    oruzje(){
    if(TipOruzja == SNAJPER;){
    puc = SINGLE;
    BrMunicije = 15;
    cena = 11000;
    damage = 100;
    range = 1500;
    }else if(TipOruzja == PISTOLJ){
    puc = SINGLE;
    BrMunicije = 20;
    cena = 900;
    damage = 50;
    range = 100;
    }else if(TipOruzja == BOMBA){
    puc = EXPLOSION;
    BrMunicije = 3;
    cena = 1100;
    damage = 150;
    range = 10;
    }else if(TipOruzja == AUTOMATSKA_PUSKA){
    puc = AUTOMATSKI;
    BrMunicije = 30;
    cena = 3500;
    damage = 80;
    range = 250;
    }

    oruzje(TipPucanja p, TipOruzja t, float d, int br, int c, float r, float a){
        puc = p;
        tip = t;
        damage = d;
        BrMunicije = br;
        range = r;
        cena = c;
        accuracy = a;
    }

    oruzje(const oruzje &o){
        tip = o.tip;
        puc = o.puc;
        BrMunicije = o.BrMunicije;
        cena = o.cena;
        damage = o.damage;
        range = o.range;
        accuracy = o.accuracy;
    }

     bool reload();

     int GetCena() const{return cena;}
     void SetCena(int cena)(cena = c);

     float getaccuracy()const {return accuracy;}
     void setaccuracy(float a)(accuracy = a);

     int getrange()const {return range;}
     void setrange(int r)(range = r);

     float Getdamage()const {return damage;}
     void setdamage(float d)(damage = d);

     GetTipOruzja() const{return TipOruzja;}
     void SetTipOruzja(TipOruzja t){ tip = t;}

     GetTipPucanja() const{return TipPucanja;}
     void SetTipPucanja(TipPucanja p){puc = p;}

     int GetBrMunicije() const{return BrMunicije;}
     void SetBrMunicije(int BrMunicije)(BrMunicije = br);
};

#endif // ORUZJE_H_INCLUDED
