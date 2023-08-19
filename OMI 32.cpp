#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int numero=0;
    int contador=0;
    int suma=0;
    while(cin >> numero){
        suma+=numero;
        contador++;
    }
    cout << "\n conte: " << contador;
    cout << "\n sume " << suma;
    return 0;
}