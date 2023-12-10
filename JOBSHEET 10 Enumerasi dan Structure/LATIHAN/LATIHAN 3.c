#include <stdio.h>
// Created by Nadya_23343088

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main() {
	enum hari sekarang;
	sekarang = RABU;
	
	printf("UKuran variabel enum: %d bytes\n", sizeof(sekarang));
	
}