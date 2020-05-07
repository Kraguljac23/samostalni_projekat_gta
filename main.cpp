#include <iostream>

using namespace std;

#include "oruzje.h"
#include "tip_misije.h"


int main(){

    vreme v;
    v.h = 0;
    v.m = 6;
    v.s = 45;
    pocetka.h = 21;
    pocetka.m = 0;
    pocetka.s = 0;
    zavrsetka.h = 21;
    zavrsetka.m = 16;
    zavrsetka.s = 45;

oruzje<TipOruzja, TipPucanja> t(AUTOMATSKA_PUSKA,30, 9000, BURST);
t.GetOruzje()->GetListaOruzja()->print();
t.GetOruzje()->GetListaOruzja()->DodajOruzje(new oruzje());
t.GetOruzje()->GetListaOruzja()->DodajOruzje(new oruzje(PISTOLJ, SINGLE, 15, 4500));
t.GetOruzje()->GetListaOruzja()->deleteOruzje();
t.GetOruzje()->GetListaOruzja()->print();

oruzje a();
oruzje b(SNAJPER, SINGLE, 20, 12000);
oruzje c(b);

printf("%i", b.GetOruzje()->AddOruzje(1)->GetBrMunicije());
c.GetOruzje()->AddOruzje(1)->SetBrMunicije(20);
printf("%i", c.GetOruzje()->AddOruzje(1)->GetBrMunicije());
}

