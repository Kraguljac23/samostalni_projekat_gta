#ifndef IGRAC_H_INCLUDED
#define IGRAC_H_INCLUDED
#include "liste.h"
#include "misije.h"
#include "Mod.h"
class igrac{
private:
    List<vozila> v;
    List<oruzje> o;
    List<misije> predjene;
    List<misije> utoku;
    LIst<Mod> m;
    DinString ime;
    double StanjeNaRacunu;
    double reputation;
    int health;
    bool armour;
    int stamina;
public:
    igrac():ime("Aleksa Kraguljac"), StanjeNaRacunu(5311), reputation(100000), {

    }

    igrac(DinString i, double s, double r, int h, bool a, int st){
        ime = i;
        StanjeNaRacunu = s;
        reputation = r;
        health = h;
        stamina = st;
        armour = a;
    }

    igrac(const igrac& i){
        ime = i.ime;
        StanjeNaRacunu = i.StanjeNaRacunu;
        reputation = i.reputation;
        health = i.health;
        stamina = i.stamina;
        armour = i.armour;
    }

    DinString getime()const {return ime;}
    void setime(DinString i)(ime = i);

    double getStanjeNaRacunu()const {return StanjeNaRacunu;}
    void setStanjeNaRacunu(double s)(StanjeNaRacunu = s);

    double getreputation()const {return reputation;}
    void setreputation(double r)(reputation = r);
    
    int gethelath()const {return health;}
    void sethelath(int h)(health = h);

    int getstamina()const {return stamina;}
    void setstamina(int s)(stamina = s);

    bool getarmour()const {return armour;}
    void setarmour(bool a)(armour = a);
};

#endif // IGRAC_H_INCLUDED
