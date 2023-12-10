#include <stdio.h>

// Created by Nadya_23343088

int main(){
	// membuat array karakter untuk menyimpan password
   char password[30];

    printf("=== Program login ===\n");
    printf("Masukkan pasword: ");
    scanf("%s", &password);
    
    // percabangan if/esle
    if( strcmp(password,"kopi") == 0 ){
    	printf("Selamat datang bos!\n");
    } else {
    	printf("Password salah, coba lagi!\n");
	}
	
	printf("Terimakasih sudah menggunakan aplikasi ini!\n");
}
