#include <iostream>
#include <cmath>
#include "Square.h"
using namespace std;
double odl(double x1, double y1, double x2, double y2){
	return sqrt(abs(((x1 - x2)*(x1 - x2))+((y1 - y2)*(y1 - y2))));
}
Square::Square(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4){
	a.x = x1;
	b.x = x2;
	c.x = x3;
	d.x = x4;
	a.y = y1;
	b.y = y2;
	c.y = y3;
	d.y = y4;
}
double Square::obwod(const Square &other) const{
return odl(a.x, a.y, b.x, b.y) + odl(b.x, b.y, c.x, c.y) + odl(c.x, c.y, d.x, d.y) + odl (d.x, d.y, a.x, a.y);
}
double Square::pole(const Square &other) const{
return odl(a.x, a.y, b.x, b.y) * odl(b.x, b.y, c.x, c.y);
}
int main(){
	Square p (2, 2, 4, 2, 4, 4, 2, 4);
	cout<<p.obwod(p)<<" "<<p.pole(p)<<endl;
	return 0;
	
}


