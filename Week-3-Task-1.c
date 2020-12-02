#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int id;
  char nama[15], code[15];
  char data[15]="S3A{S3CRETC0DE}";

  printf("ID: ");
  scanf("%d", &id);
  fflush(stdin);
  printf("Nama: ");
  fgets(nama, 15, stdin);
  strtok(nama, "\n");
  fflush(stdin);
  printf("Secret Code: ");
  fgets(code, 15, stdin);
  strtok(code, "\n");
  fflush(stdin);
  
  if (id == 1123418 && strcmp(nama, "Agent P") == 0 && strcmp(code, "3#4943181D") == 0) {
    printf("Protect this data: %s", data);
  } else if (id == 1102141 && strcmp(nama, "Agent X") == 0 && strcmp(code, "#9213284HB") == 0) {
    printf("Protect this data: %s", data);
  } else {
    printf("Data kosong!");
  }
  return 0;
}
 
