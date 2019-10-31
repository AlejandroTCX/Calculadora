#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	char salir = 'n';

	float numero1, numero2, resultado;

	int operacion;

	while (salir == 'n')
	{
		cout<<"Menu de operaciones\n";
		cout<<"1.Suma\n";
		cout<<"2.Resta\n";
		cout<<"3.Multiplicacion\n";
		cout<<"4.Division\n";
		cout<<"5.Raiz\n";
		cout<<"6.Potencia\n";

		cin>>operacion;

		cout <<"Ingresa el primer numero\n";
		cin >>numero1;
		cout <<"Ingresa el segundo numero\n";
		cin >>numero2;

		switch (operacion)
		{
		case 1:

			cout << "El resultado de \n" << numero1 << " + " << numero2 << " es: " << numero1 + numero2;
			break;

		case 2:

			cout << "El resultado de \n" << numero1 << " - " << numero2 << " es: " << numero1 - numero2;
			break;

		case 3:

			cout << "El resultado de \n" << numero1 << " * " << numero2 << " es: " << numero1 * numero2;
			break;

		case 4:

			cout << "El resultado de \n" << numero1 << " / " << numero2 << " es: " << numero1 / numero2;
			break;

		case 5:

			cout << "El resultado de \n" << numero1 << " raiz " << numero2 << " es: " << pow(numero1, 1 / numero2);
			break;

		case 6:
			cout << "El resultado de \n" << numero1 << " ^ " << numero2 << " es: " << pow(numero1, numero2);
			break;

		default:
			break;

		}
		cout << "\n¿Quieres salir del programa? (y/n)";
		cin >> salir;
		system("cls");

	}







}
