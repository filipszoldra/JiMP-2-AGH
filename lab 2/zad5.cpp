#include <iostream> 
#include <string>
using namespace std ;


int main(){
    int n;
    cin>>n;
    int l=n;
    int tab[1000];
	int i=0;
	while(n>0)
	{tab[i]=n%2;
	n=n/2;
	i++;
	}
	
	
		for (int x=i-1;x>=0;x--)
	cout<<tab[x];
	cout<<endl;
int x=0;
i--;
bool cont=1;
while(i>x){
	if(tab[i]!=tab[x]){
		cout<<"Ta liczba nie jest palindromem binarnym."<<endl;
		cont=0;
		break;
	}
	i--;
	x++;
}
if(cont==1)
cout<<"Ta liczba jest palindromem binarnym."<<endl;
}
