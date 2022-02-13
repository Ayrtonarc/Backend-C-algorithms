#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, *dir_num;

    num = 20;
    dir_num = &num;

    cout <<"Numero"<<*dir_num<< endl;
    cout<<"Direccion de mem: "<<dir_num<<endl;
    return 0;
}
