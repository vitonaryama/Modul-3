#include "mahasiswa.h"
#include <iostream>
using namespace std;

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

void inputData(Mahasiswa &mhs) {
    cout << "Nama: "; getline(cin, mhs.nama);
    cout << "NIM : "; getline(cin, mhs.nim);
    cout << "UTS : "; cin >> mhs.uts;
    cout << "UAS : "; cin >> mhs.uas;
    cout << "Tugas : "; cin >> mhs.tugas;
    cin.ignore();
    mhs.nilaiAkhir = hitungNilaiAkhir(mhs.uts, mhs.uas, mhs.tugas);
}

void tampilData(Mahasiswa mhs) {
    cout << mhs.nama << " (" << mhs.nim << ") -> Nilai Akhir: " << mhs.nilaiAkhir << endl;
}
