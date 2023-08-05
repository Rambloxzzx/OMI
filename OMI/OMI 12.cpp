#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0;
    int renglones = 0;
    int columnas = 0;
    cin >> n;
    renglones = n;
    while(renglones>0){
        columnas = n;
        while(columnas>0){
            cout << 'X';
            columnas--;
        }
        cout << '\n';
        renglones--;
    }
    return 0;
}