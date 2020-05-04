#ifndef LISTAORUZJA_H_INCLUDED
#define LISTAORUZJA_H_INCLUDED

#include "oruzje.h"
#include "pistolji.h"
#include "automatske_puske.h"
#include "bazuka.h"
#include "bombe.h"
#include "snajperi.h"

class Sledeci{
public: Oruzje* oruzje;
Sledeci* next;
};

class Lista{
private:
    Sledeci* pocetak, *kraj;
public:
    Lista(){
    pocetak = kraj = NULL;
    }

    void addOruzje(Oruzje* oruzje){

    Sledeci* newOruzje = new Sledeci();
       newOruzje->oruzje = oruzje;
        newOruzje->next = NULL;
        if(pocetak == NULL)
        {
            pocetak = newOruzje;
            kraj = newOruzje;
            return;
        }
        kraj->next = newOruzje;
        kraj = newOruzje;

    }

    void deleteOruzje(){

    if(pocetak == NULL){
        return;
    }
    if(pocetak->next = NULL){
        Sledeci* pom = pocetak;
        delete(pom->oruzje);
        delete(pom);
        pocetak = NULL;
        return;
    }
    Sledeci* pom = pocetak;
    while(pom->next->next != NULL)
        pom = pom->next;
    Sledeci* obrisi = pom->next;
    delete(obrisi->oruzje);
    delete (obrisi);
    pom->next = NULL;
    kraj = pom;
    }

    void ispis()
{
    Sledeci* pom = pocetak;
    while(pom != NULL){
        printf("%i\n", pom->oruzje->GetBrMunicije());
        pom = pom->next;
    }
}
};

#endif // LISTAORUZJA_H_INCLUDED
