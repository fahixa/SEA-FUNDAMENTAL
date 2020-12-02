#include <stdio.h>
 
int main(void)
{
  int jumlah;
 
  printf("Input Angka: ");
  scanf("%i",&jumlah);
  printf("\n");
 
  for (int i = 1; i <= jumlah; i++) {
    
    for (int j = 1; j <= i; j++)
    	{
            printf(" ");
        }
    for (int i = 1; i <= jumlah; i++)
        {
            printf("* ");
        }        
	printf("\n");
  }
  return 0;
}
