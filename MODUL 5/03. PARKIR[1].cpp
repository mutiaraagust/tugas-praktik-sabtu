#include <stdio.h>

  int main()
{ int imasuk, ikeluar, ilama, ibiaya;
 

  printf("Menghitung Biaya Parkir\n\n");
  printf(" Jam Masuk : ");
  scanf("%d",&imasuk);

  printf("\nJam Keluar : ");
  scanf("%d",&ikeluar);

  if (ikeluar >= imasuk)
     ilama = ikeluar - imasuk;
  else
     ilama = (12 - imasuk) + ikeluar;
  if (ilama >2)
     ibiaya = 2000 + ((ilama - 2)*500);
  else
     ibiaya = 2000;

  printf("\n\n Biaya Parkir Adalah : Rp %d \n",ibiaya);
 
  return 0;
}
