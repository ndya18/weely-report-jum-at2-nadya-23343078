#include <stdio.h>
// Created by Nadya_23343088

void main(){
	
	char title[] = "Belajar String.h pada bahasa C";
	char title_copy[20];
	
	// copy string title ke title_copy
	strcpy(title_copy, title);
	
	// maka sekarang title_copy akan berisi:
	printf("isi title_copy\t: %s\n", title_copy);
	
}