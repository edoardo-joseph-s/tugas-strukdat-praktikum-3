#include <iostream>
#include <iomanip>
using namespace std;

struct Data {
    int nama, nim, kehadiran, tugas, quiz, uts, uas, na;
};

int main() {
    Data data[6];

    for (int i = 0; i < 6; i++) {
        cout << "\nData Siswa Ke-" << i + 1 << endl;
        cout << "Masukan Nama    : ";
        cin >> data[i].nama;
        cout << "Masukan NIM     : ";
        cin >> data[i].nim;
        cout << "Nilai Kehadiran : ";
        cin >> data[i].kehadiran;
        cout << "Nilai Tugas     : ";
        cin >> data[i].tugas;
        cout << "Nilai Quiz      : ";
        cin >> data[i].quiz;
        cout << "Nilai UTS       : ";
        cin >> data[i].uts;
        cout << "Nilai UAS       : ";
        cin >> data[i].uas;

        data[i].na = data[i].kehadiran * 0.05 + data[i].quiz * 0.10 + data[i].tugas * 0.15 + data[i].uts * 0.35 + data[i].uas * 0.35;
    }

    cout << "+------------------------------------------------------------------------------------------------------+" << endl;
    cout << left << setw(5) << "| No" << setw(10) << "| Nama" << setw(10) << "| NIM" << setw(10) << "| Kehadiran" << setw(10) << "| Tugas" << setw(10) << "| Quiz" << setw(10) << "| UTS" << setw(10) << "| UAS" << setw(10) << "| Nilai Akhir" << "|" << endl;
    cout << "+------------------------------------------------------------------------------------------------------+" << endl;

    for (int i = 0; i < 6; i++) {
        cout << setw(5) << "| " << i + 1;
        cout << setw(10) << "| " << data[i].nama;     
        cout << setw(10) << "| " << data[i].nim;
        cout << setw(10) << "| " << data[i].kehadiran;
        cout << setw(10) << "| " << data[i].tugas;
        cout << setw(10) << "| " << data[i].quiz;
        cout << setw(10) << "| " << data[i].uts;
        cout << setw(10) << "| " << data[i].uas;
        cout << setw(10) << "| " << data[i].na << "|" << endl;
    }
    cout << "+------------------------------------------------------------------------------------------------------+" << endl;
    return 0;
}
