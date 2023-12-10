#include <stdio.h>
// Created by Nadya_23343088

void main(){
    char ulangi = 'y';
    int counter = 0;
    
    // perulangan while
    while(ulangi == 'y'){
    	printf("Apakah kamu mau mengulang\n");
    	printf("jawab (y/t) ");
    	scanf(" %c", &ulangi);
    	
    	// increment counter
    	counter++;
	}
	
	printf("\n\n-----------\n");
	printf("Perulangan SElesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", counter);
}