#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float lapis=4.875, borrachas=234.542, canetas=42.036, cadernos=8.0, fitas=13.05;
	printf("\nLapis  %12.2f",lapis);
	printf("\nBorrachas  %12.2f",borrachas);
	printf("\nCanetas  %12.2f",canetas);
	printf("\nCadernos  %12.2f",cadernos);
	printf("\nFitas  %12.2f\n",fitas);
	system("Pause");
	return 0;
}
