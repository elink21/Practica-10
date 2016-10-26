/*
Programa para generar la serie fibonnacci a partir de la cantidad de elementos
requeridos
Elias Edgardo Segundo Antonio ICO 21
*/

#include <iostream> // biblioteca para manejo de streams
#include <stdlib.h> // funcion rand() y srand()
#include<time.h> // hora del sistema time(NULL)
using namespace std;
int main()
{
	char otra='Y';
	int arraySize;
	while(otra=='Y')
	{
		cout<<"Ingrese la cantidad de numeros a generar: ";
		cin>>arraySize;
		if(arraySize>0)
		{
			int myArray[arraySize];
			myArray[0]=0;
			myArray[1]=1;
			for(int i=2;i<arraySize;i++)
			{
				myArray[i]=myArray[i-1]+myArray[i-2];
			}

			cout<<"Los numeros de la serie son: \n\n";
			for(int i=0;i<arraySize;i++)cout<<myArray[i]<<"-";
		} else cout<<"\nError, deben ser mas de 0\n";

		cout<<"\n\nDesea realizar otra prueba? (Y/N): ";
		cin>>otra;

	}
	return 0;

}
