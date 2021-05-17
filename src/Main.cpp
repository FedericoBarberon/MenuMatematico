#include<iostream>
#include<windows.h>

using namespace std;

void inicio();
void funcion(int);

int main(){
	system("color F0");
	
	inicio();
	
	return 0;
}

void inicio(){
	fflush(stdin);
	system("cls");
	int opc;
	
	cout<<"Menu Matematico\n\n";
	
	cout<<"1. Sumar o Restar\n";
	cout<<"2. Multiplicar o Dividir\n";
	cout<<"3. Potencia o Raiz\n";
	cout<<"4. Hipotenusa\n";
	cout<<"5. Razones trigonometricas\n";
	cout<<"6. Funcion Cuadratica\n";
	cout<<"7. Factorial\n";
	cout<<"8. Distancia entre 2 puntos\n";
	cout<<"9. Salir\n";
	
	cout<<"\nSeleccione una opcion: ";
	cin>>opc;
	
	funcion(opc);
}