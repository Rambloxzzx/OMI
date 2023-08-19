#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int n = 0;
    int mayor = 0;
    int menor = 1000;
    int bajos = 0;
    int altos = 0;
    int arbitros = 0;
    int i = 0;
    int altura[102] = {};
 
   cin >> n; 
   i = 1;
   while(i<=n) {
       
       cin >> altura[i];
       if(altura[i]<menor) {
           menor = altura[i];
       } //end if
       if(altura[i]>mayor) {
           mayor = altura[i];
       } //end if
       i = i+1;
   } //end while
   
   i=1;
   while(i<=n) {
       if(altura[i]-menor== mayor-altura[i]) {
           arbitros = arbitros + 1;
       }
       else {
           if(altura[i]-menor<mayor-altura[i]) {
               bajos = bajos + 1;
           }
           else{
               altos = altos + 1;
           } //end if
       } //end if
       i = i + 1;
   } //end while
   cout << bajos;
   cout << " ";
   cout << arbitros;
   cout << " ";
   cout << altos;
   return 0;
   
} //end main
