#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
	int n=3, i= 0;
	bool verified = false;
	char secret_code[20] = "Dennis Ritchie";
	
	printf("\nKesempatan menjawabmu 3 kali");
	while (verified = true) {
		printf("\n\nClue: C Founder\n");
		char try_secret[20];
		printf("Your answer: ");
		fgets(try_secret, 20, stdin);
		strtok(try_secret,"\n");
		fflush(stdin);
		i++;
		if(strcmp(try_secret, secret_code) == 0) {
			printf("Jawabanmu benar!");
			verified = true;
			goto selesai;
			return 0;
		}
		else{
			printf("Salah, coba jawab lagi!");
		}
	}
	selesai:
	printf("\n\nSelesai!");
	return 0;
}
