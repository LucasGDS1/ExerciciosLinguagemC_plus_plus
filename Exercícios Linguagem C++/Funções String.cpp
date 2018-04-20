#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>


//LEMBRAR DE USAR O USING NAMESPACE STD;

struct dados 
{
	char palavra_1[50];
	char palavra_2[50];
};

struct dados le;

void adicionar_dados() {
	
	std::cout << "Digite a primeira palavra \n" << std::endl;
	fflush(stdin);
	std::cin.getline(le.palavra_1, 50);
	std::cout << "\n";
	
	std::cout << "Digite a segunda palavra \n" << std::endl;
	fflush(stdin);
	std::cin.getline(le.palavra_2, 50);
	std::cout << "\n";
	
	system("cls");
}

 main(){
	
	int c1 = 0;
	int c2 = 0; //Contador das consoantes;
	adicionar_dados(); //chama a função de adicionar dados à estrututra;
	setlocale(LC_ALL,"portuguese"); //deixa tudo em português;
	
	std::cout <<"Palavra 1 minuscula \n\n " << strlwr(le.palavra_1) << "\n\n" <<"Palavra 2 minuscula \n\n " << strlwr(le.palavra_2) << "\n\n";
	
	//Conta quantas consoantes tem na primeira palavra;
	for(int i = 0;  i < strlen(le.palavra_1); i++){
		
		if(le.palavra_1 != '\0' && le.palavra_1[i] != 'a' && le.palavra_1[i] != 'e' && le.palavra_1[i] != 'i' && le.palavra_1[i] != 'o' && le.palavra_1[i] != 'u'){
			c1++;
		}
	}
	
	//Conta quantas consoantes tem na segunda palavra;
	for(int i = 0;  i < strlen(le.palavra_2); i++){
		
		if(le.palavra_2 != '\0' && le.palavra_2[i] != 'a' && le.palavra_2[i] != 'e' && le.palavra_2[i] != 'i' && le.palavra_2[i] != 'o' && le.palavra_2[i] != 'u'){
			c2++;
		}
	}
	
	//Printa todos os resultados;
	std::cout <<"O tamanho Palavra 1 \n\n " << strlen(le.palavra_1) << "\n\n" << "O tamanho Palavra 2 \n\n " << strlen(le.palavra_2) << "\n\n";
	std::cout <<"Concatenação das palavras \n\n " <<strcat(le.palavra_1, le.palavra_2) << "\n\n";
	std::cout <<"Cópia da palavra 1 para dentro palavra 2 \n\n " << strcpy(le.palavra_1, le.palavra_2) << "\n\n";
	std::cout <<"A quantidade de consoantes da palavra 1 é: \n\n " << c1 << "\n\n";
	std::cout <<"A quantidade de consoantes da palavra 2 é: \n\n " << c2 << std::endl;	
}
