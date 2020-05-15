#ifndef POLICAJAC_H_INCLUDED
#define POLICAJAC_H_INCLUDED

enum PozicijaPolicajca{SAOBRACAJAC, SPECIJALAC, VOJNIK};
enum CinPolicajca{SERIF, MAJOR, CHIEF};
enum TipKretanja{SETA, MOTOR, AUTO, HELIHOPTER};

class policajac{
private:
    PozicijaPolicajca poz;
    CinPolicajca Cin;
    TipKratanja kret;
    DinString ZonaKretanja;
public:
    policajac(){
        poz = SPECIJALAC;
        Cin = MAJOR;
        kret = AUTO;
        ZonaKretanja = "mexican street";
    }

    policajac(PozicijaPolicajca p, CinPolicajca c, TipKratanja k, DinString zk){
        poz = o;
        Cin = c;
        kret = k;
        ZonaKretanja = k;
    }

    policajac(const policajac& p){
        poz = p.poz;
        Cin = p.Cin;
        kret = p.kret;
        ZonaKretanja = p.ZonaKretanja;
    }


    getPozicijaPolicajca()const {return poz;}
    void setPozicijaPolicajca(PozicijaPolicajca p)(poz = p);

    getCinPolicajca()const {return Cin;}
    void setCinPolicajca(CinPolicajca c)(Cin = c);

    getTipKretanja()const {return kret;}\
    void setTipKretanja(TipKretanja k)(kret = k);

    DinString getZonaKretanja()const {return ZonaKretanja;}
    void setZonaKretanja(DinString zk)(ZonaKretanja);
};

#endif // POLICAJAC_H_INCLUDED
