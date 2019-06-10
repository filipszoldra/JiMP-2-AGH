#include <iostream>
using namespace std;
class plecak {
    public:
    plecak (int poj){
        this->max_pojemnosc = poj;
    }
    //~plecak();
    bool sprawdz_pojemnosc(){
        if(this->pojemnosc <= max_pojemnosc)
        return 1;
        else{
            return 0;
        }
    }
    
    void wpakuj_wode(){
        if (this->pojemnosc + 1 <= max_pojemnosc){
        this->pojemnosc += 1;
        this->woda ++; }
        else
        cout<<"W plecaku jest za malo miejsca"<<endl;
    }
    void wpakuj_piwo(){
        if (this->pojemnosc + 2 <= max_pojemnosc){
        this->pojemnosc += 2;
        this->piwo ++; }
        else
        cout<<"W plecaku jest za malo miejsca"<<endl;
    }
    void wpakuj_wodke(){
        if (this->pojemnosc + 3 <= max_pojemnosc){
        this->pojemnosc += 3;
        this->wodka ++;}
        else
        cout<<"W plecaku jest za malo miejsca"<<endl;
    }
    void wypakuj_wode(){
         if (this->woda > 0){
        this->pojemnosc -= 1;
        this->woda --; }
        else
        cout<<"Juz nie ma wody"<<endl;
    }
    void wypakuj_piwo(){
         if (this->piwo > 0){
        this->pojemnosc -= 2;
        this->piwo --; }
        else
        cout<<"Juz nie ma piwa"<<endl;
    }
    void wypakuj_wodke(){
         if (this->wodka > 0){
        this->pojemnosc -= 3;
        this->wodka --; }
        else
        cout<<"Juz nie ma wodki"<<endl;
    }
    void pokaz_zawartosc(){
        cout<<"W plecaku jest:"<<endl;
        cout<<this->woda<<" woda"<<endl;
        cout<<this->piwo<<" piwo"<<endl;
        cout<<this->wodka<<" wodka"<<endl;
    }
    void etanol(){
        cout<<((this->piwo*25) + (this->wodka*200))<<" ml"<<endl;
    }
    void promile(int h){
        int et = ((this->piwo*25) + (this->wodka*200)) - (8*h);
        float pr = et/100*1.5;
        cout<<"Twoja srednia promili alkoholu, przy spozywaniu alkoholu przez "<<h<<"godzin to "<<pr<<"%%"<<endl;
    }
    protected:
    int max_pojemnosc= 0;
    int pojemnosc = 0;
    int woda = 0;
    int piwo = 0;
    int wodka = 0;
};
class food{
    int pojemnosc;
    int alk;
}
int main(){
    cout<<"Podaj pojemnosc plecaka."<<endl;
    int n;
    cin>>n;
    plecak p(n);
    int h;
    cout<<"Podaj, ile godzin bedziesz spozywal produkty"<<endl;
    cin>>h;
    cout<<"1 - wpakujesz wode, 2 - wpakujesz piwo, 3 wpakujsz wodke, -1 wypakowujesz wode, -2 wypakowujesz piwo, -3 wypakowujesz wodke, 4 pokaz zawartosc, 5 poziom etanolu w plecaku, 6 srednie promile, 0 konczysz"<<endl;
    while(n!=0){
        cin>>n;
        if(n==1)
            p.wpakuj_wode();
        else if(n==2)
            p.wpakuj_piwo();
        else if(n==3)
            p.wpakuj_wodke();
        else if(n==-1)
            p.wypakuj_wode();
        else if(n==-2)
            p.wypakuj_piwo();
        else if(n==-3)
            p.wypakuj_wodke();
        else if(n==4)
            p.pokaz_zawartosc();
        else if(n==5)
            p.etanol();
        else if(n==6)
            p.promile(h);
        else
        {
            break;
        }
        
    }
    return 0;
}