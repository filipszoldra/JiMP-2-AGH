#include <iostream> 
#include <string>
using namespace std ;

void MultiplicationTable(int tab[][10])
{
    for(int i=0; i<10; i++){
        for(int j=0;j<10;j++){
            tab[i][j]=(i+1)*(j+1);
        }
    }
}
void wysw(int tab[][10])
{

    for(int i=0; i<10; i++){
        for(int j=0;j<10;j++){
           cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(int argv, char* arg[])
{
    int tab[10][10];
    MultiplicationTable(tab);
    wysw(tab);
}