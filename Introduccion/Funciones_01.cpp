//2AV4 Padilla Candelario Axel Eden
#include <iostream>

using namespace std;
void suma(int a, int b);

int main(){
    int num1, num2;
    cout << "Programa que realiza la suma de dos numeros\n" << endl;
    cout << "Introduzca el primer numero: ";
    cin >> num1;
    cout << "Introduzca el segundo numero: ";
    cin >> num2;
    suma(num1,num2);
    return 0;
}
void suma(int a, int b){
    int c=a+b;
    cout << "\nEl resultado de la suma de " << a << " mas " << b << " es " << c << endl;
}
