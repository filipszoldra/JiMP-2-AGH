#include <iostream> 
#include <string>
using namespace std ;

void odw(string kecz )
{
    int dlugosc=kecz.size();
    for(int licznik=dlugosc;licznik>=0;licznik--)
    {
        cout<<kecz[licznik];
    }
    cout<<endl;
}

int main(int argv, char* arg[])
{
    string keczup;
    cin>>keczup;
    cout<<keczup<<endl;
    odw(keczup);
}
