#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string nama = "Struktur Data";
    string kode = "STD";

    Pelajaran pel = create_pelajaran(nama, kode);
    tampil_pelajaran(pel);

    return 0;
}
