//declaramos las libreria necesarias
#include<iostream>
#include<conio.h>

//incluimos el espacio de nombre
using namespace std;

//creamos nuestra funcion principal main
int main (){
/*vamos a declarar una matriz de tipo entero pero como ejemplo vamos a asignarle tamaño maximo de [100]	[100] es decir 100 filas y 100 columnas*/
int pepe[2][2];
/*declarar 2 variables de tipo entero para poder guardar los valores de filas y de columnas*/
int  filas=2,columnas=2, sum;
for(int i=0; i<filas; i++)
	for(int j=0; j<columnas; j++){
	/*le pedimos al usuario que ingrese cada uno de los valores de la matriz*/
	cout<<"los numeros de la tabla son: ["<<i<<"],["<<j<<"]: ";
	cin>>pepe[i][j];	
}	
/*hacemos un recorrido con el ciclo for para poder traer los valores de la matriz y poder de esta forma mostrarlos en pantalla*/	
for(int i=0; i<filas; i++)

	for(int j=0; j<columnas; j++){
	cout<<pepe[i][j];
	
	}
	cout<<"\n";
	cout<<pepe[0][0 ], cout<<pepe[ 0][1];
	cout<<"\n";
	cout<<pepe[1][0 ], cout<<pepe[ 1][1];
	cout<<"\n";
	
	cout<<pepe[0][0] + pepe[0][1] + pepe[1][0] + pepe[1][1];
	cin>>sum;
	
	if((pepe[0][0] + pepe[0][1] + pepe[1][0] + pepe[1][1])%2 == 0)
	{cout<<"EL NUMERO ES PAR";
	}	
	 else{
	 
	cout<<"el numero es impar";
	}
	/*agregamos un salto de linea*/
	cout<<"\n";
	return 0;
}
