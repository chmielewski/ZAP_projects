#include <iostream>
#include <fstream>
using namespace std;

struct Telement {
int dane;
Telement *next;
};

void utworz_liste (Telement* &glowa) {
Telement *aktualny, *ogon;
int liczba; glowa=NULL;
cout << "Wprowadz dane: (0=koniec)" << endl;
cin >> liczba;
if (liczba==0) return;
glowa = new Telement;
glowa->dane = liczba;
glowa->next = NULL;
ogon = glowa;
cin >> liczba;
while (liczba!=0) {
aktualny = new Telement;
aktualny->dane = liczba;
aktualny->next = NULL;
ogon->next = aktualny;
ogon = aktualny;
cin >> liczba;
}
}

void drukuj_liste (Telement *adres) {
while (adres!=NULL) {
cout << adres->dane << "\t";
adres = adres->next;
}
}

void usun_najwieksza(Telement *&glowa) {
   Telement *aktualny, *nastepny;
   int k=0, max, n=0;
   aktualny = glowa;
   max = aktualny->dane;
   while (aktualny != NULL) {
      aktualny = aktualny->next;
      n++;
      if (max < aktualny->dane) {
         max = aktualny->dane;
         k=n;
      }

   }
   cout << k;
   aktualny = glowa;
   nastepny = aktualny->next;
   for (int i=0; i<k-1; i++) {
      aktualny= aktualny->next;
      nastepny = aktualny->next;
   }

  aktualny->next = nastepny->next;
  delete nastepny;
}

 void dodaj_el_z_przodu(Telement *&glowa) {
    Telement *aktualny;
    aktualny = new Telement;
    aktualny->dane = 55;
    aktualny->next = glowa;
    glowa = aktualny;
 }

void dodaj_el_z_tylu (Telement *glowa) {
   Telement *aktualny, *temp;
   temp = new Telement;
   temp->dane = 55;
   temp->next=NULL;
   while (aktualny != NULL) {
       aktualny = aktualny->next;
   }
   aktualny->next = temp;
}

void usun_ostatnie (Telement *glowa) {
   Telement *aktualny, *nastepny;
   aktualny = glowa;
   nastepny = aktualny->next;
   while (nastepny->next->next != NULL) {
       aktualny = aktualny->next;
       nastepny= aktualny->next;
   }
       aktualny->next=NULL;
       delete nastepny->next;
       delete nastepny;

}


int main()
{
Telement *glowa;
utworz_liste (glowa);
drukuj_liste (glowa);
cout << endl << endl;
usun_najwieksza (glowa);
getchar();
drukuj_liste (glowa);
getchar();
return 0;
}
