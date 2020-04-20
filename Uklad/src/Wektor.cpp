#include "Wektor.hh"
#include <iostream>
#include <cmath>
using namespace std;
/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Wektor, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

 Wektor::Wektor(double xx,double yy,double zz)
{
tab[0]=xx;
tab[1]=yy;
tab[2]=zz;
}


 Wektor::Wektor()
{
tab[0]=0;
tab[1]=0;
tab[2]=0;  
}


double & Wektor::operator[](int index) 
{
 if (index < 0 || index >= ROZMIAR) 
 {
      cerr << "poza zakresem" << endl;
      exit(1);      
 }
 return tab[index];
}

 const double & Wektor::operator[](int index) const
{
 if (index < 0 || index >= ROZMIAR) 
 {
      cerr << "poza zakresem" << endl;
      exit(1);      
 }
 return tab[index];
}

 Wektor  Wektor::operator+ (const Wektor & W2) const // Operacja dodawania wektorow
{
Wektor Wynik;
int i;
for(i=0;i<ROZMIAR;i++)
{
Wynik[i]=W2[i]+tab[i];
}
return Wynik;
}
 Wektor  Wektor::operator- (const Wektor & W2) const // Operacja odejmowania wektorow
{
Wektor Wynik;
int i;
for(i=0;i<ROZMIAR;i++)
{
Wynik[i]=tab[i]-W2[i];
}
return Wynik;
}

 double  Wektor::operator* (const Wektor & W2) const // Operacja mnozenia wektorow
{
double Wynik=0;
int i;
for(i=0;i<ROZMIAR;i++)
{
Wynik+=tab[i]*W2[i];
} 
return Wynik;
}
 Wektor  Wektor::operator* (double l2) const // Operacja mnozenia wektora przez liczbe
{
Wektor Wynik;
int i;
for(i=0;i<ROZMIAR;i++)
if(l2!=0) 
    {  
Wynik[i]=tab[i]*l2;

    }
return Wynik;
}

 Wektor   Wektor::operator/ (double l2) const  // Operacja dzielenia wektora przez liczbe
{
Wektor Wynik;
int i;
if(l2!=0)
 {
for(i=0;i<ROZMIAR;i++)
{
    {   
Wynik[i]=tab[i]/l2;
    }
}

 }
else
{
cerr<< "Dzielenie przez 0!";
exit(1);
}
return Wynik;
}

 bool Wektor::operator==(const Wektor & W2) const  // Operator sprawdzenia rownosci
{
double epsilon=0.000000001;
int i;
for(i=0;i<ROZMIAR;i++)
{
if(this->tab[i]-W2[i]>epsilon)
return false;
}
return true;
}   

bool Wektor::operator!= (const Wektor & W2) const // Operator sprawdzenia nierownosci
{
return !(*this==W2);
}

 double  Wektor::dlugosc() const //Operacja dlugosci wektora
{
double Wynik=0;
 
int i;
for(i=0;i<=2;i++)
{
Wynik+=pow(tab[i],2);

}    
Wynik=sqrt(Wynik); 
return Wynik;
}


std::istream& operator >> (std::istream &Strm, Wektor &Wek) //przeciazenie operatora wejscia wektora
{
Strm>>Wek[0]>>Wek[1]>>Wek[2];
return Strm;
}    
std::ostream& operator << (std::ostream &Strm, const Wektor &Wek) //przeciazenie operatora wyjscia wektora
{
return Strm<<"["<<Wek[0]<<","<<Wek[1]<<","<<Wek[2]<<"]";
}    




