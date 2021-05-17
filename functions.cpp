#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>

using namespace std;


void funcion(int);
void suma_resta();
void mult_div();
void potencia_raiz();
void hipotenusa();
void Razones_Trigonometricas();
void func_cuadratica();
void factorial();
void dist_puntos();

void inicio();
void tipo_cuadratica();

int opc;

void funcion(int opc){
	switch(opc){
		case 1: suma_resta(); break;
		case 2: mult_div(); break;
		case 3: potencia_raiz(); break;
		case 4: hipotenusa(); break;
		case 5: Razones_Trigonometricas(); break;
		case 6: func_cuadratica(); break;
		case 7: factorial(); break;
		case 8: dist_puntos(); break;
		case 9: break;
		default:
			system("cls");
			cout<<"Opcion no valida";
			Sleep(1500);
			inicio();
			break;
	}
}

void suma_resta(){
	fflush(stdin);
	system("cls");
	cout.precision(4);
	
	int n;
	double num[100];
	double res=0;

	cout<<"Seleccione una opcion\n\n";
	
	cout<<"1. Suma\n";
	cout<<"2. Resta\n";
	cout<<"3. Vovler\n";
	
	cout<<"\nOpcion: ";
	cin>>opc;
	
	system("cls");
	
	switch(opc){
		case 1:
			cout<<"Ingrese la cantidad de elementos a sumar: ";
			cin>>n;
			
			cout<<endl;
			
			for(int i=0;i<n;i++){
				cout<<"Numero "<<i+1<<": ";
				cin>>num[i];
			}
			
			for(int i=0;i<n;i++){
				res+=num[i];
			}
			
			cout<<"\n\nEl resultado es: "<<res<<endl;
			cout<<"\nPresione una tecla para ir al inicio";
			
			getch();
			inicio();
			
			break;
			
		case 2:
			cout<<"Ingrese la cantidad de elementos a restar: ";
			cin>>n;

			cout<<endl;

			for(int i=0;i<n;i++){
				cout<<"Numero "<<i+1<<": ";
				cin>>num[i];
			}
			res=num[0];

			for(int i=0;i<n;i++){
				res-=num[i+1];
			}

			cout<<"\n\nEl resultado es: "<<res<<endl;
			cout<<"\nPresione una tecla para ir al inicio";

			getch();
			inicio();
			break;
			
		 case 3:
		 	system("cls");
		 	inicio();
		 	break;
			
		 default:
			system("cls");
			cout<<"Opcion no valida";
			Sleep(1500);
			suma_resta();
			break;
	}
}


void mult_div(){
	fflush(stdin);
	system("cls");
	cout.precision(4);
	
	int n;
	double num[100];
	double res=1;

	cout<<"Seleccione una opcion\n\n";

	cout<<"1. Multiplicar\n";
	cout<<"2. Dividir\n";
	cout<<"3. Volver\n";

	cout<<"\nOpcion: ";
	cin>>opc;

	system("cls");

	switch(opc){
		case 1:
			cout<<"Ingrese la cantidad de elementos a multiplicar: ";
			cin>>n;

			cout<<endl;

			for(int i=0;i<n;i++){
				cout<<"Numero "<<i+1<<": ";
				cin>>num[i];
			}

			for(int i=0;i<n;i++){
				res*=num[i];
			}

			cout<<"\n\nEl resultado es: "<<res<<endl;
			cout<<"\nPresione una tecla para ir al inicio";

			getch();
			inicio();
			break;

		case 2:
			cout<<"Ingrese la cantidad de elementos a dividir: ";
			cin>>n;

			cout<<endl;

			for(int i=0;i<n;i++){
				cout<<"Numero "<<i+1<<": ";
				cin>>num[i];
			}
			res=num[0];

			for(int i=1;i<n;i++){
				res/=num[i];
			}

			cout<<"\n\nEl resultado es: "<<res<<endl;
			cout<<"\nPresione una tecla para ir al inicio";

			getch();
			inicio();
			
			break;
			
		case 3:
		 	system("cls");
		 	inicio();
		 	break;
			
		default:
			system("cls");
			cout<<"Opcion no valida";
			Sleep(1500);
			mult_div();
			break;
	}
}


void potencia_raiz(){
	fflush(stdin);
	system("cls");
	cout.precision(4);
	
	double base,expo,radicando,indice,res=0;
	
	cout<<"Seleccione una opcion\n\n";

	cout<<"1. Potencia\n";
	cout<<"2. Raiz\n";
	cout<<"3. Volver\n";

	cout<<"\nOpcion: ";
	cin>>opc;

	system("cls");
	
	switch(opc){
		case 1:
			cout<<"Ingrese la base: ";
			cin>>base;
			cout<<"Ingrese el exponente: ";
			cin>>expo;
			
			res=pow(base,expo);
			
   			cout<<"\n\nEl resultado es: "<<res<<endl;
			cout<<"\nPresione una tecla para ir al inicio";

			getch();
			inicio();

			break;
		case 2:
			cout<<"Ingrese el radicando: ";
			cin>>radicando;
			cout<<"Ingrese el indice: ";
			cin>>indice;
			
			res=pow(radicando,(1/indice));
			
			cout<<"\n\nEl resultado es: "<<res<<endl;
			cout<<"\nPresione una tecla para ir al inicio";

			getch();
			inicio();

			break;
			
		case 3:
		 	system("cls");
		 	inicio();
		 	break;
		 	
		default:
			system("cls");
			cout<<"Opcion no valida";
			Sleep(1500);
			potencia_raiz();
			break;
	}
}


void hipotenusa(){
	fflush(stdin);
	system("cls");
	cout.precision(4);
	
	double ca,cb,hip;
	
	cout<<"Ingrese el cateto a: ";
	cin>>ca;
	cout<<"Ingrese el cateto b: ";
	cin>>cb;
	
	hip=sqrt((pow(ca,2) + pow(cb,2)));
	
	cout<<"\nLa Hipotenusa es: "<<hip<<endl;
	
	cout<<"\nPresione una tecla para ir al inicio";

	getch();
	inicio();
}

void Razones_Trigonometricas(){
	fflush(stdin);
	system("cls");
	cout.precision(4);
	
	double ca,co,h,ang,seno=0,coseno=0,tangente=0;
	const float PI=3.1416;
	
	cout<<"Que datos tiene?\n\n";

	cout<<"1. Angulo\n";
	cout<<"2. Lados\n";
	cout<<"3. Volver\n";

	cout<<"\nOpcion: ";
	cin>>opc;

	system("cls");
	
	switch(opc){
		case 1:
			cout<<"Ingrese el angulo: ";
			cin>>ang;
			
			seno=sin((ang*PI) / 180);
			coseno= cos((ang*PI) / 180);
			tangente= tan((ang*PI) / 180);
			
			cout<<"\n\nSen: "<<seno<<endl;
			cout<<"Cos: "<<coseno<<endl;
			cout<<"Tan: "<<tangente<<endl;
			
			cout<<"\nPresione una tecla para ir al inicio";

			getch();
			inicio();
			break;
			
		case 2:
			cout<<"Ingrese el cateto adyacente: ";
			cin>>ca;
			cout<<"Ingrese el cateto opuesto: ";
			cin>>co;
			cout<<"Ingrese la hipotenusa: ";
			cin>>h;
			
			seno=co/h;
			coseno=ca/h;
			tangente=co/ca;
			
			cout<<"\n\nSen: "<<seno<<endl;
			cout<<"Cos: "<<coseno<<endl;
			cout<<"Tan: "<<tangente<<endl;
			
			cout<<"\nPresione una tecla para ir al inicio";

			getch();
			inicio();
			break;
			
		case 3:
		 	system("cls");
		 	inicio();
		 	break;

		default:
			system("cls");
			cout<<"Opcion no valida";
			Sleep(1500);
			Razones_Trigonometricas();
			break;
	}

}



void func_cuadratica(){
	fflush(stdin);
	system("cls");
	cout.precision(4);
	
	tipo_cuadratica();
}


void factorial(){
	fflush(stdin);
	system("cls");
	cout.precision(4);

	int fact,res=1;

	cout<<"Ingrese un numero: ";
	cin>>fact;
	
	for(int i=1;i<=fact;i++){
		res*=i;
	}
	
	
	cout<<"\n\nEl factorial es: "<<res<<endl;
	
	cout<<"\n\nPresione una tecla para ir al inicio";

	getch();
	inicio();
	
}

void dist_puntos(){
	fflush(stdin);
	system("cls");
	cout.precision(4);
	
	float x1,y1,x2,y2,d;
	
	cout<<"Coordenada 1\n\n";
	
	cout<<"X: ";
	cin>>x1;
	cout<<"Y: ";
	cin>>y1;
	
	cout<<"\nCoordenada 2\n\n";
	
	cout<<"X: ";
	cin>>x2;
	cout<<"Y: ";
	cin>>y2;
	
	d = sqrt(( pow ( (x2 - x1) , 2 )  +  ( pow ( (y2 - y1) , 2 ))));
	
	cout<<"\n\nLa distancia entre ("<<x1<<";"<<y1<<") y ("<<x2<<";"<<y2<<") es: "<<d<<endl;
	
	cout<<"\n\nPresione una tecla para ir al inicio";

	getch();
	inicio();
}