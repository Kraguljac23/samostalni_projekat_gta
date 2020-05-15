#ifndef MOD_H_INCLUDED
#define MOD_H_INCLUDED


class Mod{

private:
DinString naziv;
bool nerealan;
bool opasan;
bool samoubilacki;
public:
    Mod()
    {
       naziv = "Super_JUMP";
       nerealan = true;
       opasan = false;
       samoubilacki = false;
    }
    Mod(DinString n, bool e, bool o, bool s)
    {
        naziv = n;
        nerealan = e;
        opasan = o;
        samoubilacki = s;
    }
    Mod(const Mod& m)
    {
        naziv = m.naziv;
        nerealan = m.nerealan;
        opasan = m.opasan;
        samoubilacki = m.samoubilacki;
    }
    DinString GetNaziv() const {return naziv;}
    bool getopasan() const {return opasan;}
    bool getnerealan() const {return nerealan;}
    bool getsamoubilacki() const {return samoubilacki;}
    void setnaziv(DinString n) {naziv= n;}
    void setnerealan(bool e){ nerealan = e;}
    void setopasan(bool o) {opasan = o;}
    void setsamoubilacki(bool s){samoubilacki = s;}
};

#endif // MOD_H_INCLUDED
