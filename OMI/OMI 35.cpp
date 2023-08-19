#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string valor="123";
    int cantidad;
    stringstream(valor) >> cantidad;
    cout << cantidad*3 << endl;
    
    string otrovalor="1.123";
    double num;
    stringstream(otrovalor) >> num;
    cout << num*3;

    return 0;
}
//como cambiar de un string a un dato numerico