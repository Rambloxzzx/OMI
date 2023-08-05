#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << "X";
        }
        cout << '\n';
    }
    /*El primer for sirve para saber cuantos renglones va realizar 
    el segundo for sirve para escribir las n equis.*/
    
    return 0;
}