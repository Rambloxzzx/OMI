#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x=0;
    int n=0;
    int i=1;
    
    cin >> n;
    cin >> x;
    do{
        cout << i << ' ';
        i= i+x;
    }while (i<n);

    return 0;
}