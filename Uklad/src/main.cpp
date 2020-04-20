#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"
using namespace std;





int main()
{
Macierz A;
Wektor B;
Wektor Wynik;
UkladRownanLiniowych Ukl;


cout <<"Podaj uklad"<<endl;
cin  >> Ukl;
cout << Ukl<<endl; 
Wynik=Ukl.Cramer(Ukl);
Ukl.blad(Ukl,Wynik);
cout << "Wynik:"<<endl;
cout << Wynik;
}
