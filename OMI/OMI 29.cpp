#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string cadena="olimpiada";
    int a=0, e=0, i=0, o=0, u=0;
    for(auto c : cadena) {
        switch (c){
            case 'a':
            case 'A':
                a++;
                break;
            case 'e':
            case 'E':
                e++;
                break;
            case 'i':
            case 'I':
                i++;
                break;
            case 'o':
            case 'O':
                o++;
                break;
            case 'u':
            case 'U':
                u++;
        }
    }
    cout << "\n";
    cout << "a" << '\t' << a << '\n';
    cout << "e" << '\t' << e << '\n';
    cout << "i" << '\t' << i << '\n';
    cout << "o" << '\t' << o << '\n';
    cout << "u" << '\t' << u;

    return 0;
}