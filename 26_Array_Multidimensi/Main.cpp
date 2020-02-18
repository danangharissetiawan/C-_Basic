#include <iostream>
using namespace std;

int main()
{
    // Array Multidimensi

    // // Dua Dimensi
    // int d_dua [3] [4]; // bisa menampung 16 element 3 baris 4 colom

    // // Tiga dimensi
    // int d_tiga[3][3][4];

    // Inisialisasi Array Multidimensi

    // Dua dimensi
    int d_dua[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2 baris 3 kolom

    // Tiga dimensi 
    int d_tiga[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {4, 3, 2, 1}
        },
        {
            {8, 7, 6, 5},
            {2, 3, 1, 4},
            {6, 7, 5, 8}
        }
    };

    // Contoh
    // Array Dua Dimensi
    cout << "===> Array Dua Dimensi <===\n" << endl;
    cout << " ---> Contoh 1 <---" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "baris ke-[" << i << "] kolom ke-[" << j << "] = " << d_dua[i][j] << endl;
        }
    }

    cout << "\n ---> Contoh 2 <---" << endl;
    const int KOTA = 2;
    const int HARI = 7;

    int suhu[KOTA][HARI];
    cout << "Masukan suhu kota selama 1 minggu, dimilai dari kota pertama kemudian kota kedua:" << endl;
    for (int i = 0; i < KOTA; i++)
    {
        for (int j = 0; j < HARI; j++)
        {
            cout << "Kota ke-" << i + 1 << ", Hari ke-" << j + 1 << ": ";
            cin >> suhu[i][j];
        }
    }

    cout << "\nDaftar suhu 2 kota dalam seminggu: " << endl;
    for (int i = 0; i < KOTA; i++)
    {
        for (int j = 0; j < HARI; j++)
        {
            cout << "Kota ke " << i + 1 << ", Hari ke " << j + 1 << " = " << suhu[i][j] << endl;
        }
    }

    // Contoh Array Tiga Dimensi
    cout << "\n=====> Contoh 1 Array Tiga Dimensi <=====" << endl;

    int tiga_d[2][3][2];
    cout << "Masukan 12 nilai: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "[" << i << "] [" << j << "] [" << k << "] = ";
                cin >> tiga_d[i][j][k];
            }
        }
        
    }

    cout << "\nMenampilkan nilai" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "[" << i << "] [" << j << "] [" << k << "] = " << tiga_d[i][j][k] << endl;
            }
        }
        
    }

    return 0;
}