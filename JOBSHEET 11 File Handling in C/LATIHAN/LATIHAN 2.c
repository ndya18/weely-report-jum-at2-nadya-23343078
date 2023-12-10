#include <stdio.h>
// Created by Nadya_23343088

void main()
{
	char buff[255];
	FILE *fptr;
	
	// membuat file
	if ((fptr = fopen("puisi.txt","r")) == NULL){
		printf("Error: file tidak ada!");
		// Tutup program karena file gak ada.
		exit(1);
	}
	
	// baca isi file dengan gets lalu simpan ke buff
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
		fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
		fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
		fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
		
	// tutup file
	fclose(fptr);
}