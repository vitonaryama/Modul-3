# <h1 align="center">Laporan Praktikum Modul 3 ABSTRACT DATA TYPE (ADT) </h1>
<p align="center">Vito Naryama Pramudito</p>

## Dasar Teori

Seluruh kode yang telah dibuat menggambarkan penerapan dasar pemrograman terstruktur dengan bahasa C++, meliputi konsep fungsi, struktur data (struct), array, dan pointer. Prinsip modularitas diterapkan agar program lebih efisien dan mudah dipahami, sementara penggunaan struct membantu pengelompokan data secara teratur. Array dan pointer digunakan untuk memahami cara kerja memori dan manipulasi data. Menurut Budiarto dan Hidayat (2021), konsep modular dan struktur data dalam pembelajaran pemrograman dapat meningkatkan kemampuan analisis logika mahasiswa. Hal ini sejalan dengan Setiawan dan Pramono (2020), yang menyatakan bahwa praktik langsung dalam pemrograman C++ memperkuat pemahaman konsep algoritma dan struktur data.

## Guided 

### [mahasiswa.cpp]

```C++
#include <iostream>
using namespace std;
#include "mahasiswa.h"

void inputMhs(mahasiswa &m){
    cout << "input nama = ";
    cin >> (m).nim;
    cout << "input nilai1 = ";
    cin >> (m).nilai1;
    cout << "input nilai 2 = ";
    cin >> (m).nilai2;
}

float rata2(mahasiswa m){
    return (m.nilai1 + m.nilai2) / 2.0;
}
```
Kode ini digunakan untuk menginput data mahasiswa berupa NIM dan dua nilai ujian, lalu menghitung rata-rata kedua nilai menggunakan fungsi rata2. Hasilnya ditampilkan ke layar.

### [mahasiswa.h]

```C++
#ifndef MAHASISWA_H_INCLUDE
#define MAHASISWA_H_INCLUDE

struct mahasiswa
{
    char nim[10];
    int nilai1,nilai2;
};

void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);
#endif

```
File header ini berisi struktur data mahasiswa serta deklarasi fungsi inputMhs dan rata2. Tujuannya agar kode utama lebih rapi dan terpisah antara deklarasi dan implementasi.

### [main.cpp]

```C++
#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main (){
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata rata = " << rata2(mhs);
    return 0;
}
```
Kode utama ini menjalankan program untuk memanggil fungsi input dan perhitungan rata-rata mahasiswa, lalu menampilkan hasilnya ke layar.

## Unguided 

### 1. [mahasiswa.cpp]

```C++
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
```

File ini berisi fungsi untuk menghitung nilai akhir mahasiswa dari UTS, UAS, dan tugas. Juga terdapat fungsi inputData dan tampilData untuk menerima input dan menampilkan hasilnya.

#### Full code Screenshot:
<img width="813" height="474" alt="image" src="https://github.com/user-attachments/assets/db5d2650-08d3-46f3-b030-729576810b36" />

### [mahasiswa.h]

```C++
#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas);
void inputData(Mahasiswa &mhs);
void tampilData(Mahasiswa mhs);

#endif
```

Header ini mendefinisikan struct Mahasiswa dengan data nama, NIM, nilai ujian, tugas, dan nilai akhir, serta deklarasi fungsi yang digunakan pada program utama.

#### Full code Screenshot:
<img width="612" height="358" alt="image" src="https://github.com/user-attachments/assets/4e80f9c3-0c1e-4fbb-9018-ddb05343a143" />


### [main_mahasiswa.cpp]

```C++
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

```
#### Output:
<img width="1150" height="639" alt="image" src="https://github.com/user-attachments/assets/6422d0cd-0eac-40a7-93cf-268405899420" />

Program utama ini meminta pengguna menginput beberapa data mahasiswa, menghitung nilai akhir masing-masing, lalu menampilkannya satu per satu.

#### Full code Screenshot:
<img width="517" height="443" alt="image" src="https://github.com/user-attachments/assets/832d9bc9-c76a-47b9-8663-6dd7ad878bc0" />

### 2.[pelajaran.cpp]

```C++
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

```

Kode ini digunakan untuk membuat dan menampilkan data mata pelajaran melalui fungsi create_pelajaran dan tampil_pelajaran.

#### Full code Screenshot:
<img width="602" height="347" alt="image" src="https://github.com/user-attachments/assets/000879d8-5b74-4658-b8d1-bd10f6fd8954" />

### [pelajaran.h]

```C++
#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED
#include <string>
using namespace std;

struct Pelajaran {
    string namaMapel;
    string kodeMapel;
};

Pelajaran create_pelajaran(string namaPel, string kodePel);
void tampil_pelajaran(Pelajaran pel);

#endif

```

Header ini berisi struktur Pelajaran dengan atribut nama dan kode, serta deklarasi fungsi yang akan digunakan di file utama.

#### Full code Screenshot:
<img width="673" height="359" alt="image" src="https://github.com/user-attachments/assets/56fda7e3-cc51-4cd6-91b6-7642cdcbdeb1" />

### [main_pelajaran.cpp]

```C++
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

```
#### Output:
<img width="1162" height="166" alt="image" src="https://github.com/user-attachments/assets/a5392cad-c4f0-443a-bd72-111dd4aa37b2" />

Program utama ini membuat objek pelajaran dengan nama dan kode tertentu, lalu menampilkannya ke layar menggunakan fungsi dari file lain.

#### Full code Screenshot:
<img width="497" height="310" alt="image" src="https://github.com/user-attachments/assets/3cf11d67-bf91-4493-a32a-344cc2851ce6" />

### 3.[Unguided 3]

```C++
#include <iostream>
using namespace std;

void tampilArray(int A[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}

void tukarElemen(int A[3][3], int B[3][3], int i, int j) {
    int temp = A[i][j];
    A[i][j] = B[i][j];
    B[i][j] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int x = 10, y = 20;
    int *p1 = &x, *p2 = &y;

    cout << "Array A:\n"; tampilArray(A);
    cout << "Array B:\n"; tampilArray(B);

    tukarElemen(A, B, 1, 1);
    cout << "\nSetelah tukar posisi [1][1]:\n";
    tampilArray(A);
    tampilArray(B);

    tukarPointer(p1, p2);
    cout << "\nNilai pointer setelah tukar: x=" << x << ", y=" << y << endl;

    return 0;
}

```
#### Output:
<img width="1157" height="505" alt="image" src="https://github.com/user-attachments/assets/b9d6a61b-2b50-4c9e-a692-d6bae1f664db" />

Kode ini menunjukkan cara menampilkan matriks, menukar elemen antar dua array, dan menukar nilai melalui pointer. Fungsinya membantu memahami konsep dasar manipulasi data di C++.

#### Full code Screenshot:
<img width="950" height="843" alt="image" src="https://github.com/user-attachments/assets/e10395a0-0386-4cc1-a019-a04c2775e3ee" />




## Kesimpulan
Secara keseluruhan, seluruh kode menunjukkan pentingnya pemahaman fungsi, struct, array, dan pointer dalam membangun program yang terstruktur dan efisien. Penerapan prinsip modularitas membuat kode lebih mudah dikembangkan dan dipahami. Sejalan dengan Ardiansyah dan Nugroho (2022), pendekatan berbasis proyek seperti ini membantu mahasiswa menerapkan teori pemrograman dalam praktik nyata serta meningkatkan kemampuan problem solving.

## Referensi
[1] Ardiansyah, M., & Nugroho, D. (2022). Implementasi Pembelajaran Berbasis Proyek dalam Pemahaman Konsep Pemrograman C++.
[2] Budiarto, A., & Hidayat, R. (2021). Penerapan Konsep Modular dan Struktur Data dalam Pembelajaran Pemrograman C++.
[3] Setiawan, T., & Pramono, A. (2020). Efektivitas Pembelajaran Pemrograman Dasar Menggunakan Bahasa C++ terhadap Peningkatan Kemampuan Algoritmik Mahasiswa.
