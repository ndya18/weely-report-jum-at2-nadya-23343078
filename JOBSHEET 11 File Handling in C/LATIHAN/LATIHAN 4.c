#include <stdio.h>
// Created by Nadya_23343088

int main()
{
    char buff[255];
    char text[255];
    FILE *fptr;

    // membuka file yang ditulis
    fptr = fopen("puisi.txt", "w");

    // memeriksa apakah file berhasil dibuka
    if (fptr == NULL)
    {
        printf("Error: Tidak dapat membuka file untuk ditulis.\n");
        return 1; // Keluar dari program dengan kode kesalahan
    }

    // mengambil input dari user
    printf("Inputkan isi file: ");
    fgets(text, sizeof(text), stdin);

    // menulis teks ke file
    fputs(text, fptr);

    printf("File berhasil ditulis\n");

    // tutup file setelah ditulis
    fclose(fptr);

    // buka kembali file untuk dibaca
    fptr = fopen("puisi.txt", "r");

    // memeriksa apakah file berhasil dibuka
    if (fptr == NULL)
    {
        printf("Error: Tidak dapat membuka file untuk dibaca.\n");
        return 1; // Keluar dari program dengan kode kesalahan
    }

    // baca isi file dengan gets lalu simpan ke buff
    while (fgets(buff, sizeof(buff), fptr))
    {
        printf("Isi filenya sekarang: %s", buff);
    }

    // tutup file
    fclose(fptr);

    return 0; // Program berakhir dengan sukses
}
