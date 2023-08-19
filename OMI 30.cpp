#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string cadena = "";
    int contador = 1;
    getline(cin, cadena);
    for (auto c: cadena){
        if (c == ' '){
            contador++;
        }
    }
    cout << contador;

    return 0;
}