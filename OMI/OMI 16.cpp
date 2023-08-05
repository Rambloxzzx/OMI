#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int secreto=5;
    int n;
    cout << "Pense en un secreto numero del 1 al 10\n";
    cout << "Trata de adivinarlo\n";
    do{
        cout << "dime cual crees que sea: ";
        cin >> n;
    }while (n!=secreto);
    
    cout << "\nFelicidades";
    
    return 0;
}