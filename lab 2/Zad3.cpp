#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string.h>
using namespace std;

char **Array2D(int n_rows, int n_columns)
{
    char licznik='A';
    char *(*tab)=new char*[n_columns];
    for(int i=0;i<n_columns;i++)
    {
        tab[i]= new char[n_rows];
    }
    for(int i=0;i<n_columns;i++)
    {
        for(int z=0;z<n_rows;z++)
        {
            tab[i][z]=licznik;
            licznik++;
            if(licznik=='J')
            {
                licznik++;
            }
        }
    }
    return tab;
}

void DeleteArray2D(char **array, int n_rows, int n_columns)
{
    for(int i=0;i<n_columns;i++)
    {
        delete array[i];
    }  
    delete array;
}
void wyswietl( int n_rows, int n_columns , char **tab)
{
    for(int i=0;i<n_columns;i++)
    {
        for(int z=0;z<n_rows;z++)
        {
            cout<<tab[i][z]<<" ";
        }
        cout<<endl;
    }
}
char deszyfruj(char **tab, int l){
	return tab[(l/10)-1][l%10-1];
}
int szyfruj(int n_rows, int n_columns , char **tab, char lit)
{

	if(lit=='J')
	return 24;
    for(int i=0;i<n_columns;i++)
    {
        for(int z=0;z<n_rows;z++)
        {
            if(tab[i][z]==lit){
            	return (i+1)*10+z+1;
            	
			}

        }
        
    }
}
int main(void)
{
	ifstream wejscie("plik-tekst.txt");
	ofstream wyjscie("plik-szyfr.txt");
	cout<<"Wpisz 0 jesli program ma deszyfrowac lub 1 jesli ma szyfrowac"<<endl;
	int n;
	cin>>n;
    int kolumny,wiersze;
    char **tablica;
    kolumny=5;
    wiersze=5;
    tablica=Array2D(wiersze,kolumny);
    		char dane[64];
    	if(!wejscie)
    cout << "Nie mo¿na otworzyæ pliku!" << endl;
if(n==1)
{

  while(wejscie >> dane){
  for(int x=0; x<strlen(dane); x++)
    wyjscie<<szyfruj(wiersze,kolumny,tablica,dane[x])<<" ";
}
    wyjscie<<endl;
}
else{
	 while(wejscie >> dane){
int i;
sscanf(dane, "%d", &i);
    wyjscie<<deszyfruj(tablica,i)<<" ";
}
    wyjscie<<endl;
}
    	 wejscie.close();
    	 wyjscie.close();
	return 0;
    
}
