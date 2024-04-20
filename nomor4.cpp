#include <iostream>
using namespace std;

int main() {
  int angka = 0; 
  int hitung = 0; 

  for (int i = 1; i <= 100; i += 2) {
    if (i % 5 == 0) {
      angka += i;
      hitung++;
    }
  }

    double rata_rata = static_cast<double>(angka) / hitung;
    cout << "Rata-rata bilangan ganjil antara 1 dan 100 yang habis dibagi 5 adalah " << rata_rata << endl;

  return 0;
}
