#include <stdio.h>

/* LANGKAH 1: Membuat Struktur Data */
struct Menu {
    int level;
};

int main() {
    /* LANGKAH 2: Deklarasi variabel struct */
    struct Menu m;

    /* LANGKAH 3: Input Level */
    // Membaca angka level (1-5)
    if (scanf("%d", &m.level) != 1) return 0;

    /* LANGKAH 4: Mencetak Daftar Makanan (Teknik Merosot/Fall-through) */
    // Perhatikan: Tidak ada kata 'break' di setiap case agar level bawahnya ikut tercetak
    switch (m.level) {
        case 5:
            printf("milk\n");
        case 4:
            printf("fruits\n");
        case 3:
            printf("vegetables\n");
        case 2:
            printf("side dishes\n");
        case 1:
            printf("staple food\n");
    }

    /* LANGKAH 5: Mencetak Pesan Kesimpulan */
    if (m.level == 1) {
        printf("you need side dishes\n");
    } 
    else if (m.level == 2) {
        printf("you need vegetables\n");
    } 
    else if (m.level == 3) {
        printf("good\n");
    } 
    else if (m.level == 4) {
        printf("very good\n");
    } 
    else if (m.level == 5) {
        printf("perfect\n");
    }

    return 0;
}