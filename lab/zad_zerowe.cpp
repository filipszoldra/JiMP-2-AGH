#include <iostream>
#include "Ulamek.h"
#include <sstream>
using ::std::cout;
using ::std::endl;
Ulamek::Ulamek(double l, double m){
  cout << "Konstruktor parametrowy" << endl;
  if(m==0){
      cout<<"Mianownik nie moze byc 0"<<endl;
      return;
  }
  l1 = l;
  m1 = m;
}
 
Ulamek::~Ulamek(){
  cout << "Destruktor! Nic nie robie, bo nie musze zwalniać pamięci!";
  cout << endl;
}

 
 
double Ulamek::UlD(const Ulamek) const{
  return l1/m1;
}
void Ulamek::wypisz(const Ulamek) const{
  cout<<l1<<" "<<m1<<endl;
}

 

int main(){
    Ulamek x {9,4};
    x.wypisz(x);
  cout <<  x.UlD(x) << endl;
}