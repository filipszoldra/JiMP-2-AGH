#include <iostream>
using namespace std;
class kolo{
    protected:
    double x, y, r;
    public:
    kolo (double x1, double y1, double r1){
        this->x = x1;
        this->y = y1; 
        this->r = r1;
    }
    double pole (){
        return 3.14*this->r*this->r;
    }

};
class kula : public kolo{
    protected:
    double z;
    public:
    kula(double x1, double y1, double z1, double r1):kolo(x1, y1, r1){z=z1;}
    
    double pole (){
        return 4*3.14*this->r*this->r;
    }

};

int main(){
    kolo k (0, 0, 1);
    cout<<k.pole()<<endl;
    kula k1 (0, 0, 0, 10);
    cout<<k1.pole()<<endl;
    cout<<k1.kolo::pole()<<endl;
    return 0;
}