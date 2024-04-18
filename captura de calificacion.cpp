#include "iostream"
#include "string"
#include "math.h"

using namespace std;

int main()
{
    //Mensaje de bienvenida
    cout<< "hola! Este programa 1.8 imprime la matricula y el promedio d 5 notas de un alimno" << "\n";

    float matricula, a, b, c, d, e;
    
	cout<<"Introduca la primera calificacion :";
	cin>>a;
	
	cout<<"Introduca la segunda calificacion :";
	cin>>b;
	
	cout<<"Introduca la tercera calificacion :";
	cin>>c;
	
	cout<<"Introduca la cuarta calificacion :";
	cin>>d;
	
	cout<<"Introduca la quinta calificacion :";
	cin>>e;
	
	cout<<"La matricula del alumno es  "<<matricula<<endl;
	
	cout<<"El promedio es:"<<((a+b+c+d+e)/5)<<endl;
	
	cin.get();cin.get();
	
	return 0;
	}
