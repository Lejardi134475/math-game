//Este programa genera 2 numeros al azar, luego los evalua
//Autores: Felix Pagan y Gustavo lejardi

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int num1, num2, prod1, prod2

		
	do {
		num1 = rand() % 12 + 1; //genera un valor del 1 al 12
		num2 = rand() % 12 + 1;

		cout << "? Cual es el producto de la siguiente escyuasion?" << endl;
		cout << num1 << " X " << num2 << endl;
		cin >> prod1 //contestacion del usuario
			prod2 =
	}while (prod1 == prod2)

}
	return 0;