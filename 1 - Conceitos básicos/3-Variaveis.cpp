#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1; // e obrigatorio declarar variveis em c.
	int num2; // variaveis de ser declaradas no inicio do bloco.
	
	num1 = 44;
	num2 = num1 + 20;
	printf("O primeiro número é %d\n",num1);
	printf("O segundo número é \"num1 + 20 \" = %d\n",num2);
	system("Pause");
	return 0;
}

/**/
