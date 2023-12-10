#include <stdio.h>
// Created by Nadya_23343088
void main(){
	
	char nama[] = "Agariadne D. S.";
	char gelar[] = ",. S.kom., M.pd.T. ";
	
	strcat(nama, gelar);
	
	printf("Nama Lengkap\t: %s\n", nama);
}