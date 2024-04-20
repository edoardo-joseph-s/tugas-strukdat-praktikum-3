#include <iostream>
#include <string>

using namespace std;

struct lagu {
  string judul; 
  string penyanyi; 
  int tahun; 
  int track; 
  string kodeAlbum; 
};

struct kodeRBT {
  
};

int main() {
  const int min_lagu = 10;
  const int max_lagu = 20;

  int numSongs;
  do {
    cout << "Masukkan jumlah lagu (antara " << min_lagu << " dan " << max_lagu << "): ";
    cin >> numSongs;
  } while (numSongs < min_lagu || numSongs > max_lagu);

  lagu songs[max_lagu]; 

  for (int i = 0; i < numSongs; i++) {
    cout << "\nLagu ke-" << i + 1 << ":" << endl;
    cout << "Judul: ";
    getline(cin.ignore(), songs[i].judul); 

    cout << "Penyanyi: ";
    getline(cin, songs[i].penyanyi);

    cout << "Tahun produksi: ";
    cin >> songs[i].tahun;

    cout << "Track number: ";
    cin >> songs[i].track;

    cout << "Kode album: ";
    cin >> songs[i].kodeAlbum;
  }

  cout << "\nDaftar lagu:\n";
  for (int i = 0; i < numSongs; i++) {
    cout << "Lagu ke-" << i + 1 << "\n" << endl;
    cout << "--------------------------------" << endl;
    cout << "Penyanyi: " << songs[i].penyanyi << endl;
    cout << "Judul: " << songs[i].judul << endl;
    cout << "Tahun produksi: " << songs[i].tahun << endl;
    cout << "RBT: " << songs[i].track << "-" << songs[i].kodeAlbum << endl;
  }

  return 0;
}
