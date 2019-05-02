#include "pet_fera.h"

int main(){
	int op;
	int id, idade, nivel;
	long int cpf;
	string nome;
	char tipo, fator;
	string especialidade, crmv;

	do{
		cout << "***MENU INICIAL***" << endl << endl;
		cout << "0- Sair" << endl;
		cout << "1- Cadastrar novo animal" << endl;
		cout << "2- Remover um animal" << endl;
		cout << "3- Alterar dados de um animal" << endl;
		cout << "4- Consultar dados através da classe" << endl;
		cout << "5- Consultar dados de um animal sob responsabilidade de veterinario ou tratador" << endl;
		cout << "6- Todas as atividades de determinado veterinario ou tratador" << endl;
		cin >> op;

		switch (op){
			case 1: //TESTE
				cout << "Digite o id: " << endl;
				cin >> id;
				cout << "Digite o nome: " << endl;
				cin >> nome;
				cout << "Digite o cpf: " << endl;
				cin >> cpf;
				cout << "Digite a idade: " << endl;
				cin >> idade;
				cout << "Insira o tipo sanguineo: " << endl;
				cin >> tipo;
				cout << "Insira o fator RH: " << endl;
				cin >> fator;
				cout << "Digite a especialidade: " << endl;
				cin >> especialidade;
				cout << "Digite o Nivel de Segurança: "<< endl;
				cin >> nivel;
				TRATADOR novo(id, nome, cpf, idade, tipo, fator, especialidade, nivel);
				
				
				//VETERINARIO novo(id, nome, cpf, idade, tipo, fator, especialidade, crmv);

				cout << novo;

		}


	}while(op != 0);

	return 0;
}