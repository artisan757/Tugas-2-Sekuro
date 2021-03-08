#include <iostream >
#include <cmath>
using namespace std;
//Nama : Rizky Anggian Matondang
//NIM : 16720470

// Definisi Fungsi Yang Akan Diintegralkan (x^3 + x + 1)
double f (double x){
    double x2 = (x*x*x) + x + 1;
    return x2;

    }

// Code
 int main () {
     int n, i ; //Mendefinisikan variabel
     double b, a, n2, luas,alas, hasil; //Mendefinisikan variabel (double digunakan agar tidak pembulatan ke bawah)

     //Input batas bawah integral
     cout << "Masukkan batas bawah integral ";
     cin >> b;

     //Input batas atas integral
     cout << "Masukkan batas atas integral ";
     cin >> a;

     //Input pembagian trapesium pada grafik
     cout << "Masukkan berapa trapesium yang diinginkan ";
     cin >> n;

     //Perhitungan alas tiap trapesium
     alas = ((a - b)/(n));

     //Perhitungan awal dari trapezoidal rule
     luas = (0.5) * (f(b) + f(a));

     //Perulangan perhitungan luas dibawah kurva
     for (i = 1 ; i < n ; i++){

        luas += f(b+i*alas);
     }

     //perhitungan akhir
     hasil = ((alas) * (luas));

     //output
     cout << hasil ;


return 0;
}
