#include <stdio.h>
#include <math.h>
 #include <iostream>
 using namespace std;
 
int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.17 calcula la distancia entredos puntos en un plano" << "\n";
	
	float x1, x2, y1, y2;
	float distancia;
	
	cout<<"Primer punto"<<endl;
	printf("X1: "); cin>>x1;
	printf("Y1: "); cin>>y1;
	
	printf("\nSegundo punto;\n");
	printf("X2: "); (cin>>x2);
	printf("Y2: "); (cin>>y2);
	
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	cout<<"Distancia: "<< distancia;
	
	return 0;
}
