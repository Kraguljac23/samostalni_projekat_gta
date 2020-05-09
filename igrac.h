#ifndef IGRAC_H_INCLUDED
#define IGRAC_H_INCLUDED

#include "liste.h"

class igrac{
private:
    List<vozila> v;
    List<oruzje> o;
    DinString ime;
    double StanjeNaRacunu;
public:
    igrac():ime("Aleksa Kraguljac"), StanjeNaRacunu(125000){

    }
    
    igrac(DinString i, double s): ime("Aleksa Kraguljac"), StanjeNaRacunu(125000){
    ime = i;
    StanjeNaRacunu = s;
    }
    
    bool dodaj(const vozila& v){
        if(StanjeNaRacunu() > cena){
            return vozila.add(vozila() + 1, v);
        }

        return false;
    }
   
    
    igrac(const igrac& i){
    ime = i.ime;
    StanjeNaRacunu = i.StanjeNaRacunu;
    }
    
    
    DinString getIme()const {return ime;}
    void setime(DinString i)(ime = i);
    
    double getStanjeNaRacunu()const {return StanjeNaRacunu;}
    void setStanjeNaRacunu(double s)(StanjeNaRacunu = s);
};

#endif // IGRAC_H_INCLUDED
