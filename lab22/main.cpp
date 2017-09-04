#include <iostream>


int main()
{
    int a,j;// declaramos las variables auxiliares 'a' usada para almacenar la
    long aux;//cantidad de numeros que se usaran y 'j' y "aux" utilizado para el algoritmo de ordenamiento utilizado despues*/
    double promedio;
    std::cout<< "ingrese el numero de datos de la lista \n";
    std::cin >> a;
    long lista[a];
    for (int i=0;i<a;i++){
        std::cout<< i+1 <<") ingrese numero: ";
        std::cin >> lista[i];
        promedio += (float)lista[i];
        j=i;
        while(j>0 && lista[j]<lista[j-1]){//algoritmo de ordenamiento similar al burbuja aprovechando el for de ingreso de datos
            aux = lista[j];               //mientras el pivote sea menor que el numero en la posicion anterior se intercambia con este ultimo
            lista[j]=lista[j-1];
            lista[j-1]=aux;
            j--;
        }
    }
    promedio/=a; //el promedio almaceno la suma de todos los elementos por lo cual lo dividimos entre la cantidad de elementos y obtenemos el promedio
    std::cout << "Minimo:" << lista[0]<<"\n";//al estar la lista ordenada de menor a mayor el primer elemento sera el menor y el ultimo el mayor
    std::cout << "Maximo:" << lista[a-1]<<"\n";
    std::cout << "Promedio:" << promedio<<"\n";
    if (a%2 == 0){//la mediana tiene dos posibilidades pues si la cantidad de elementos es impar sera el elemento en la mitad de la lista ordenada
        std::cout << "Mediana:" << float(lista[a/2]+lista[(a/2)-1])/2;// caso contrario sera el promedio entre los dos elementos mas cercanos al centro
    }
    else{
        std::cout << "Mediana:" << lista[(a-1)/2];
    }
    return 0;
}
