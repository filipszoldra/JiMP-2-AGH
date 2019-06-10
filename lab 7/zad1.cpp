#include <iostream>
#include <vector>
using namespace std;
class UniformFill{
    public:
    UniformFill(int value=0, int i){
        this->v=value;
        for(int j=0; j<j; j++){
            v.emplace_back(0);
        }
    }
        void wypisz(){
            for(auto n : v)
                cout<<n<<" ";
        }
    protected:
    vector <int> v;
};
int main(){
    UniformFill vec (0, 2);
    vec.wypisz();
    
}