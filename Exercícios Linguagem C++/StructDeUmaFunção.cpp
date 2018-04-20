#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale>

using namespace std;

struct endereco 
{
	int codigo;
	char nome[45];
	char bairro[45];
	char uf[3];
	int telefone;
	char data[45];
	char cnpj[45];
};

struct endereco end;

void cadastrar_endereco()
{
	setlocale(LC_ALL, "portuguese");
	
	cout << "Digite o código da rua onde mora " << endl;
	fflush(stdin);
	cin >> end.codigo;
	cout << "Digite seu nome completo " << endl;
	fflush(stdin);
	cin.getline(end.nome, 45);
	cout << "Digite o nome do bairro onde vive " << endl;
	fflush(stdin);
	cin.getline(end.bairro, 45);
	cout << "Digite o UF do estado onde vive " << endl;
	fflush(stdin);
	cin.getline(end.uf, 3);
	cout << "Digite seu número de telefone " << endl;
	fflush(stdin);
	cin >> end.telefone;
	cout << "Digite sua data de nascimento " << endl;
	fflush(stdin);
	cin.getline(end.data, 45);
	cout << "Digite o CNPJ da empresa onde trabalha " << endl;
	fflush(stdin);
	cin.getline(end.cnpj, 45);
	
	system("cls");
}

void mostrar_endereco()
{
	setlocale(LC_ALL, "portuguese");
	
	cout << "Código da onde vive " << end.codigo << endl;
	cout << "Seu nome completo " << end.nome << endl;
	cout << "Nome do bairro onde vive " << end.bairro << endl;
	cout << "UF do estado onde vive " << end.uf << endl;
	cout << "Seu telefone para contato " << end.telefone << endl;
	cout << "Sua data de nascimento " << end.data << endl;
	cout << "O CNPJ da empresa onde trabalha " << end.cnpj << endl;
}

main()
{
	cadastrar_endereco();
	mostrar_endereco();
}
