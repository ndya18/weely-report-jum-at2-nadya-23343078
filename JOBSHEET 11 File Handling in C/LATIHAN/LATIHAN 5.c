#include <stdio.h>
// Created by Nadya_23343088

int main()
{
    char buff[255];
    char text[255];
    FILE *fptr;

    // membuka file yang ditulis
    fptr = fopen("puisi.txt", "w");

    if (fptr == NULL)
    {
        printf("Error: Tidak dapat membuka file untuk ditulis.\n");
        return 1; // Keluar dari program dengan kode kesalahan
    }

    for (int i = 0; i < 5; i++)
    {
        // mengambil input dari user
        printf("Isi baris ke-%d: ", i + 1);
        fgets(text, sizeof(text), stdin);

        // menulis text ke file
        fputs(text, fptr);
    }

    printf("File berhasil ditulis\n");

    // tutup file setelah ditulis
    fclose(fptr);

    // buka kembali file untuk dibaca
    fptr = fopen("puisi.txt", "r");

    if (fptr == NULL)
    {
        printf("Error: Tidak dapat membuka file untuk dibaca.\n");
        return 1; // Keluar dari program dengan kode kesalahan
    }

    // baca isi file dengan gets lalu simpan ke buff
    printf("Isi filenya sekarang:\n");
    while (fgets(buff, sizeof(buff), fptr))
    {
        printf("%s", buff);
    }

    // tutup file
    fclose(fptr);

    return 0; // Program berakhir dengan sukses
}
