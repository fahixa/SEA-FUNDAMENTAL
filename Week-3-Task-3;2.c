#include <stdio.h>
 
int main(void)
{
  int jumlah;
 
  printf("Input Angka: ");
  scanf("%i",&jumlah);
  printf("\n");
 
  for (int i = 1; i <= jumlah; i++) {              
    if (i % 2 == 1){
    	for (int i = 1; i <= jumlah; i++){
            printf("* ");
        }
	}           
    else{
    	for (int i = 1; i <= jumlah; i++){
            printf(" *");
        }
	}
    printf("\n");
  }
  return 0;
}
