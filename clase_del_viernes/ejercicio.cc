#include <iostream>
using namespace std;
struct nodo {

	nodo * hijos ;
	nodo * padre;
	int id;

};

int main(){
	int cantHijos=10;
	nodo * n = new  nodo { new nodo [10],nullptr,0};

	for (int  i=0; i<10; i++)
	{
		n->hijos->hijos=nullptr;
		n->hijos->padre=n;
		n->hijos->id=i+1;
		n->hijos++;

	}
 delete n;
 return 1;

 

}
