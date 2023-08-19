#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string cadena="";
    string respuesta="FALTANTE";
    char caracter= '';
    
    cin >> caracter;
    cin >> cadena;
    for(auto c: cadena){
        if(c == caracter){
            respuesta="CONTENIDO";
            break
        }
    }
    cout << respuesta;

    return 0;
}