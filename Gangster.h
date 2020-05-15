#ifndef GANGSTER_H_INCLUDED
#define GANGSTER_H_INCLUDED

enum grupa{Madrazo_kartel, mexican_street, families, aztecas};

class Gangster{
private:
bool agresivan;
bool naoruzan;
grupa g;
public:
    Gangster()
{
    agresivan: true;
    naoruzan: true;
    g = mexican_street;
}
Gangster(bool a, bool n, grupa gr)
{
    agresivan = a;
    naoruzan = n;
    g= gr;
}
Gangster(const Gangster &ga)
{
    agresivan = ga.agresivan;
    naoruzan = ga.naoruzan;
    g = ga.g;
}
bool GetAgresivan() const { return agresivan;}
bool GetNaoruzan() const {return naoruzan;}
grupa GetG() const {return g;}
void SetAgresivan(bool a) {agresivan = a;}
void SetNaourzan(bool n)  {naoruzan = n;}
void SetG(grupa gr) {g = gr;}
};

#endif // GANGSTER_H_INCLUDED
