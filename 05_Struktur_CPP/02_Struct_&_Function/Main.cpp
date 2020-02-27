#include <iostream>
using namespace std;
/*
- Varisbel struct bisa buat sebagai argument daripada fungi, sama seperti argumen normal.
*/

// Contoh:
// struct
struct DataSiswa
{
    string nama;
    int umur;
    char kelas[10];
};

// deklarasi fungsi
DataSiswa data_input(DataSiswa);
void data_view(DataSiswa);


int main() {
    DataSiswa ds;
    ds = data_input(ds);
    data_view(ds);

    return 0;
}

// fungsi dengan kembalian untuk input data struct
DataSiswa data_input(DataSiswa ds){
    cout << "Masukan Nama Siswa: ";
    getline(cin, ds.nama);
    cout << "Masukan Umur Siswa: ";
    cin >> ds.umur;
    cout << "Masukan Kelas Siswa: ";
    cin >> ds.kelas;

    return ds;

}


// fungsi untuk menampilkan data struct
void data_view(DataSiswa ds) {
    cout << "\n===> Data Siswa 1 <===" << endl;
    cout << "Nama: " << ds.nama << endl;
    cout << "Umur: " << ds.umur << endl;
    cout << "Kelas: " << ds.kelas << endl;
}