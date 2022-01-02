#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* unsigned ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	unsigned j=4294967000UL; // UL indica que e constant
	int i=j;
	printf("Variáveis unigned = %u\n",j);
	printf("Variáveis int = %d\n",i);
	system("Pause");
	return 0;
}

/**/
