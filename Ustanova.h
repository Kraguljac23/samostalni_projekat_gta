#ifndef USTANOVA_H_INCLUDED
#define USTANOVA_H_INCLUDED

enum Ustanove {Frizerski_salon, Policijska_stanica, MojaKuca, Zatvor, Aerodrom, Striptiz};
struct XY{
int x, y;
};
class Ustanova{
    private:
    XY location;
    Ustanove u;
    bool dozvoljenoOruzje;
    bool usluga;
    bool obezbedjeno;
    public:
        Ustanova()
        {
            location.x = 0;
            location.y = 0;
            u = Policijska_stanica;
            dozvoljenoOruzje = false;
            usluga = false;
            obezbedjeno = true;
        }
        Ustanova(Ustanove e, bool d, bool us, bool o, XY l)
        {
            location = l;
            u = e;
            dozvoljenoOruzje = d;
            usluga = us;
            obezbedjeno = o;
        }
        Ustanova(const Ustanova& us)
        {
            location = us.location
            u = us.u;
            dozvoljenoOruzje - us.dozvoljenoOruzje;
            usluga = us.usluga;
            obezbedjeno = us.obezbedjeno;
        }
        bool GetDozvoljenoOruzje() const {return d;}
        Ustanove getusstanove() const {return u;}
        bool getObezbedjeno() const {return obezbedjeno};
        bool getusluga() const {return obezbedjeno;}
        void Setdozvoljenoruzje(bool d) {dozvoljenoOruzje = d;}
void Setustanove(Ustanove us) {u = us;}
void SetObezbedjeno(bool o) {obezbedjeno = o;}
void Setusluga(bool us){usluga = us;}
};

#endif // USTANOVA_H_INCLUDED
