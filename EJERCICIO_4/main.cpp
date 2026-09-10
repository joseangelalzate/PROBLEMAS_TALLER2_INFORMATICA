#include <iostream>

using namespace std;

int main()
{
    char cadena_num[10]; //se puede ampliar hasta el rango que sea necesario
    int i = 0, num = 0;

    cout << "INGRESE LA CADENA DE NUMEROS PARA RETORNARLA EN ENTEROS" << endl;
    cin>>cadena_num;

    while (cadena_num[i]!='\0'){ //BUCLE HASTA QUE LA CADENA DE TEXTO TERMINA
        char  caracter = '0';
        num *=10;                         //MULTIPLICA EL DIGITO POR 10 PARA PASAR AL SIGUIENTE DIGITO
        while(caracter!=cadena_num[i]){
            caracter ++;
            num++;                        //ALMACENA EL DIGITO
        }
        i++;
    }
    cout<<cadena_num<<" es igual a "<<num ;
    return 0;
}
