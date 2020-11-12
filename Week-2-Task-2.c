#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //variabel nama panggilan dan umur
    char nama_panggilan[8];
    int umur;
    
    //tampilan input nama yang harus diisi user
    printf("Masukan nama panggilan anda (maks 8) : ");
    fgets(nama_panggilan, 8, stdin); //fungsi fgets untuk inputan strings
    strtok(nama_panggilan, "\n"); //clear escape character string
    fflush(stdin); //clear buffer

    //tampilan input tahun kelahiran yang harus diisi user
    printf("Masukan tahun kelahiran anda : ");
    scanf("%i", &umur); //fungsi scanf untuk mengambil inputan integer dan menyimpan ke variabel anka
    int hasil_umur;
    hasil_umur = 2020 - umur; //variabel hasil umur berfungsi untuk menampilkan umur user

    printf("Hollaa %s, kamu berumur %i tahun!", nama_panggilan, hasil_umur); /* hasil akhir outputnya */
}
