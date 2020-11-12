#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char nama[20];
    int total;
    float n, diskon, bayar;
 
    printf("Nama Pelanggan : ");
    gets(nama);
    fflush(stdin);
    printf("Bulan Lahir Pelanggan : ");
    scanf("%f",&n);
    printf("Total Belanja : Rp.");
    scanf("%d",&total);
    diskon = (0.2 * total) + ((n / 100) * total);
    bayar = total - diskon;
    printf("\n\n\nPelanggan %s mendapatkan diskon Rp.%.2f \n\n", nama, diskon);
    printf("Total belanja Setelah diskon : Rp.%.2f \n\n", bayar);
    printf("Terima Kasih.");
 
    return 0;
}
 
