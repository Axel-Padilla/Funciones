//2AV4 Padilla Candelario Axel Eden
#include <iostream>

using namespace std;
void Max(int a, int b);

int main(){
    int num1, num2;
    cout << "Programa que identifica de entre 2 numeros enteros que numero es mayor\n" << endl;
    cout << "Introduzca el primer numero: ";
    cin >> num1;
    cout << "Introduzca el segundo numero: ";
    cin >> num2;
    Max(num1,num2);
    return 0;
}
void Max(int a, int b){
    int c;
    if(a<b){
        cout << "\nEl numero mayor es " << b << endl;
    } else if(b<a){
        cout << "\nEl numero mayor es " << a << endl;
    } else cout << "\nAmbos numeros son iguales" << endl;
}
