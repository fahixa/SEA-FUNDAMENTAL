#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char matauang[20];
    int harga;
    int subtotal;
    int kuantitas;
    int no;
} penukaran;

penukaran order[10];

bool user_is_inside = false;

//Set jumlah pesanan untuk mengakses index array of struct yang akan diisi
int jumlah_penukaran = 0;
//Function Prototyping

void menu();
void show_invoice();
void back_to_menu();


//Fungsi Menu 

void greeting_message(){
    printf("Selamat Datang di FH Penukaran Uang !\n");
    printf("\n");
}

void menu(){
    if(user_is_inside == false){
        greeting_message();
    }

    int pilihan;
    int jumlah;

    char jns_matauang[3][20] = {"Euro", "Dollar","Dinar"};
	
	printf("\n----------------------------------------\n");
    printf("Pilihan Jenis Matauang yang ditukar : \n\n");

    for (int i = 0; i < 3 ; i++){
        printf("%d. %s\n", i + 1, jns_matauang[i]);
    }
    
    

    printf("\nMasukkan pilihan :");
    scanf("%d", &pilihan);
    user_is_inside = true; //Set user is inside = true, karena user sudah masuk kedalam program , agar pesan selamat datang tidak muncul lagi selanjutnya
    
    
    int *pointer_pilihan = &pilihan;
    
    switch(pilihan){
        case 1 :
		    printf("1 Euro : 17.106 Rupiah\n");
            printf("Jumlah Penukaran: ");
            scanf("%d", &jumlah);
            strcpy(order[jumlah_penukaran].matauang, jns_matauang[0]);
            order[jumlah_penukaran].no = pointer_pilihan;
            order[jumlah_penukaran].kuantitas = jumlah;
            order[jumlah_penukaran].subtotal = 17106 * jumlah;
            jumlah_penukaran += 1;//Tambahkan jumlah penukaran dengan 1 , agar index array yang diakses selanjutnya bertambah
            break;
        case 2 : 
            
            printf("1 Dolar : 14.163 Rupiah\n");
            printf("Jumlah Penukaran: ");
            scanf("%d", &jumlah);
            strcpy(order[jumlah_penukaran].matauang, jns_matauang[1]); 
            order[jumlah_penukaran].no = pointer_pilihan;
            order[jumlah_penukaran].kuantitas = jumlah;
            order[jumlah_penukaran].subtotal = 14163 * jumlah;
            jumlah_penukaran += 1;//Tambahkan jumlah penukaran dengan 1 , agar index array yang diakses selanjutnya bertambah
            break;
        case 3 : 
            printf("1 Dinnar : 46.357 Rupiah\n");
            printf("Jumlah Penukaran: ");
            scanf("%d", &jumlah);
            strcpy(order[jumlah_penukaran].matauang, jns_matauang[1]); 
            order[jumlah_penukaran].no = pointer_pilihan;
            order[jumlah_penukaran].kuantitas = jumlah;
            order[jumlah_penukaran].subtotal = 46357 * jumlah;
            jumlah_penukaran += 1;//Tambahkan jumlah penukaran dengan 1 , agar index array yang diakses selanjutnya bertambah
            break;
        default :
            printf("Pilihan anda tidak ada, ulangi lagi!\n\n");
            menu();
    }

    char tukarlagi;

    printf("Ingin Menukar uang lagi ?(y/n) ");
    fflush(stdin);
    scanf("%c", &tukarlagi);
 
    if(tukarlagi == 'Y' || tukarlagi == 'y'){
        menu();
    }
    else{
        show_invoice();
    }
}




void show_invoice(){
	printf("\n\n");
    printf("Penukaran Kamu : \n\n");
    int total = 0;
    printf("%-20s %-20s %-20s %-20s\n", "Kode", "Matauang", "Kuantitas", "Subtotal");
    
    for (int i = 0; i < jumlah_penukaran; i++){
        printf("%-20d %-20s %-20d %-20d\n", order[i].no, order[i].matauang, order[i].kuantitas, order[i].subtotal);
        total += order[i].subtotal;
    }

    printf("\nTotal : Rp. %d\n", total);
    printf("Silahkan ditukar!");
}
//Bagian Program Utama
int main(){

    menu();
}
