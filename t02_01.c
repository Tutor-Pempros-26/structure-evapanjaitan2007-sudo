// 12S25021 - Gabriel Ignasius Sinaga
#include <string.h>
#include <stdio.h>

struct transaksi 
{
  int jumlahbuku;
  double harga;
  double totalharga;
  double diskon;
  double totalbayar;
};


int main(int _argv, char **_argc)
{
  struct transaksi t;

  scanf("%d", &t.jumlahbuku);
  scanf("%lf", &t.harga);

  t.totalharga= t.jumlahbuku * t.harga;

  if (t.totalharga > 500000) {
    t.diskon = t.totalharga * 0.15;
  } else if (t.totalharga > 100000){
    t.diskon =  t.totalharga * 0.10;
  } else if (t.totalharga > 50000) {
    t.diskon =  t.totalharga * 0.05;
  } else {
    t.diskon = 0;
  }

t.totalbayar = t.totalharga - t.diskon;

if (t.diskon > 0) {
      printf("%.2lf\n", t.diskon);
  } else {
      printf("---\n");
  }

  printf("%.2lf\n", t.totalbayar);

  return 0;

}
