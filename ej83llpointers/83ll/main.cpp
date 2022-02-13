#include <iostream>

using namespace std;

int main()
{
    int numero, *dir_numero;

    cout<<"Digite un numero: "; cin>>numero;

    dir_numero =&numero; //

    if(*dir_numero%2==0){
        cout<<"El num es par "<<*dir_numero <<"es par"<<endl;
        cout<<"Posision: "<<dir_numero<<endl;
    }
    else{
        cout<<"El numero"<<*dir_numero<<"es impar"<<endl;
        cout<<"Posision: "<<dir_numero<<endl;
    }
    cout << "" << endl;
    return 0;
}
