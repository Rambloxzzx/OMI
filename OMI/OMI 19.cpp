#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c = 0;
    int familias = 0;
    int r = 0;
    bool flag = true;
    
    cin >> c;
    
    do{
        
        if((r+familias<=c) && (flag==true)){
            r+= familias;
        }else{
            flag= false;
        }
        
    } while(cin>>familias);
    
    cout << r;
    
    return 0;
}  

