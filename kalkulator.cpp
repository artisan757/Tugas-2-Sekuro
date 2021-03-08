#include <iostream >
using namespace std;

int main () {
    int N, i; //Inisiasi variabel
    float A, B, C; //Inisiasi variabel
    C = 0; //Inisiasi variabel

    //Pengisian variabel
    cout << "Masukkan Angka Pertama Yang Ingin Anda Operasikan ";
    cin >> A;

    //Pengisian variabel
    cout << "Masukkan Angka Kedua Yang Ingin Anda Operasikan ";
    cin >> B;

    C = A;

    //pemilihan kalkulator
    cout << "1 (Untuk penjumlahan)" << endl;
    cout << "2 (Untuk Pengurangan)" << endl;
    cout << "3 (Untuk Perkalian)" << endl;
    cout << "4 (Untuk Pembagian)" << endl;
    cout << "5 (Untuk Perpangkatan)" << endl;

    //Pengisian pilihan
    cout << "Masukkan Pilihan Anda " ;
    cin >> N;

    //Penjalanan kalkulator sesuai input user beserta output
    if (N == 1){
        cout << A + B;
    } else if (N == 2){
        cout << A - B;
    } else if (N == 3){
        cout << A * B;
    } else if (N == 4){
        cout << A / B;
    } else if (N == 5){
        for (i = 0; i < B-1; i++){
            A = A * C;
        }
        cout << A ;
    }


return 0;
}
