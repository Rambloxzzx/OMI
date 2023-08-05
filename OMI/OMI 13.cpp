#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x=0;
    int y = 0;

    cin >> x;
    cin >> y;
    
    while(x!=y){
        if(x>y){
             x-=y;
        }else
        y-=x;
    }
    cout << x;
    return 0;
}