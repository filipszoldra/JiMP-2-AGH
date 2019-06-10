#ifndef PROJECTNAME_PATH_ULAMEK_H_
#define PROJECTNAME_PATH_ULAMEK_H_

#include <iostream>
class Ulamek {
 public:
  //Konstruktor bezparametrowy
Ulamek();
  //Konstruktor parametrowy
Ulamek(double l, double m);
  //Destruktor wykonywany przed zwolnieniem pamięci
  ~Ulamek();
 
  //Metody nie modyfikujące stanu obiektu (const na końcu metody)
  //nie mogą zmodyfikować tego obiektu.
;
  double UlD(const Ulamek) const;
 void wypisz(const Ulamek) const;
 
 
 
 
  //metody seterów pozwalające zmienić stan obiektu 
  //po jego zainicjalizowaniu
  void SetM(double l);
  void SetL(double m);
  //w przeciwienstwie do pythona C++ wymaga jawnej deklaracji składowych pól klasy:
  double l1, m1;
};

#endif  // PROJECTNAME_PATH_POINT_H_
