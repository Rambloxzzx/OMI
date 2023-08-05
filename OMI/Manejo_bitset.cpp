#include <bits/stdc++.h>

using namespace std;

int main()
{
    /// se puede inicializar con un string
    /// bitset<8> casilla("11001100")
    bitset<8> casilla(0b0000000);
    cout<< casilla<<'\n';
    casilla.set(1);   ///.set() deja todo a 1
    casilla.set(3);
    casilla.set(5);
    /// da el nuemro de bits con valor de 1
    cout<< "casilla.count(): "<<casilla.count()<<'\n';
    cout<< casilla<<'\n';
    casilla.reset(5);  /// .reset()  deja todo a cero
    cout<< casilla<<'\n';
    casilla.flip();    /// invierte los bits
    cout<< casilla<<'\n';
    cout<<casilla.test(7)<<'\n';

    /// tambien lo podemos acceder como un arreglo
    casilla[7]=0;
    int a=casilla[5];
    cout << casilla<<" a: "<<a<<'\n';

    /// arreglo de bits

    vector < bitset <8> >  datos;
    datos.resize(8);
    int j;

    for (unsigned int i =0; i<datos.size(); i++ ){
        j=i%8;
        datos[i].set(j);
    }

    cout<< '\n';
    /// for basado en rangos
    for (bitset<8> e : datos){
        cout << e<<'\n';
    }

    return 0;
}
