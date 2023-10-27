#include <stdio.h>

int main() {

	float a, t, luas;
	
	printf("masukan alas segitiga \t : ");
	scanf("%f", &a);
	printf("masukan tinggi segitiga \t : ");
	scanf("%f", &t);
	
	luas = (a*t)/2;
	
	printf("Luas segitiga adalah %.2f\n ", luas);
	
	return 0;
	}

