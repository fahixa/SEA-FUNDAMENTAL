#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int N[4][4];
 
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            printf("Baris %d Kolom %d : ",i,j);
            scanf("%d", &N[i][j]);
        }
    }
    printf("\nMatriks : \n");
    for(int i = 1; i <= 3; i++){
            printf("[");
        for(int j = 1; j <= 3; j++){
            printf(" %d",N[i][j]);
        }
        printf(" ]\n");
    }
 
    return 0;
}
 
