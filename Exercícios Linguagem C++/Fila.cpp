#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale>

#define tamanho 5

using namespace std;

struct fila
{
	int dados[tamanho];
	int ini;
	int fim;
};

struct fila fila;

void inserir_dados()
{
	if(fila.fim == tamanho)
	{
		cout << "A fila está cheia " << endl;
	} else {
		cout << "Digite o valor que deseja colocar na pilha " << endl;
		cin >> fila.dados[fila.fim];
		fila.fim++;
	}
}

void remover_dados()
{
	if(fila.fim == fila.ini)
	{
		cout << "A fila está vazia" << endl;
	} else {
		for(int i = 0; i < fila.fim; i++)
		{
			fila.dados[i] = fila.dados[i + 1];
		}
		cout << "O dado foi removido" << endl;
		fila.fim--;
	}
}

void mostrar_dados()
{
	if(fila.fim == fila.ini)
	{
		cout << "A fila está vazia" << endl;
	} else {
		for (int i = 0; i < fila.fim; i++)
		{
			cout << "Dados que foram armazenado na Fila " << fila.dados[i] << endl;
		}
	}
}

main()
{
	inserir_dados();
	remover_dados();
	inserir_dados();
	mostrar_dados();
}
