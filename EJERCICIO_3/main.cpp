#include <iostream>

using namespace std;

int main()
{
    char cadena1[100], cadena2[100];
    bool iguales = true;
    cout << "INGRESE UNA CADENA DE TEXTO" << endl;
    cin >> cadena1;
    cout << "INGRESE OTRA CADENA DE TEXTO" << endl;
    cin >> cadena2;

    int i = 0 ;
    while(cadena1[i]!='\0'){

        if(cadena1[i]!=cadena2[i]){
            iguales = false;
            break;
        }
        i++;
    }

    if(iguales == true){
        cout<<"las cadenas son iguales";
    }
    else{
        cout<<"las cadenas son diferentes";
    }
    return 0;
}
