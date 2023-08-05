#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena;
    char n;
    bool f=false;
    
    cin >>n;
    cin >> cadena;
    for(char it: cadena){
        if(it==n){
            f= true;
        cout << "CONTENIDO";
        break;
        } 

    }if(f==false){
            cout << "FALTANTE";
        }

    return 0;
}