#include <iostream>
#include <iomanip>
using namespace std;
class complex{
    public:
        double re, im;
        complex(double rea=0, double ima=0) : re(rea), im(ima) {}
        friend ostream & operator<< (ostream &wyjscie, const complex &s);
        complex operator+(complex z){
            return complex(this->re+z.re, this->im+z.im);
        }
         complex operator-(complex z){
            return complex(this->re-z.re, this->im-z.im);
        }
        complex operator*(complex z){
            return complex((this->re*z.re) - (this->im*z.im), (this->re*z.im) + (this->im*z.re));
        }
        complex operator/(complex z){
            return complex(((this->re*z.re) + (this->im*z.im))/((z.re*z.re)+(z.im+z.im)), ((this->im*z.re) - (this->re*z.im))/((z.re*z.re)+(z.im+z.im)));
        }
        friend istream& operator>>(istream &, complex&);
   
};

    istream& operator>>(istream & input, complex& p){
  
   input >> p.re;
   input.ignore();    // Ignoruj przecinek
   input >> p.im;
   input.ignore();    // Ignowruj nawias
   return input;      // Umożliwia cin >> a >> b >> c;
}    
    
ostream & operator<< (ostream &wyjscie, const complex &s) {
   return wyjscie << "Czesc rzeczywista: " <<s.re << endl << "Czesc urojona: " <<s.im<<endl;
}
 int main() {
 
  complex cc(1,2), cc1(10,5);
   cout << cc;
   cout << cc1;
   complex c3, c4, c5, c6, c7;
   c3 = cc+cc1;
   cout << c3;
   c4 = cc-cc1;
   cout << c4;
   c5 = cc*cc1;
   cout << c5;
   c6 = cc/cc1;
   cout << c6;
      cout <<"Podaj re i im dla kolejnej liczby zespolonej."<<endl;
      cin >> c7;
      cout << c7;
      return 0;
 }
