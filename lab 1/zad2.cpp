#include <iostream> // Dołączamy bibliotekę odpowiedzialna za
                    // operacje wejścia i wyjścia

int rek(int n)
{
    if(n==1)
    {
        return n;
    }
    return n*rek(n-1);

}

int lit(int n)
{
    int suma=1;
    for (int licznik=1;licznik<=n;licznik++ )
    {
        suma=suma*licznik;
    }
    return suma;
}

int pot(int pods,int poz)
{
    int wynik=pods;
    if(poz==0)
    {
        return 1;
    }
    for(int licznik=1;licznik<poz;licznik++)
    {
        wynik=wynik*pods;
    }
    return wynik;
}
int potrek(int pods, int poz)
{
    if(poz==0)
    {
        return 1;
    }
    if(poz==1)
    {
        return pods;
    }
    return pods*potrek(pods, poz-1);
}

using namespace std;
int main(int argv, char* arg[])
{
 int n=5;
 cout<<rek(5)<<endl;
 cout<<lit(5)<<endl;
 cout<<potrek(2,10)<<endl;
 cout<<pot(2,5)<<endl;
}