#include <iostream>
using namespace std;
/*
- Jika fungsi dipanggil dengan menambahkan argument, maka argument itu akan diteruskan ke fungsi.
- jika fungsi dipanggil tanpa menambahkan argument, maka nilai" argument default digunakan.
 */

// Contoh: Fungsi dengan argument default:

void fungsi(char = '*', int = 1);

void segitiga(int = 5);

int main()
{
    cout << "Ini menggunakan argument default" << endl;
    fungsi();

    cout << "Argument pertama tidak default" << endl;
    fungsi('&');

    cout << "Kedua argument merupakan argument baru" << endl;
    fungsi('#', 5);

    cout << "\n ===== SEGITIGA SIKU-SIKU ===== \n" << endl;
    int n;
    cout << "Masukan tinggi segitiga = ";
    cin >> n;
    segitiga(n);

    return 0;
}

void fungsi(char var1, int var2)
{
    for (int i = 0; i < var2; i++)
    {
        cout << var1;
    }

    cout << endl;
}

void segitiga(int var)
{
    for (int i = 1; i <= var; i++)
    {
        for (int var1 = var; var1 >= i; var1--)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << "segitiga siku-siku" << endl;

}