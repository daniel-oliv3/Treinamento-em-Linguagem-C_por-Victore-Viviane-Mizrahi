#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Fun��o que converte graus fahrenheit para graus celsius;*/

float celsius(float); // prototipo ou declara��o da fun��o.

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float c, f;
	printf("  Digite a temperatura em graus Fahrenheit: ");
	scanf("%f",&f);
	c = celsius(f); // chamada a fun��o.
	printf("  Celsius = %.2f\n",c);
	system("Pause");
	return 0;
}

/*celsius()
defini��o da fun��o.
*/

float celsius(float fah){
	float c;
	c = (fah-32.0)*5.0/9.0;
	return c;
}


