#include<stdio.h>  // para printf()
#include<stdlib.h>  // para system()
#include<locale.h>

/* imprimindo ostrs tipos de dados com printf;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	/* imprimindo ostrs tipos de dados com printf;*/
	printf("%s está a %d milhões de milhas do sol.\n","Venos",67);
	/* programa com mais de uma instrução;*/
	printf("A letra %c ",'J');
	printf("pronuncia-se %s%c%c","Jota",'.','\n');
	system("Pause");
	return 0;
}

/**/
