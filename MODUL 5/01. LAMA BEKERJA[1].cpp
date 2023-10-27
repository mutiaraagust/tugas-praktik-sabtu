#include <stdio.h>

int main()
{ int iMasuk, iKeluar, iLama;

printf("Menentukan Lama Bekerja\n\n");
printf("Jam Masuk : ");
scanf("%d", &iMasuk);

printf(" \nJam Keluar : ");
scanf("%d", &iKeluar);

if (iKeluar >= iMasuk)
       iLama = iKeluar - iMasuk;
else 
       iLama = (12-iMasuk) + iKeluar;
       
printf("\n\n Lama Bekerja adalah : %d Jam\n", iLama);


return 0;
}
