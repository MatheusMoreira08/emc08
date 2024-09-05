#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

// função para posicionar o cursor em um determinado ponto da tela
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = (short)x;
	coord.Y = (short)y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
// funcao construção da tela padrão
void tela()
{
	int lin;
	system("cls");

	for (lin = 1; lin < 25; lin++)

	{
		gotoxy(01, lin);
		printf("|");
		gotoxy(79, lin);
		printf("|");
	}

	gotoxy(01, 01);
	printf("+-----------------------------------------------------------------------------+");
	gotoxy(01, 04);
	printf("+-----------------------------------------------------------------------------+");
	gotoxy(01, 22);
	printf("+-----------------------------------------------------------------------------+");
	gotoxy(01, 24);
	printf("+-----------------------------------------------------------------------------+");

	gotoxy(03, 02);
	printf("UNICV");
	gotoxy(60, 02);
	printf("Estrutura de Dados | ");
	gotoxy(03, 03);
	printf("SISTEMA DE CADASTRO DE CLIENTES");
	gotoxy(66, 03);
	printf("Prof. Rodney");
	gotoxy(02, 23);
	printf("MSG");
}

// Programa principal
int main()
{
	int idade;
	float salario;
	char sexo;
	int opcao;
	system("color 0A");
	do
	{
		tela();

		// Mostra os dados a serem lidos na tela
		gotoxy(28, 10);
		printf("Digite a Idade...: ");
		gotoxy(28, 12);
		printf("Digite o Salario.: ");
		gotoxy(28, 14);
		printf("Digite o Sexo....: ");

		// le e valid aa digitacao da idade
		do
		{
			gotoxy(47, 10);
			printf("    ");
			gotoxy(47, 10);
			scanf("%d", &idade);
			if (idade < 18)
			{
				gotoxy(07, 23);
				printf("Idade Invalida. Tente Novamente. ");
				getch();
				gotoxy(07, 23);
				printf("                                    ");
			}

		} while (idade < 18);

		// le e valida a digitação do salario

		gotoxy(47, 12);
		printf("        ");
		gotoxy(47, 12);
		scanf("%f", &salario);
		if (salario < 2000)
		{
			gotoxy(07, 23);
			printf("Salario Invalido. Tente Novamente. ");
			getch();
			gotoxy(07, 23);
			printf("                                    ");
		}

	} while (salario < 2000);
	{
		// le e valida a digitação do sexo
		do
		{
			gotoxy(47, 14);
			printf("        ");
			gotoxy(47, 14);
			scanf(" %c", &sexo);
			if (sexo != 'M' && sexo != 'F')
			{
				gotoxy(07, 23);
				printf("Sexo Invalido. Tente Novamente.");
				getch();
				gotoxy(07, 23);
				printf("                                 ");
			}

		} while (sexo != 'M' && sexo != 'F');

		// Pergunta se o usuario deseja cadastrar outro ou não
		gotoxy(07, 23);
		printf("Deseja cadastrar outro?1=Sim; 2=Nao.:");
		scanf("%d", &opcao);
	}
	while (opcao == 1)

		return 0;
}
