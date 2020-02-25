# include <iostream>
using namespace std;
/*
 * 2 - Do While : aksi(kode) akan dijalankan dulu sebelum syarat di periksa.
 * sintaksnya:
     do{
         AKSI(kode)
     }while(syarat);
 * Cara Kerja:
    - aksi/kode di eksekusi terlebih dahulu setidaknya 1 kali, baru syarat di periksa.
    - ketika syarat bernilai true kode akan tetap di eksekusi,
    - sampai syarat bernilai false, dan saat itu juga loop di akhiri.
 */
int main()
{
    int angka, sum = 0;
    do{
        cout << " 5 x 5 = ";
        cin >> angka;
        sum++;
    }while(angka != 25);
    sum -= 1;
    cout << "Anda salah " << sum << " kali" << endl;
    return 0;
}