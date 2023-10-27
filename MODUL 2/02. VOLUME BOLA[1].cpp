#include<stdio.h>
#include<math.h>

int main()
{
	
float a,b,c;

printf ("MENCARI SISI MIRING SEGITIGA \n");

printf("Sisi depan sudut = ");
scanf("%f",&a);
printf("Sisi dekat sudut = ");
scanf("%f",&b);

c= a*a+b*b;
printf("jadi sisi miring segi tiga adalah %2.f",sqrt(c));
}
