#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    long long int n;
    cin >> n;
    vector<bool> integer(n + 1, false);
    for(int i=0; i<n-1; i++){
        int num;
        cin >> num;
        integer[num]= true;
    }
    for(int i=1; i<=n; i++){
        if(!integer[i]){
            cout << i << endl;
            break;
        }
    }
    
    
    return 0;
}