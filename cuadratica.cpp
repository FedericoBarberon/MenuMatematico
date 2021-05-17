#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void tipo_cuadratica();
void polinomica();
void factorizada();
void canonica();
void func_cuadratica();

void inicio();

void tipo_cuadratica(){
	fflush(stdin);
	int opc;
	
	cout<<"1. Polinomica"<<endl;
	cout<<"2. Factorizada"<<endl;
	cout<<"3. Canonica"<<endl;
	cout<<"4. Volver"<<endl<<endl;
	
	cout<<"Opcion: ";
	cin>>opc;
	
	system("cls");
	switch(opc){
		case 1: polinomica(); break;
		case 2: factorizada(); break;
		case 3: canonica(); break;
		case 4: inicio(); break;
		default: func_cuadratica();
	}
	
}

void polinomica(){
	fflush(stdin);
	
	float a,b,c,X1,X2,Xv,Yv,oo;
	
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	cout<<"Ingrese el valor de c: ";
	cin>>c;
	
	X1 = (- b + (sqrt((pow(b,2)) - 4 * a * c))) / (2 * a);
	X2 = (- b - (sqrt((pow(b,2)) - 4 * a * c))) / (2 * a);
	
	Xv = - b / (2 * a);
	Yv = a * (pow(Xv,2)) + b * Xv + c;
	
	oo = c;
	
	cout<<"\n\nResultados\n\n";
	
	if(X1 == X2){
		cout<<"Raiz: "<<X1<<endl;
	}
	else{
		cout<<"Raiz 1: "<<X1<<endl;
		cout<<"Raiz 2: "<<X2<<endl;	
	}
	
	cout<<"Vertice de X: "<<Xv<<endl;
	cout<<"vertice de Y: "<<Yv<<endl;
	
	cout<<"Ordenada al origen: "<<oo<<endl;
	
	cout<<"\n\nPresione una tecla para volver";
	getch();
	func_cuadratica();
}

void factorizada(){
	fflush(stdin);
	
	float a,b,X1,X2,Xv,Yv,oo;
	
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese la una raiz: ";
	cin>>X1;
	cout<<"Ingrese otra raiz: ";
	cin>>X2;
	
	b = (a * (-X1)) + (a * (-X2));
	
	Xv = - b / (2 * a);
	Yv = (a * (Xv - X1)) * (Xv - X2);
	
	oo = a * (-X1) * (-X2);
	
	cout<<"\n\nResultados\n\n";
	
	cout<<"Vertice de X: "<<Xv<<endl;
	cout<<"Vertice de Y: "<<Yv<<endl;
	
	cout<<"Ordenada al origen: "<<oo<<endl;
	
	cout<<"\n\nPresione una tecla para volver";
	getch();
	func_cuadratica();
}

void canonica(){
	fflush(stdin);
	
	float a,b,c,Xv,Yv,X1,X2,oo;
	
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el vertice de X: ";
	cin>>Xv;
	cout<<"Ingrese el vertice de Y: ";
	cin>>Yv;
	
	b = -(Xv * 2 * a);
	c = a * (pow(-Xv,2)) + Yv;
	oo = c;
	
	X1 = (- b + (sqrt((pow(b,2)) - 4 * a * c))) / (2 * a);
	X2 = (- b - (sqrt((pow(b,2)) - 4 * a * c))) / (2 * a);
	
	cout<<"\n\nResultados\n\n";
	
	if(X1 == X2){
		cout<<"Raiz: "<<X1<<endl;
	}
	else{
		cout<<"Raiz 1: "<<X1<<endl;
		cout<<"Raiz 2: "<<X2<<endl;	
	} 
	
	cout<<"Ordenada al orgien: "<<oo<<endl;
	
	cout<<"\n\nPresione una tecla para volver";
	getch();
	func_cuadratica();
}
