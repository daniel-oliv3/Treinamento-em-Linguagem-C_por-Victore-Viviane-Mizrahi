#include<stdio.h>  // para printf()
#include<stdlib.h>  // para system()
#include<locale.h>

/* imprimindo ostrs tipos de dados com printf;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	/* imprimindo ostrs tipos de dados com printf;*/
	printf("%s est� a %d milh�es de milhas do sol.\n","Venos",67);
	/* programa com mais de uma instru��o;*/
	printf("A letra %c ",'J');
	printf("pronuncia-se %s%c%c","Jota",'.','\n');
	system("Pause");
	return 0;
}

/**/
