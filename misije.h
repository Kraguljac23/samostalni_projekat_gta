#ifndef MISIJE_H_INCLUDED
#define MISIJE_H_INCLUDED

class misije{
private:
    DinString NazivMisije;
    DinString opis;
public:
    misije()
    {
        NazivMisije = "Prologue";
        opis = "Moras da opljackas banku sa svojom bandom. Nadji nekoliko talaca, uzmi pare i potrudi se da brzo pobegnes od policije!";
    }
    misije(DinString nm, DinString o){
        NazivMisije = nm;
        opis = o;
        }

    misije(const misije& s){
        NazivMisije = s.NazivMisije;
        opis = s.opis;
        }

    getopis() const{return opis;}
    void setopis(DinString o) {opis = o;}
    getNazivMisije() const{return NazivMisije;}
    void setNazivMisije(DinString nm) const{NazivMisije = nm;}

};


#endif // MISIJE_H_INCLUDED
