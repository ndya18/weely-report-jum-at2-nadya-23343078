#include <stdio.h>
// Created by Nadya_23343088

void main(){
	// isi awal array
	char huruf[5] = {'a', 'b', 'c', 'd', 'e'};
	
	// mengubah isi array
	huruf[2] = 'z';
	
	// mencetak isi array
	printf("Huruf: %c\n", huruf[2]);
}