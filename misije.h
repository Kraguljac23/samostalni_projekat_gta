#ifndef MISIJE_H_INCLUDED
#define MISIJE_H_INCLUDED

enum TIPmisije{PLJACKA, UBISTVO};

class misije{
private:
    DinString NazivMisije;
    DinString opis;
    double reward;
    DinString MissionPart;
    DinString NPCs;
public:
    misije()
    {
        NazivMisije = "Prologue";
        opis = "Moras da opljackas banku sa svojom bandom. Nadji nekoliko taoca, uzmi pare i potrudi se da brzo pobegnes od policije!";
        reward = 15000;
        MissionPart = "Collect the cash";
    }
    misije(DinString nm, DinString o, double r, DinSring mp, DinString n){
        NazivMisije = nm;
        opis = o;
        reward = r;
        MissionPart = mp;
        NPCs = n;
        }

    misije(const misije& s){
        NazivMisije = s.NazivMisije;
        opis = s.opis;
        reward = s.reward;
        MissionPart = s.MissionPart;
        NPCs = s.NPCs;
        }

    getopis() const{return opis;}
    void setopis(DinString o) {opis = o;}

    getNazivMisije() const{return NazivMisije;}
    void setNazivMisije(DinString nm) const{NazivMisije = nm;}

    double getreward()const {return reward;}
    void setreward(double r)(reward = r);

    DinString getMissionPart()const {return MissionPart;}
    void setMissionPart(dinstring mp)(MissionPart = mp);

    DinString getNPCs()const {return NPCs;}
    void setNPCs(dinstring n)(NPCs = n);



};


#endif // MISIJE_H_INCLUDED
