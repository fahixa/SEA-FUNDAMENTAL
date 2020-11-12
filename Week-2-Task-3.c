#include <stdio.h>
#include <stdlib.h>
 
 struct Matkul{
 
        float nilai;
        int sks;
    };
 
int main()
{
    char nama[20];
    float ipk;
    struct Matkul pemrograman, kalkulus, fisika, sistem, basis;
 
    printf("Masukan nama mahasiswa : ");
    gets(nama);
    fflush(stdin);
    
    printf("Nilai Mata Kuliah Pemrograman (dalam bobot): ");
    scanf("%f", &pemrograman.nilai);
    printf("Jumlah SKS : ");
    scanf("%d", &pemrograman.sks);
    printf("Nilai Mata Kuliah Kalkulus (dalam bobot): ");
    scanf("%f", &kalkulus.nilai);
    printf("Jumlah SKS : ");
    scanf("%d", &kalkulus.sks);
    printf("Nilai Mata Kuliah Fisika (dalam bobot): ");
    scanf("%f", &fisika.nilai);
    printf("Jumlah SKS : ");
    scanf("%d", &fisika.sks);
    printf("Nilai Mata Kuliah Sistem Operasi (dalam bobot): ");
    scanf("%f", &sistem.nilai);
    printf("Jumlah SKS : ");
    scanf("%d", &sistem.sks);
    printf("Nilai Mata Kuliah Basis Data (dalam bobot): ");
    scanf("%f", &basis.nilai);
    printf("Jumlah SKS : ");
    scanf("%d", &basis.sks);
 
    ipk = ((pemrograman.nilai*pemrograman.sks)+(kalkulus.nilai*kalkulus.sks)+(fisika.nilai*fisika.sks)+(sistem.nilai*sistem.sks)+(basis.nilai*basis.sks))/(pemrograman.sks+kalkulus.sks+fisika.sks+sistem.sks+basis.sks);
 
    printf("\n\nNama Mahasiswa : %s", nama);
    printf("\n\nIP Semester ini : %f",ipk);
    return 0;
}
 
