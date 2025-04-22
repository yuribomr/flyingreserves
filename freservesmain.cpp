#include <iostream>
using namespace std;


void mostrarAssentosLivres(int [], int, int);
void reservarAssento(int [], int);
void mostrarAssentos(int [], int);

int main() {
	int size = 10;
	int reservas[size] = {0,0,0,0,0,0,0,0,0,0};
	bool loop = true;
	
	cout << "Bem vindo ao DevAirlines" << endl;
	
	while(loop){
		int escolha, assento;
		cout << "-Por favor escreva 1: agendar 'Primeira Classe', 2: agendar 'Economica', 3: ver todos os assentos ou escreva 0: 'Sair'-" << endl;
		cin >> escolha;
	
		switch(escolha){
			case 1:
				cout << "Assentos livres Primera Classe" << endl;
				mostrarAssentosLivres(reservas, 1,5);
				cout << "Qual assento deseja?" << endl;
				cin >> assento;
				if(assento > 0 && assento < 6){
					reservarAssento(reservas, assento);
				}
				break;
			case 2:
				cout << "Assentos livres Economica" << endl;
				mostrarAssentosLivres(reservas, 6,10);
				cout << "Qual assento deseja?" << endl;
				cin >> assento;
				if(assento > 6 && assento < 11){
					reservarAssento(reservas, assento);
				}
				break;
			case 3:
				mostrarAssentos(reservas, size);
				break;
			case 0:
				loop = false;
				break;
		}
		
	}
	
	cout << "Obrigado por acessar o programa ;)";
	
	return 0;
}

void mostrarAssentos(int array[], int size){
	for(int i = 0; i<size; i++)
		if(array[i] == 0){
			cout << i+1 << ": Assento livre" << endl;
		}else{
			cout << i+1 << ": Assento ocupado" << endl; 
		}
}

void mostrarAssentosLivres(int array[], int i, int f){
	for(int j = i - 1; j < f; j++){
		if(array[j] != 1){
			cout << j + 1 << ": " << "Assento Livre" << endl;
		}
	}
}

void reservarAssento(int array[], int i){
	if(array[i - 1] != 1){
		array[i - 1] = 1;
		cout << "Assento reservado" << endl;
	}else{
		cout << "Assento indisponivel" << endl;
	}
}

