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
public:
    igrac():ime("Aleksa Kraguljac"), StanjeNaRacunu(5311), reputation(100000){

    }

    igrac(DinString i, double s, double r){
        ime = i;
        StanjeNaRacunu = s;
        reputation = r;
    }

    igrac(const igrac& i){
        ime = i.ime;
        StanjeNaRacunu = i.StanjeNaRacunu;
        reputation = i.reputation;
    }

    DinString getime()const {return ime;}
    void setime(DinString i)(ime = i);

    double getStanjeNaRacunu()const {return StanjeNaRacunu;}
    void setStanjeNaRacunu(double s)(StanjeNaRacunu = s);

    double getreputation()const {return reputation;}
    void setreputation(double r)(reputation = r);
};

#endif // IGRAC_H_INCLUDED
