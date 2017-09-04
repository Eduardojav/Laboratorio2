#include <iostream>

int main()
{
    long long resultado=1;
    int a=1;//variable que aumenta en cada iteracion siendo el numero para el cual se estaria calculando el factorial
    while (resultado>0){
        resultado*= a;//factorial de un numero menor siendo multiplicado por el numero actual
        std::cout << a << "! = "<< resultado << "\n";
        a++;
    }
    return 0;
}
