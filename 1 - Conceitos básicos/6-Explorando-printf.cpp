#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Explorando o printf;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int reajuste = 10;
	printf("O reajuste foi de %d%%.\n",reajuste);
	/*Tabela de compos de impress�o*/
	printf("Os alunos s�o %2d.\n",350);
	printf("Os alunos s�o %4d.\n",350);
	printf("Os alunos s�o %5d.\n",350);
	system("Pause");
	return 0;
}

/**/
