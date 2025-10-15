#include "pelajaran.h"
#include <iostream>
using namespace std;

Pelajaran create_pelajaran(string namaPel, string kodePel) {
    Pelajaran p;
    p.namaMapel = namaPel;
    p.kodeMapel = kodePel;
    return p;
}

void tampil_pelajaran(Pelajaran pel) {
    cout << "Mata Kuliah : " << pel.namaMapel << endl;
    cout << "Kode : " << pel.kodeMapel << endl;
}
