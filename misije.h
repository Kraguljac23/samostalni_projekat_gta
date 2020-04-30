#ifndef MISIJE_H_INCLUDED
#define MISIJE_H_INCLUDED

class misije{
private:
    string NazivMisije;
    string opis;
public:
    misije()
    {
        NazivMisije = "Prologue";
        opis = "Moras da opljackas banku sa svojom bandom. Nadji nekoliko talaca, uzmi pare i potrudi se da brzo pobegnes od policije!";
    }
    misije(string nm, string o){
        NazivMisije = nm;
        opis = o;
    }
    misije(const misije& s){
        NazivMisije = n.NazivMisije;
        cena = n.cena;
    }  
    int getopis() const{return opis;}
    void setopis(string o) {opis = o;}
    int getNazivMisije() const{return NazivMisije;}
    void setNazivMisije(string nm) const{NazivMisije = nm;}

};


#endif // MISIJE_H_INCLUDED
