#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
template <typename T, int L>
class Tablica{
    public:
    
    T &operator[]
    (int i){
        return tabl[i];
    }
    void findmax(){
        T max = tabl[0];
        for(int i = 0; i<L; i++){
            if(tabl[i] > max)
                max = tabl[i];
        } 
        cout<<max<<endl;
    }
    private:
         T tabl[L];
        
};
template <typename T2>
T2 suma(T2 first, T2 second){
    return first + second;
    }
template <typename T3>
T3 value(int *adres){
    T3 x = *adres;
    return x;
}
int main(void){
    Tablica<int, 5> A;
    srand(time(NULL));
    for(int i=0; i<5; i++){
        A[i]=rand()%100;
    }
    for (int i=0; i<5; i++){
        cout<< "A[" << i << "]=" << A[i] <<endl;
    }
    cout<<endl;
    A.findmax();
    cout<< suma<int>(2, 4) << endl;
    cout<< suma<double>(2.38, 3.8871) << endl;
    int liczba = 100;
    int *n = &liczba;
    cout<<n<<endl;
    cout<< value<int>(n)<<endl;
    return 0;
}