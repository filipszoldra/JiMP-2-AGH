#include <iostream>
#include <stdexcept>
using namespace std;
class student {
    public:
        student(int w, string n, string s, string k){
            this->wiek=w;
            this->Name=n;
            this->Surname=s;
            this->kierunek=k;
        }
        void validate(){
            if(wiek<10 || wiek>100){
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
    int wiek;
    string Name;
    string Surname;
    string kierunek;
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