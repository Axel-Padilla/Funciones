//2AV4 Padilla Candelario Axel Eden
#include <iostream>

using namespace std;
int factorial(int a);

int main(){
    int num;
    cout << "Programa que calcula el factorial de un numero\n" << endl;
    cout << "Introduzca el numero: ";
    cin >> num;
    int fact = factorial(num);
    cout << "\nEl resultado de " << num << "! es:  " << fact << endl;
    return 0;
}
int factorial(int a){
    int i,resultado=1;
    for(i=1; i<=a; i++)
    {
        resultado *= i; //resultado = resultado*i;
    }
    return resultado;
}
