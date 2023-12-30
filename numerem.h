#include <bits/stdc++.h>
#define NM 100

using namespace std;
class numerem
{
    private:
    string x;
    int n;

    public:
    ///Constructori
    numerem();
    numerem(numerem &a);

    ///Deconstructor
    ~numerem();

    /// Supraincarcare

    friend istream& operator>> (istream &is, numerem&r); ///operatori de citire
    friend ostream& operator<< (ostream &os, numerem&r); ///operatori de afisare
    friend numerem operator+ (numerem x, numerem y); ///operatori de adunare
    friend numerem operator- (numerem x, numerem y); ///operatori de scadere
    friend numerem operator* (numerem x, int y); ///operator de inmultire cu un numar
    friend int operator< (numerem x, numerem y); ///operator de comparare
    friend bool operator% (numerem x,int v); ///operator de paritate
};

