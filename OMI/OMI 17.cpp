#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    int n;
    int i;
    
    cin >> n;
    cin >> x;
    i++;
    do{
        cout << i << ' ';
        i= i+x;
    }while (i<n);
    
    return 0;
}