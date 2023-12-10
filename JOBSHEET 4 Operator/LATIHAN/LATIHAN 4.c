#include <stdio.h>
//Created by Nadya_23343088

void main(){
	int a, b;
	
	// pengisian nilai dengan operator =
	a = 5;
	b = 10;
	
	//pengisian sekalis penambahan
	b += a; // ini sama seperti b = b + a
	printf("Hasil b += a adalah %d\n", b);
	
	//pengisian sekalis pengurangan
	b -= a; // ini sama seperti b = b - a
	printf("Hasil b -= a adalah %d\n", b);
	
	//pengisian sekalis perkalian
	b *= a; // ini sama seperti b = b * a
	printf("Hasil b *= a adalah %d\n", b);
	
	//pengisian sekalis pembagian
	b /= a; // ini sama seperti b = b / a
	printf("Hasil b /= a adalah %d\n", b);
	
	//pengisian sekalis sisa bagi
	b %= a; // ini sama seperti b = b % a
	printf("Hasil b %= a adalah %d\n", b);
}