#include <iostream>
using namespace std;

// deklarasi string dan fungsi
void s_char(char *);
void s_string(string);

/*
- String: adalah kumpulan karakter. 
- String ada dua jenis yang bisa digunakan di c++:
    1 - String yang merupakan objek kelas string (Kelas string Perpustakaan C ++ Standar)
    2 - C-string (C-style Strings)
*/
int main(){
    /*
    - C-String: adalah array yang bertipe char diakhiri dengan karakter nol,
                yaitu \0(nilai ASCII karakter nol adalah 0).
    - Contoh: char str[] = "SAYA";
            - str adalah string yang menampung 5 karakter.
            - meskupun "SAYA" terdiri dari 4 karakter,
              karakter \0(nol) ditambahkan di akhir string secara otomatis.

    - Alternatif untuk medefinisikan string:
        char str [4] = "C++";
        char str [] = {'C', '+', '+', '\ 0'};
        char str [4] = {'C', '+', '+', '\ 0'};
    */
   // Contoh 1 C-String
//    cout << "====> Contoh 1 C-String <====" << endl;
//    char str[100];
//    cout << "Masukan Satu Kata: ";
//    cin >> str;
//    cout << "Kalimat yang anda masukan: " << str << endl << endl;
   
//    cout << "Masukan Kalimat Kedua: ";
//    cin >> str;
//    cout << "Kalimat kedua yang anda masukan: " << str << endl;
   /*
   Ini karena operator ekstraksi (>>) berfungsi seperti scanf() dalam C
   dan menganggap spasi "" memiliki karakter terminating.
   */

  // Contoh 2 Membuat string dalam 1 baris
//   cout << "====> Contoh 2 --> Membuat String a Baris <====" << endl;
//   char a[100];
//   cout << "Masukan Satu baris Kalimat: ";
//   cin.get(a, 100);
//   cout << "Kalimat Yang Anda Masukan Adalah: " << a << endl;
  /*
  NB: - cin.get() --> untuk membaca teks yang berisi ruang kosong, 
                    membutuhkan 2 argument , 1 string, 2 panjang maksimum string.
  */

  /* Object String: - tidak seperti array.
                    - tidak memiliki limit.
                    - bisa disesuaikan sesuai kebutuhan.
  */

    // Contoh 3
    // cout << "===> Object String <====" << endl;
    // string b;
    // cout << "Masukan Kalimat: ";
    // getline(cin, b);
    // cout << "Kalimat yang anda masukan: " << b << endl;
    /*
    NB: getline() --> berfungsi untuk mengambil input user dari parameter pertama--> cin,
                      dan di alikasikan kepada parameter kedua yaitu--> b.
    */


   // String Dan Fungsi
   cout << "====> String & Fungsi <====" << endl;
   char c[100];
   string d;

   cout << "Masukan Kalimat Pertama: ";
   getline(cin, d);

   cout << "Masukan Kalimat Kedua: ";
   cin.get(c, 100,'\n');

    s_string(d);
    s_char(c);

    return 0;
}

void s_char(char s[]){
    cout << "Kalimat kedua yang anda masukan: " << s << endl;
}

void s_string(string s){
    cout << "\nKalimat pertama yang anda masukan: " << s << endl;
}

/* NB: Ketika anda ingin menjalanka satu program,
       aktifkan program tersebut, dan matikan program yang lainya.
       begitupun ketika ingin menjalankan contoh string dan fungsi.
*/