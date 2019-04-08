#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	int val;
	node *next;
};
	void wyswietl(node *first){
		while(first->next){
		
		cout<<first->next->val<<endl;
		first=first->next;
		}
		return;
	}
	
int main(){
	node *first = new node;
	first->next=NULL;
	int n=1;
	cout<<"Wprowadzaj liczby calkowite, ktore maja byc wartosciami listy. Zakoncz wprowadzanie liczba 0."<<endl;
	while(n!=0){
	cin>>n;
	node *k = new node;
	k->val=n;
	k->next=first->next;
	first->next=k;
}
cout<<endl;
	wyswietl(first);
	cout<<endl;
	while(first->next){
		node *tmp=new node;
		tmp=first->next->next;
		delete(first->next);
		first->next=tmp;
		delete(tmp);
		}
		delete(first);
	
	
}
