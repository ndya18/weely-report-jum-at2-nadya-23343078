#include <stdio.h>

// Created by Nadya_23343088

void main(){
	char username[30], password[30];
	
	printf("=== Welcome to Awesome Program ===\n");
	printf("Username: ");
	scanf("%s", &username);
	printf("Password: ");
	scanf("%s", password);
	
	
	if(strcmp(username, "petanikode") == 0){
		if(strcmp(password, "kopi") == 0){
			printf("Selamat datang bos!\n");	
		} else {
			printf("password salah, coba lagi!\n");
		}
	} else {
		printf("Anda belum terdaftar\n");
	}
	
}
	
