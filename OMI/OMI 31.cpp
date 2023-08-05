#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int numero=0;
    int suma=0;
    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> numero;
        suma+=numero;
    }
    cout << suma;

    return 0;
}