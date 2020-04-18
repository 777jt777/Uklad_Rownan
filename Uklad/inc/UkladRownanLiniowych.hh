#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include "../inc/Wektor.hh"
#include "../inc/Macierz.hh"

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class UkladRownanLiniowych {
Macierz A;
Wektor B;
public:
UkladRownanLiniowych() {};
UkladRownanLiniowych(Macierz _A ,Wektor _B) : A(_A), B(_B) {};
  Macierz & get_A() 
 {
     return A;
 }
  Wektor & get_B() 
 {
     return B;
 }
 void set_A(Macierz & N) const
{
    N=A;
}
 void set_B(Wektor & N) const
{
    N=B;
}
const Macierz zamien(int i, Macierz A, Wektor B) const ;

const Wektor Cramer(UkladRownanLiniowych Ukl) const ;

const void blad(UkladRownanLiniowych Ukl, Wektor Wynik) const;
};



/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << ( std::ostream &Strm,const UkladRownanLiniowych &UklRown);


#endif
