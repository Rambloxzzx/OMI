#include <iostream>

using namespace std;


/*
 Esta funcion es similar a max(a,b)
 solo que el chequeo se hace en el momento de la compilacion y
 se aseguran los tipos de datos

*/
template<typename T>
T getMax(T a, T b){
    if (a > b ){
        return a;
    }else {
        return b;
    }
}

int main()
{
    int n1, n2;
    char c1, c2;

    cout << "Dame 2 numeros" << endl;
    cin >> n1 >> n2;
    cout << getMax<int>(n1,n2)<< endl;   // cuando se usa se debe especificar el tipo de dato
    cout << getMax(n1,n2)<< endl;        // En este caso el compilador determina el tipo basado en los argumentos

    cout << "Dame 2 letras" << endl;
    cin >> c1 >> c2;
    cout << getMax<char>(c1,c2)<< endl;  // cuando se usa se debe especificar el tipo de dato
    cout << getMax(c1,c2)<< endl;        // En este caso el compilador determina el tipo basado en los argumentos
    return 0;
}
