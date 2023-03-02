#include <iostream>

using namespace std;

main(){
		setlocale(LC_ALL, "Portuguese");
	int dia;
	
	cout << "informe o dia da semana:";
	cin >> dia;
	
	switch(dia){
		case 1: cout << "\ndomingo";
		break;
		case 2: cout << "\nSegunda feira";
		break;
		case 3: cout << "\nTerça-feira";
		break;
		case 4: cout << "\nQuarta-feira";
		break;
		case 5: cout << "\nQuinta-feira";
		break;
		case 6: cout << "\nSexta-feira";
		break;
		case 7: cout << "\nSabado";
		break;
		default: cout << "\nDia inexistente"; 	
	}
}

