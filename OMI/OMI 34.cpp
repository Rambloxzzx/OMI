#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int a=10, b=150;
    double x=123456.141592;
    cout << setw(10)<<a<<" "<<b<<" "<<x<<'\n';
    cout << setw(10)<<a<<" "<<setprecision(15)<<x<<" "<<setprecision(5)<<x<<'\n';
    cout << std::dec<<setw(5)<<a<<" "<<b<<'\n';
    cout << std::hex<<setw(5)<<a<<" "<<b<<'\n';
    cout << std::oct<<setw(5)<<a<<" "<<b<<'\n';

    return 0;
}