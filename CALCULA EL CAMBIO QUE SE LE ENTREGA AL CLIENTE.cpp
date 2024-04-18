#include<stdio.h>
#include<conio.h>
#include <iostream>
using namespace std;

int main ()
{
	//mensaje de bienvenida
	cout << "Hola, este programa 1.11 calcula el cambo que se le entrega a un cliente " << "\n";
	
	float articulo;
	float cantidad_de_dinero, cambios;
	
	    printf("ingrese el costo del articulo vendido: ");
	    scanf("%f",&articulo);
	    printf("ingrese la cantidad de dinero entregado por el cliente: ");
	    scanf("%f",&cantidad_de_dinero);
    	cambios=(cantidad_de_dinero-articulo);
	    printf("el cambio que se debe de entregar al cliente es de %f ",cambios );
	
	printf("\nPresione una tecla para continuar...");
	return 0;	

}
