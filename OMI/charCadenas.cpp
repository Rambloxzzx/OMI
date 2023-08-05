//============================================================================
// Name        : charCadenas.cpp
// Author      : Olimpiada de Informática CDMx-EDOMEX
// Version     :
//============================================================================

#include <bits/stdc++.h>
using namespace std;
/*
 Veamos el dato tipo char, este mide 8 bits y lo podemos ver como si fuera un entero 
 Pequeño, con el cual podemos sumar restar y multiplicar, sin embargo la diferencia principal
 en como se lee y como se imprime, por ejemplo si leemos un digito 1 en un dato tipo char
 el valor char tendra el valor ascii de 00110001 (49 en decimal) y por lo tanto cuando lo imprimimos imprimira
 el numero 1 de la tabla ascii y todo parece que esta bien, sin embargo si mutiplicamos por 
 2 el numero y lo guardamos en un dato tipo entero (int) este tendrá el valor de 98 y si 
 imprimos la variable entera imprimira el numero 98  y no el numero 2 que en "teoria"
 debiera imprimir el valor 1 multiplicado por 2.
 
 Por lo tanto la unica diferencia entre un char y un entero aparte de su tamaño es que
 el dato tipo char se interpreta como un caracter ascii al leer y al imprimir 
 
 Pero aprovechando esta caracteristica podemos hacer facilmente una conversión de datos
 y de convertir un valor de minuscula a mayusculas facilmente pero esto siempre funcionara cuando 
 usamos codigo ascii de lo contrareo se recomienda usar las funciones de las diversas 
 bibliotecas que c y c++ contienen. 
 
 Una cadena de caracteres en realidad es un arreglo de char con la caracteristica de que 
 termina con el caracter nulo '\0', esto es muy importante porque si nos piden que guardenos 
 los nombres de personas con un maximo de 30 caracteres debes reservar al menos 
 31 caracteres por los 30 caracteres del nombre mas el carcater nulo '\0' por lo cual nuestra 
 regla de siempre agregar 2 posiciones mas a los arreglos aqui no solo es validada sino hasta 
 necesaria.
 
 A contiuacion se muestra una tabla de valores que serán utiles en el futuro: 
 '\a'   la campana
 '\b'   retroceso
 '\f'   avance de hoja
 '\n'   nueva línea
 '\r'   regreso de carro
 '\t'   tabulador horizontal
 '\v'	tabulador vertical
 '\\'   diagonal invertida
 '\?'   interrogacion
 '\''   apostrofo
 '\"'   comiilas
 '\000' numero octal
 '\xhh' numero hexadecimal 
 
 */

void ejemploChar(){
  /*problema dado un numero de mas de 20 digitos y menos de 50 digitos, tu programa
   * debe dar la suma de todos los digitos que lo componen
   
   * para resolver este problema leeremos los digitos en un cadena de caracteres
   * y posteriomente los separaremos a fin de poder trabajar con los digitos de manera 
   * individual 
   * */


  char  cadena[52];		// aqui se leen los digitos
  int   numeros[52];    // aqui iran los digitos separados
  int i;
  int xTot;				// acumula el total de los digitos
  cout << endl << "Teclee numero que tenga de 20 a 50 digitos" << endl;
  cin >> cadena;   // lee una cadena de numeros  tecle 123456789009876543211234567890
  i=0;
  // convertira cada digito caracter en dato tipo entero 
  while (cadena[i] !='\0'){  // 
     numeros[i]= cadena[i]-'0'; // al restarle el valor '0' (48='0' en la tabla ascci)
                               // dejara el numero correcto eliminado el codigo ascii
     i++;
  }
  xTot=0;
  i=0;
  while (cadena[i]!='\0'){
	  xTot=xTot+numeros[i];
      i++;
  }
  cout << "El total de la suma de los digitos es: " << xTot << endl;
}

/* 
 * Este metodo regresa un valor entero que equivale a la cadena de caracteres que contiene el arreglo d
 * */
int stoi(char d[]){
	int num;
	int i;
	num=0;
	i=0;
	while( d[i] != '\0'){
	  num=num*10 + d[i]-'0';	// va convirtiendo digito por digito a un numero entero
	  i++;
	}
	return num;
}

/*
 * 
 * Esta rutina cuenta el numero de caracteres incluidos en un string
 */
int slen(char d[]){
	int i;
	i=0;
	while( d[i] != '\0'){
	  i++;
	}
	return i;
}

void ejemploCharInt(){
  char cadena[12];
  int numero;
  cout << endl << "Dame un numero de menos de 9 digitos que convertire a entero" << endl;
  cin >> cadena;
  numero=stoi(cadena);
  cout << "El valor converido a numero es: " << numero << endl;
  numero= slen(cadena);
  cout << "Se leyeron: " << numero << " digitos" << endl;
}

/*
 * Este programa en base a dos nombres (juan , daniel) copiara el mayor a la variable mayor y colocara la inicales
 * de cada nombre en el arreglo de iniciales y mostrara cuantos caracteres tiene el nombre mayor 
 * */
void ejemploCompara(){
 char nombre1[22];
 char nombre2[22];
 char mayor[22];
 char ini[4];
 char nombres[42];
 cout << endl << "Favor de teclar 2 nombres " << endl;
 cin >> nombre1 ;    // recuerde que se guarda el nombre + el nulo ejemplo:  juan\0
 cin >> nombre2 ;    // recuerde que se guarda el nombre + el nulo ejemplo:  daniel\0
 /*
  * strcmp(s1, s2)
  * compara la cadena s1 con s2 y regresa:
  *     >0 si s1 es mayor a s2 (en realidad 1 o mayor a 1)
  *     0  si s1 es igual a s2
  *    <0  si s1 es menor que s2                                     
  * 
  */
 if (strcmp(nombre1,nombre2)>0){
	 strcpy(mayor,nombre1); // copia de nombre1 a mayor el strcpy tambien copia el '\0' al final
 }else{
	 strcpy(mayor,nombre2); // copia de nombre2 a mayor el strcpy tambien copia el '\0' al final
 }
 // copia las inicales;
   ini[0]=nombre1[0];
   ini[1]=nombre2[0];
   ini[2]='\0';			// Agrega el '\0' para que se pueda imprimir correctamente, si no se hace esto  
                                // el c/c++ imprimira todo lo que encuentra hasta que llege al primer '\0'
   cout << "El nombre mayor alfabeticamente hablando es: " << mayor << endl;
   cout << "Las iniciales son: " << ini << endl;
   cout << "El nombre mayor tiene: " << strlen(mayor) << " caracteres" << endl; // strlen es la rutina standar de c/c++
   
   strcpy(nombres,nombre1);    // copia nombre 1 en nombres
   strcat(nombres,nombre2);	   // concatena (agrega nombre2 al final de lo que tenga la variable nombres)
   cout << "Los nombres concatenados son: " << nombres << endl; // strlen es la rutina standar de c/c++
  
}

/*a qui van ejemplosde funciones de c*/
void ejemploC(){
 char letraMay='A';
 char letraMin='a';
/*
  int tolower(c)    convierte letra a minuscula
  int toupper(c)    convierte letra a mayuscula
  int isdigit(c)    verdadera si el caracter es un digito
  int islower(c)    verdadero si el caracter es minusculas
  int isupper(c)    verdadero si el caracter es mayusculas
  int isalpha(c)    verdadero si el caracter es letras
  int iscntrl(c)    verdadero si el caracter es de control
  int isspace(c)    verdadero si el caracter es un espacio
  int strlen(c)     la longuitud de la cadena
*/
 cout << endl << "Ejemplo de algunas funciones" << endl;
 cout << "tolower(letraMay):" << tolower(letraMay) << endl;
 cout << "islower(letraMay):" << islower(letraMay) << endl;
 cout << "isupper(letraMay):" << isupper(letraMay) << endl;
 cout << "iscntrl(letraMin):" << iscntrl(letraMin) << endl;  
cout << "tolower(letraMay):" << (char) tolower(letraMay) << endl;    // el casting es para que lo trata como char
} 
int main() {
 ejemploChar();
 ejemploCharInt();   // en este ejmplo se muestra como convertir una cadena de digitos en su equivalente numerico
 ejemploCompara();    // ejemplo para comparar y copiar cadenas de caracteres
 ejemploC();
 return 0;
}
