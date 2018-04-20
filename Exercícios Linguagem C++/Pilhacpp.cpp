#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>
#include <string.h>

#define tamanho 5

using namespace std;

struct pilha
{
	int dados[tamanho];
	int ini;
	int fim;
};

struct pilha pila;

void inserir_dados()
{
	if(pila.fim == tamanho){
		cout << "Pilha está cheia" << endl;
	} else {
		cout << "Digite o valor que deseja empilhar " << endl;
		cin >> pila.dados[pila.fim];
		pila.fim++;
	}
}

void mostrar_dados()
{
	if(pila.fim == pila.ini)
	{
		cout << "A pilha está vazia" << endl;
	} else {
		for(int i = 0; i < pila.fim; i++){
			cout << "Dados que foram empilhados " << pila.dados[i] << endl;
		}
	}
}

main()
{
	inserir_dados();
	mostrar_dados();
}
