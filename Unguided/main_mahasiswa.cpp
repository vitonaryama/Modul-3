#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main() {
    Mahasiswa data[10];
    int n;
    cout << "Masukkan jumlah mahasiswa (maks 10): ";
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; i++) {
        cout << "\nData ke-" << i+1 << endl;
        inputData(data[i]);
    }

    for(int i=0; i<n; i++) tampilData(data[i]);

    return 0;
}
