#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
  long long int n = 0;
  long long int i = 0;
  long long int h[102] = {};
  long long int cima = 0;
  cin >> n;
  i = 1;
  while(i<=n) {
    cin >> h[i];
    i = i + 1;

  } // end while
  i = 1;
  while(i<=n) {
    if((h[i]>h[i-1] && h[i]>h[i+1])) {
      cima = cima + 1;

    } //end if
    i = i + 1;

  } // end while
  cout << cima;
} //end main
