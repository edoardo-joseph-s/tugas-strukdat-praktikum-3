#include <stdio.h>
#include <conio.h>

struct buku{
    char judul[15];
    int tahun_terbit;
    int harga;
};

int main(){
    struct buku book;
    
    printf("Judul buku : "); scanf("%s", book.judul);
    printf("Tahun terbit : "); scanf("%i", &book.tahun_terbit);
    printf("Harga : "); scanf("%i", &book.harga);

    printf("\nJudul buku : %s\n", book.judul);
    printf("Tahun terbit : %i\n", book.tahun_terbit);
    printf("Harga : %i", book.harga);
}
