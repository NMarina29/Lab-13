#include <stdio.h> 
#include <locale.h> 

int main()
{
	char* locale = setlocale(LC_ALL, "");

	float c;
	printf("Cost:");
	scanf_s("%f", &c);

	float m;
	for (m = 0.1; m < 1.1; m += 0.1)
		printf("%f kg = %.1f \n ", m, c * m);

	return 0;
}