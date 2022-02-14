/*Ejercicio 3: REllenar un array de 10 numeros, posteriormente usando punteros indicar cuales son pares y su posision en memoria*/
#include <iostream>

using namespace std;

int main()
{
    int numeros[10], *dir_num;


        for(int i=0; i<10;i++){
        cout<<"Digite numero: ["<<i<<"]"<<endl;
        cin>>numeros[i];
}
    dir_num = numeros;

    for(int i=0;i<10;i++){
        if(*dir_num%2==0){
            cout<<"los numeros pares son: "<<*dir_num<<"es par: "<<endl;
            cout<<"Posision: "<<dir_num<<endl;
        }
        dir_num ++; //el puntero debe incrementarse tambien, no se incrementa con el ciclo
    }


    return 0;
}
