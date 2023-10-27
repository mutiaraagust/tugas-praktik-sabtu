#include<stdio.h>
int main()
{
	int n;
	printf("Masukkan angka : ");
	scanf("%d", &n);
	
	if(n > 50){
    	n -= 25;
}
n += 10;

printf("Hasil akhir : %d\n", n);

return 0;
}


