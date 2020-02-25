#include <iostream>
using namespace std;
/*
- Array : - Kumpulsn data yang mrnyimpan jumlah nilai tetap, dengan jenis yang sama.
 */

int main() {

    // Deklarasi Array : - Ukuran dan jenis array tidak dapat diubah setelah deklarasi.
    int no[5];

    // Inisialisai Array:
    string nama[3] = {"Sherlock Holmes", "Conan", "Arthur Doyle"};
    int nomor[] = {1, 3, 5, 7, 9};

    /*
    / Mengakses Array: - Array memiliki 0 sebagai indeks pertama bukan 1.
                       - Jika ukuran array adalah n, untuk mengakses elemen terakhir, (n-1)indeks digunakan.
                       - Misalkan alamat awal nomor[0]adalah 1. Kemudian,
                         alamat berikutnya  a[1], akan menjadi 3, alamat a[2]akan menjadi 5 dan seterusnya.
     */
    cout << nomor[0] << "\t" << nomor[1] << "\t" << nomor[2] << "\t" << nomor[3] << "\t" << nomor[4] << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << nama[i] << endl;
    }

    // Contoh : memasukan dan menampilkan nama seseorang
    cout << "\n====> Contoh Array <====" << endl;
    string orang[5];
    cout << "Masukan 5 Nama Seseorang: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " - ";
        cin >> orang[i];
    }

    cout << "\n===> Menampilkan Data <====: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Orang ke-" << i + 1 <<  " bernama: " << orang[i] << endl;
    }

    return 0;
}