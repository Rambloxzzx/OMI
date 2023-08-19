#include <bits/stdc++.h>

/*
   Olimpiada de Informatica CDMX-EDOMEX
*/
using namespace std;
///
/// los arreglos de dos dimensiones pueden ver como una rejilla
///
/// definamos un areglo d 2 dimensiones de 10 por 10
/// recuerde que debemos usar siempre 2 elemtnos mas
///
/// ahora guardemos el vaor 37 en el renglon 3, columna 4
///   numeros[3][4]=37
/// ahora guardemos el vaor 85 en el renglon 8, columna 3
///   numeros[8][3]=85
///

///    ejemplo para ller una rejilla o cuadricula de 3 renglones por 4 filas
///	                c0 	c1	c2 	c3	c4	c5
///renglon 0 		0 	0 	0	0	0	0
///renlgon 1 		0 	1 	2	3	4	0
///renlgon 2 		0 	3 	3	2 	6 	0
///renlgon 3 		0 	8 	3	2	8	0
///renlgon 4 		0 	0 	0	0	0	0


///En ese  ejemplo  tenemos que
/// numeros[2][2] es igual 3
/// numeros[3][1] es igual 8

///Note que si usamos la recomendacion de agregar dos elementos más a cada dimensión
///los datos quedan encerrados entre puro ceros

///Datos de prueba para esta rejilla que pueden usar en el siguiente programa
///3 4
///1 2 3 4
///3 3 2 6
///8 3 2 8



int numeros[12][12];
int i,j;
int reng, col;
int main()
{
    /// vamos hacerlos con while
    cout << "leer con while" << endl;
    cin >> reng >>col;
    i=1;
    while (i<=reng){
        j=1;
        while( j<=col){
             cin >> numeros[i][j];
             j++;
        }
        i++;
    }



    /// vamos a leer un matriz de n renglones por n columnas
    cout << "leer con for" << endl;
    cin >> reng >>col;
    for (i=1;i<=reng;i++){
        for(j=1; j<=col;j++){
             cin >> numeros[i][j];
        }
    }



    /// imprimo dos renglones en blanco
    cout << endl << endl;

    /// ahora imprimamos la matriz while
    cout << endl<< "imprimimos con while" << endl;
    i=1;
    while(i<=reng){
        j=1;
        while(j<=col){
             cout << numeros[i][j] << " ";
             j++;
        }
        i++;
        cout << endl;
    }

    /// ahora imprimamos la matriz usando for
    cout << endl<< "imprimimos con for" << endl;
    for (i=1;i<=reng;i++){
        for(j=1; j<=col;j++){
             cout << numeros[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
