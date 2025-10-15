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
