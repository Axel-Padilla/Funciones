//2AV4 Padilla Candelario Axel Eden
#include <iostream>

using namespace std;
int Max(int a, int b);

int main(){
    int num1, num2, num3;
    cout << "Programa que identifica de entre 3 numeros enteros que numero es mayor\n" << endl;
    cout << "Introduzca el primer numero: ";
    cin >> num1;
    cout << "Introduzca el segundo numero: ";
    cin >> num2;
    cout << "Introduzca el tercer numero: ";
    cin >> num3;
    int maximo = Max(Max(num1,num2),num3); //ahorra una variable
    cout << "\nEl numero mayor es " << maximo << endl;
    return 0;
}
int Max(int a, int b){
    int c;
    if(a<b){c=b;
    } else{c=a;}
    return c;
}
