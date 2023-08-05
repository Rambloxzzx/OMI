#include <bits/stdc++.h>

using namespace std;
///
/// Un arreglo consiste en tener muchas variables con un mismo nombre
/// los arreglos iniican enla posicion cero y por recomendacion siempre
/// debemos agregar 2 elementos:
/// ejemplo si queremos una arreglo para almacenar las letras del abecedario
///   char letras[28]
/// Si queremos un arreglo para almacenar los numeros de los meses
///   int meses[14]
/// Si queremos almacenar 1000 valores numericos en un arreglo
///   int numeros[1000];
/// Para denotar un elemento de un arreglo usaremos un indice numerico
/// ejemplo quiero colocar un 87 en el elemento 32 y un 50 enel elemento 25
///    numeros[32]=87;
///    numeros[50]=25;
/// En el indice tambien puedo poner el resultado de una operación
/// Ejemplo en el elemento 2+2 osea 4 voy a colocar el valor de 6
///    numeros[2+2]= 6
///

int numeros[1000000]; /// arreglo de  numeros de un millos de elementos
int i;                /// indice para ser utilizado en los arreglos
int N;
int main()
{
    /// voy a leer N valores y los guardare en el arreglo
    cin >> N;
    i=1;
    while (i<=N){
        cin >> numeros[i];
        i++;
    }
/// usando for
///  cin >> N;
///  for (i=1; i<N; i++){
///      cin >> numeros[i];
///  }

/// impresion de los valores
     i=1;
     while (i<=N)    {
         cout << numeros[i] << " ";
         i++;
     }
     cout << endl;
///
/// usando for
/// for(i=1;i<=N; i++){
///   cout << numeros[i] << " ";
/// }

    return 0;
}
