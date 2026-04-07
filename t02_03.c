#include <stdio.h>

/* LANGKAH 1: Struktur Data */
struct Kalkulator {
    char operan;
    int angka;
    int hasil;
};

int main() {
    struct Kalkulator k;
    int i;

    /* LANGKAH 2: Input Operator */
    scanf(" %c", &k.operan);
    printf("%c\n", k.operan);

    /* LANGKAH 3: Inisialisasi Nilai Awal berdasarkan Operator */
    if (k.operan == '*') {
        k.hasil = 1;
    } else {
        k.hasil = 0;
    }

    /* LANGKAH 4: Perulangan (Maksimal 5 kali input) */
    for (i = 1; i <= 5; i++) {
        // Ambil input angka
        if (scanf("%d", &k.angka) != 1) break;

        // PENJAGA B: Cek jika input adalah -1
        if (k.angka == -1) {
            printf("-1\n0\n");
            break; // Keluar dari perulangan
        }

        // LANGKAH 5: Hitung berdasarkan operator
        if (k.operan == '+') {
            k.hasil = k.hasil + k.angka;
        } 
        else if (k.operan == '-') {
            k.hasil = k.hasil - k.angka;
        } 
        else if (k.operan == '*') {
            k.hasil = k.hasil * k.angka;
        }

        // Cetak angka yang diinput dan hasil sementaranya
        printf("%d\n%d\n", k.angka, k.hasil);

        // PENJAGA A: Jika sudah input ke-5 (untuk perkalian di Example 2)
        // Program di contoh berhenti setelah input ke-4 atau ke-5 tergantung skenario
        // Kita gunakan batas 5 sesuai instruksi "kurang dari 5 kali atau -1"
    }

    return 0;
}