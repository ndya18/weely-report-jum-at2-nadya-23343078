#include <stdio.h>
// Created by Nadya_23343088

void main()
{
	char buff[255];
	char text[255];
	FILE *fptr;
	
	// membuat file
	fptr = fopen("puisi.txt","w");
	
	// mengambil input dari user
	printf("Inputkan isi file: ");
	fgets(text, sizeof(text), stdin);
	
	// menulis ke text ke file
	fputs(text, fptr);
	
	printf("File berhasil ditulis\n");
	
	// tutup file
	fclose(fptr);
}