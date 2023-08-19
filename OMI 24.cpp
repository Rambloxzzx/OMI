#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string cadena;
    int contador=0;
    
    cin >> cadena;
    for(char c: cadena){
        if(c=='a' or c=='A')
        contador ++;
    }
    cout << contador;

    return 0;
}