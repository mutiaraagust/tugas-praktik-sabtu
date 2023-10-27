#include <stdio.h>

int main()
{
	int alas,tinggi;
	float luas; alas = 8; tinggi = 5;
	
	luas = 0.5 * alas * tinggi;
	
	printf("LUAS SEGITIGA");
	printf("\nAlas = %i cm", alas);
	printf("\nTinggi = %i cm",tinggi);
	printf("\"Luas = %.2f cm", luas);
	
	return 0;
	}
