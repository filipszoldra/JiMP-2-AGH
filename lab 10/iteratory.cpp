#include <iostream>
#include <vector>
#include <string>
using namespace std;
class IterableIterator{
    public:
    virtual pair<int, string> Dereference() = 0;
    virtual IterableIterator &Next() = 0;
    virtual bool NotEquals(const IterableIterator &other);
    ~IterableIterator ();
};
class ZipperIterator:public IterableIterator{
    protected:
    vector<int> ::iterator left_begin;
    vector<string> ::iterator right_begin;
    vector<int> ::iterator left_end;
    vector<string> ::iterator right_end;
    public:
ZipperIterator(vector<int> left_begin,
    vector<string> right_begin,
    vector<int> left_end,
    vector<string> right_end) {
        this->right_begin = right_begin;
        this->left_begin = left_begin;
        this->right_end = right_end;
        this->left_end = left_end;
    }
    pair<int, string> Dereference(){
        pair<int, string> d;
        d.first = *left_begin;
        d.end = *right_begin;
    }

};
    int main(){
    vector<int> tab1;
    for (int i=0;i<3;i++){
        tab1.push_back(i);
    }
    vector<int>::iterator begin1=tab1.begin();
    vector<int>::iterator end1=tab1.end();
    vector<string> tab2;
    for (int i=0;i<3;i++){
        tab2.push_back("tekst");
    }
    vector<string>::iterator begin2=tab2.begin();
    vector<string>::iterator end2=tab2.end();
    ZipperIterator a(begin1, begin2, end1, end2);
    return 0;

}


       
