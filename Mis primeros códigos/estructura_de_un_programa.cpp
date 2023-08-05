#include <bits/stdc++.h>

using namespace std;
///
/// Este programa tiene como objetivo enseñar a usar el lenguaje C++
///
/// Es importante tomar en cuenta que:
///
/// Todas las variables que esten afuera de algun procedimento
/// se consideran globales y tienen la caracteristica de inicializarce en ceros
/// y se pueden usar en cualquier procedimeinto o funcion
/// la variable pueden ser de los siguientes tipos:
/// int           = enteras y van desde -2,147,483,648 hasta 2,147,483,647
///
/// long long int = entera grande -9,223,372,036,854,775,808 hasta
///                                9,223,372,036,854,775,807
///
/// bool   = variable logica solo puede tener los valores de true o false
///
int N;             /// variable global entera inicializada en cero
int Numero;        /// variable global entera inicializada en cero
int NumeroMayor;   /// variable global entera inicializada en cero
int i;             /// variable global entera inicializada en cero
///
/// Procedimeinto que lee dos numeros y determina la relacion que hay.
/// Los procedimeintos son iguales a definir nuevas instrucciones de karel
///

void DosNumeros(){
    int a=0,b=0;
    cout << '
' << "teclea dos numeros" << '
'; /// escribe en pantalla
    cin >> a >> b; /// lee del teclado 2 numeros a y b
    ///
    /// if = si de karel la condicion va en parentesis y
    /// los operadores de comparación son:
    ///     == igual, != diferente, > mayor que >= mayor o igual que
    ///     < menor que, <= menor igualque
    /// los conectores lógicos son
    ///     && es "y"   y || es "o"
    ///
    if (a>b){
        cout <<"a es mayor" << '
'; /// escribe en pantalla y da  enter='
'
    } else {
        if (a==b){
            cout << "son iguales"  << '
'; /// escribe en pantalla y da un enter
        }else{
            /// escribe en pantalla y al final agrega un enter='
'
            cout<< "A: " << a <<" es menor que b: " << b << '
';

        }
    }
    cout << '
'<< '
'<< '
';  /// escribe tres enter='
'
}
///
/// Funcion que calcula el area de un rectangulo recibe dos parametros
/// y estos son las variables locales (dentro de la funcion Rectangulo)
/// Una función a  diferencia de un procedimento, debe devolver un valor
/// en este caso se indica que el valor que devuelve es de tipo int
///
int Rectangulo (int b, int a){
    int ret_val=0;   /// define una vairable para almacenar el valor de retorno
    /// el resultado de la expresion que esta a la derecha del signo igual
    /// es asignada a la variable que se encuentra a la izquierda del signo igual
    /// los operadores que podemos utilizar son:
    ///    + suma, - resta, / division, * multiplicacion, % modulo o residuo
    ret_val= b*a;
    return ret_val; /// termina la funcion y devuelve el valor contenido
                    /// en la variable ret_val

}

int main()
{
     /// variables locales son las que se definen dentro de un
     /// prodecimiento o función y solo se pueden utilizar dentro del mismo
     /// esta variables se deben inicializar
     ///
     /// Se llama un procedimiento que va a leer dos números y nos da su relacion
     ///
     DosNumeros();
     ///
     /// funcion que calcula el area de un rectangulo
     ///
     int base=0, altura=0, resultado=0; /// 3 variables locales se deben inicializar
     cout << "Escribe base y altura (rectangulo): ";  /// escribe en pantalla
     cin >> base >> altura;             /// lee del teclado base y altura
     resultado=Rectangulo(base,altura); /// ejecuta una funcion que devuelve un valor
     cout << "el area es: " << resultado<< '
';   /// escribe en pantalla la var. resultado y un enter

     ///
     ///   Lee un conjunto de "N" datos y ver cual es el valor maximo
     ///   usando while (mientras)
     ///
     cout << '
'<< "Cuantos numeros vas a introducir: " ; /// escribe en patalla
     cin >> N; /// lee del teclado el valor N que indica cantidad de numeros a leer
     i=1;
     NumeroMayor=0;
     while (i<=N)  {              /// mientras i sea menor o igual a N
        cin >> Numero;            /// lee del teclado un numero
        if (Numero> NumeroMayor){ /// si el numero leido es mayor al Mayor Numero
                                  /// almacenado hasta el momento lo
            NumeroMayor= Numero;  /// almacena en NumeroMayor
        }
        i++;                      /// incrementa el valor i en uno, osea i=1+1;
     }
     ///escribe en pantalla el numero mayor y da un enter='
'
     cout << "El numero mayor: "<< NumeroMayor << '
'<< '
';


     ///
     ///   Lee un conjunto de "N" datos y ver cual es el valor maximo
     ///   usando for (para)
     cout << '
'<< "Cuantos numeros vas a introducir: " ; /// escribe en patalla
     cin >> N; /// lee del teclado el valor N que indica cantidad de numeros a leer
     NumeroMayor=0;
     for (i=1; i<=N; i++)  {      /// mientras i sea menor o igual a N
        cin >> Numero;            /// lee del teclado un numero
        if (Numero> NumeroMayor){ /// si el numero leido es mayor al Mayor Numero
                                  /// almacenado hasta el momento lo
            NumeroMayor= Numero;  /// almacena en NumeroMayor
        }
     }
     cout << "El numero mayor: "<< NumeroMayor << '
'<< '
'; ///escribe en pantalla el numero mayor y da un enter='
'


    return 0;
}
