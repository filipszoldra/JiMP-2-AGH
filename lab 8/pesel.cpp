#include <iostream>
#include <stdexcept>
using namespace std;
class pesel {
    public:
        pesel(int* pesell){
            this->pes=pesell;
        }
        void validate(){
            int suma = (pes[0]*9) + (pes[1]*7) + (pes[2]*3) + (pes[3]*1) + (pes[4]*9) + (pes[5]*7) + (pes[6]*3) + (pes[7]*1) + (pes[8]*9) + (pes[9]*7);
            if(suma%10 != pes[10]){
                throw invalidControlCount();
            }
        }
        int invalidControlCount(){
            cout<<pes[10]<<" ta cyfra kontrolna nie zgadza sie z pozostalymi cyframi w peselu"<<endl;
        }
        void pokaz(){
            for(int i = 0; i<11; i++){
                cout<<pes[i]<<" ";
            }
            cout<<endl;
        }

    
    private:
    int* pes;
};
int main(){
    int pesell[11];
    for(int i = 0; i < 11; i++){
        cin >> pesell[i];
    }
    pesel p(pesell);
    p.pokaz();
    p.validate();
    return 0;
}