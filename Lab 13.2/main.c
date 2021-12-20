#include <stdio.h> 
#include <locale.h> 

int main()
{
	char* locale = setlocale(LC_ALL, "");

	int n;
	printf("N:");
	scanf_s("%i", &n);

	float rez = 1;
	int i;
	for (i = 0; i <= n; ++i)
		rez *= 1.0 + (float)i / 10;

	printf("rez = %f \n ", rez);
	return 0;
}