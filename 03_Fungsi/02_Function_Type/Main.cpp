#include <iostream>
using namespace std;
/*
* Fungsi yang dibuat manual oleh pengguna dapat dikategorikan sebagai:
    - Fungsi tanpa argumant dan tanpa nilai balik.
    - Fungsi tanpa argument tapi dengan nilai balik.
    - Fungsi dengan argument tapi tidak ada nili yang di kembalikan.
    - fungsi dengan argument dan mengembalikan nilai.
 */

// 1 - Fungsi tanpa argument dan tanpa nilai balik.

// void primer();

// int main(){

//     primer();
//     return 0;
// }

// void primer()
// {
//     int angka, i, flag = 0;

//     cout << "Masuka angka tekan enter untuk mengecek: ";
//     cin >> angka;

//     for ( i = 2; i <= angka/2; i++)
//     {
//         if (angka % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 1)
//     {
//         cout << angka << " Tidak termasuk angka primer." << endl;
//     } else
//     {
//         cout << angka << " Termasuk angka primer." << endl;
//     }
// }

/*
- program di atas fungsi primer() di panggil di main() tanpa argument.
- fungsi primer mengambil input dari pengguna, dan memeriksa apakah yang di inputkan
  termasuk bilangan primer atau tidak.
- karena tipe fungsi primere() adalah void. tidak ada nilai yang di kembalikan.
 */


// 2 - Fungsi tanpa argument tapi dengan nilai balik.

// int primer();

// int main()
// {
//     int angka, i, flag = 0;

//     angka = primer();

//     for (i = 2; i <= angka/2; i++)
//     {
//         if (angka % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 1)
//     {
//         cout << angka << " Tidak termasuk angka primer." << endl;
//     } else
//     {
//         cout << angka << " Termasuk angka primer." << endl;
//     }

//     return 0;
// }

// int primer()
// {
//     int n;
//     cout << "Masukan angka, tekan enter untuk mengecek nya: ";
//     cin >> n;
//     return n;
// }

/*
- fungsi primer di panggil di main().
- fungi primer() mengembalikan nilai int yang di ambil dari inputan user.
- nilai yang di kembalikan fungsi primer() di masukan ke variabel angka yang ada di main().
- kemudian di main dilakukan pengecekan, apakah inputan dari user termasuk bilangan primer atau tidak.
 */


// 3 - Fungsi dengan argument tapi tidak ada nili yang di kembalikan.

// void primer(int a);

// int main()
// {
//     int angka;

//     cout << "Masukan angka, tekan enter untuk mengecek: ";
//     cin >> angka;

//     primer(angka);
//     return 0;
// }

// void primer(int a)
// {
//     int i, flag = 0;

//     for ( i = 2; i <= a/2; i++)
//     {
//         if (a % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 1)
//     {
//         cout << a << " Tidak termasuk angka primer." << endl;
//     } else
//     {
//         cout << a << " Termasuk angka primer." << endl;
//     }
// }

/*
- di main() user di minta untuk menginputkan angka dan di masukan ke variabel angka.
- fungsi primer() di panggil dan di beri argumen angka yang telah di inputkan oleh user.
- kemudian di dalam fungsi primer() sendiri dilakukan pengecekan,
  apakan inputan dari user termasuk bilangan primer atau tidak.
 */


// 4 - Fungsi dengan argument dan mengembalikan nilai

int primer(int n);

int main()
{
    int angka, i, flag = 0;

    cout << " Masukan angka, tekan enter untuk mengecek: ";
    cin >> angka;

    flag = primer(angka);

    if (flag == 1)
    {
        cout << angka << " Tidak termasuk angka primer." << endl;
    } else
    {
        cout << angka << " Termasuk angka primer." << endl;
    }
}

int primer(int n)
{
    for (int i = 2; i < n/2; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }

    return 0;
}

/*
- di main() pengguna di minta untuk menginputkan angka, dan dimasukan ke variabel angka.
- variabel angka di masukan ke dalam fungsi primer() sebagai argument.
- karena yang di kembalikan oleh fungsi primer() adalah int 1 jika n adalah primer dan 0 jika tidak bilangan primer.
- sehingga di main(), nilai kembalian dari fungsi primer di simpan di variabel flag.
- dan nilai yang sesuai akan di cetak ke layar.
 */