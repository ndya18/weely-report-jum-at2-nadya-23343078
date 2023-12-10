#include <stdio.h>

// Created by Nadya_23343088

void main(){
	
	int jawaban;
	
	printf("Berapakah hasil 3+4?\n");
	printf("jawab> ");
	scanf("%d", &jawaban);
	
	printf("Jawaban anda: %s\n", (jawaban == 7) ? "Benar" : "Salah");
}
