#include <bits/stdc++.h>
using namespace std;

  struct PUNTO{
    int x;         /// variable contenida llamada "x"
    int y;         /// variable contenida llamada "y"


    const bool operator< (const PUNTO &otro) const {

         bool ret_val=false;
         int distancia, distanciaOtro;
         distancia= x*x + y*y;
         distanciaOtro=otro.x*otro.x +otro.y*otro.y;
         ret_val= distancia < distanciaOtro;


         return ret_val;
    }

    PUNTO operator+ (const PUNTO &otro) const {
         PUNTO  ret_val;
         ret_val.x=x+otro.x;
         ret_val.y=y+otro.y;
         return ret_val;
    }


    void operator++ () { /// para ++PUNTO
          x++;
          y++;
    }

    void operator++ (const int unused) { /// para PUNTO++
          x++;
          y++;
    }

};


PUNTO pto1, pto2;

PUNTO PUNTOS[12];

int i=0;

void imprime(){
    cout << endl;
    i=1;
    while (i<=10){
        cout << "PUNTO: "<< i<< " ("<<PUNTOS[i].x <<", "<< PUNTOS[i].y<<")"<< endl;
        i++;
    }

}

int main()
{
    pto1={6,6};
    pto2.x=2;
    pto2.y=2;

    if (pto1 < pto2){
        cout << "pto1 es menor que pto2" << endl;
    }else {
        cout <<" pto1 NO es menor que pto2" << endl;
    }
    /// llenaremos el arreglo de PUNTOS
    i=1;
    while (i<=10){
       PUNTOS[i]={11-i,11-i};  /// PUNTOS[1]={10,10}, PUNTOS[2]={9,9},...  PUNTOS[1]={1,1}
       i++;
    }
    cout<<endl<<"PUNTOS desordenados";
    imprime();

    /// ordenaremos los PUNTOS y los imprimiremos

    sort(PUNTOS+1,PUNTOS+11);

    cout<<endl<<"PUNTOS ordenados" ;
    imprime();

    /// agregando la operacion de +
    PUNTO pto3=pto1+pto2;
    cout << endl<<"pto1+pt2= ("<<pto3.x<<", "<<pto3.y<<")"<<endl;

    /// agregando la operacion de ++
    ++pto3;
    cout << endl<<"pto3++ = ("<<pto3.x<<", "<<pto3.y<<")"<<endl;
    pto3++;
    cout << endl<<"pto3++ = ("<<pto3.x<<", "<<pto3.y<<")"<<endl;
    return 0;
}
