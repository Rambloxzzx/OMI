#include <iostream>

using namespace std;
/**
  Ejemplo de como leer un arreglo y  escribirlo en pantalla,
  con los diferentes bucles (while, do-while , for)
  Solo elimina los comantarios del bucle que queires revisar
*/
int main()
{

/** bucle  con for
    int dato[100]={};
    int n;
    // lee n datos
    // 0 < n < 100
    cin >>n;
    int i=0;
    for (i=0; i<n; i++){
        cin >> dato[ i];
    }

    ///Escribe en pantalla el arreglo

    for (i=0; i<n; i++){
        cout << dato[ i]<<" ";
    }


*/

/** bucle con while
    int dato[100]={};
    int n;
    // 0 < n < 100
    // lee n datos
    int i=0;
    cin >>n;
    while (i<n){
        cout << dato[ i]<<" ";
        i++;
    }

    ///Escribe en pantalla el arreglo

    i=0;
    while (i<n){
        cout << dato[ i]<<" ";
        i++;
    }
*/

/** bucle con do-while
    int dato[100]={};
    int n;
    // lee n datos
    // 0 < n < 100
    cin >>n;
    i=0;
    do {
        cin >> dato[ i];
      i++;
    }while (i<n);


    ///Escribe en pantalla el arreglo

    i=0;
    do {
        cin >> dato[ i];
      i++;
    }while (i<n);



*/

    return 0;
}
