#include <stdio.h>

// Created by Nadya_23343088

void main(){
	
	char grade;
	
	printf("inputkan grade:  ");
	scanf("%c", &grade);
	
	switch (toupper(grade)){
		case 'A':
			printf("Luar biasa\n");
			break;
		case 'B':
		case 'C':
			printf("Bagus!\n");
			break;
		case 'D':
			printf("Anda lulus!\n");
			break;
		case 'E':
		case 'F':
			printf("Anda remedi\n");
			break;
		default:
			printf("Grade salah!\n");	
	}
}
