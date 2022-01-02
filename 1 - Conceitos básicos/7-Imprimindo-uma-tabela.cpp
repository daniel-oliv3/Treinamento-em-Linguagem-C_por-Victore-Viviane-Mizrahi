#include<stdio.h>
#include<stdlib.h>
//#include<locale.h>

/* imprimindo uma tabela;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int lapis=45, borrachas=2345, canetas=420, cadernos=8, fitas=13050;
	printf("\nLapis  %12d",lapis);
	printf("\nBorrachas  %12d",borrachas);
	printf("\nCanetas  %12d",canetas);
	printf("\nCadernos  %12d",cadernos);
	printf("\nFitas  %12d",fitas);
	system("Pause");
	return 0;
}


