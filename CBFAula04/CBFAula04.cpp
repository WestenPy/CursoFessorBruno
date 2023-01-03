

#include <iostream>

using namespace std;

int main()
{
	int vida = 12;
	char letra = 'B';
	double decimal = 1.3;
	float decimal2 = 2.45;
	bool vivo = true;
	string nome = "perninha";

	cout << "Digite o numero de vidas: ";
	cin >> vida;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Dinheiro: ";
	cin >> decimal;
	cout << "Digite o seu nome: ";
	cin >> nome;



	cout << "\nVida: " << vida << "\nLetra: ";
	cout << letra << "\nDinheiro: ";
	cout << decimal << "\nVivo: ";
	cout << vivo << "\nNome: ";
	cout << nome << "\n";
}


