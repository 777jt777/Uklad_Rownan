#ifndef WEKTOR_HH
#define WEKTOR_HH
#include "../inc/rozmiar.h"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Wektor
{
double tab[ROZMIAR];
public:
Wektor();
Wektor(double x,double y,double z);

double & operator[] (int index) ;

const double & operator[](int index) const ; 

 Wektor  operator+ (const Wektor &  W2) const ;

Wektor   operator- (const  Wektor & W2) const ;

double   operator* (const Wektor & W2) const ;

Wektor  operator* (double l2) const ; 

Wektor  operator/ (double l2) const ; 

double  dlugosc() const;

bool operator== (const Wektor & W2) const;

bool operator!= (const Wektor & W2) const;

};



std::istream& operator >> (std::istream &Strm, Wektor &Wek);

std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);
/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
//std::istream& operator >> (std::istream &Strm, Wektor &Wek);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
//std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);

#endif
