#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Iniciali�a�o de Variaveis;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int evento = 5; // define evento inicializado com 5
	char corrida = 'C'; // define corrida inicializada com C
	float tempo = 27.25; //define tempo inicializado com 27.25
	printf("O tempo vitorioso na eliminat�ria %c\n",corrida);
	printf("Da competi��o %d foi %f.\n",evento,tempo);
	system("Pause");
	return 0;
}

/*inicializar uma variavel significa atribuir um valor a ala na mesma instru��o de sua declara��o*/
