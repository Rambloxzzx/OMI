//============================================================================
// Name        : estrutura.cpp
// Author      : Olimpiada de Informática CDMX y EDOMEX
// Version     :
//============================================================================

#include <iostream>
using namespace std;

struct BIT{
	unsigned int a     :1;  //1 bit
	unsigned int b     :2;  //2 bits
	unsigned int c     :1;  //1 bit
	unsigned int d     :1;  //1 bit
	unsigned int otros :3;  //3 bits

};

int main() {
	    BIT b;
		b={1,3,1,0,5};
		cout<<'\n'<<b.a;
		cout<<'\n'<<b.b;
		cout<<'\n'<< b.c;
		cout<<'\n'<< b.d;
		cout<<'\n'<<b.otros;
		return 0;
}


