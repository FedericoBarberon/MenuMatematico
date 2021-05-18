#include<iostream>
#include<windows.h>

using namespace std;

void inicio();
void funcion(int);
void consola_tamanio();

HANDLE wHnd;

int main(){
	system("color F0");
	
	consola_tamanio();
	inicio();
	
	return 0;
}

void inicio(){
	fflush(stdin);
	system("cls");
	int opc;
	
	cout<<"\t\t\tMenu Matematico\n\n";
	
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

void consola_tamanio(){
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, 60,15}; //tercer valor = ancho - cuarto valor = alto
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
}