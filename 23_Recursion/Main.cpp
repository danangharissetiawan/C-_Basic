#include <iostream>
using namespace std;

/*
- Rekursif = sebuah fungsi yang memanggil dirinya sendiri. biasaanya teknik ini disebut rekursi.
 */

int IterasiFaktorial(int a){
    int hasil = a;
    for (int i = 1; i < a; i++){
        hasil = hasil * (a-i);
    }
    return hasil;
}

int RekursifFaktorial(int a){
    if (a > 1)
    {
        return a * RekursifFaktorial(a - 1);
    } else
    {
        return 1;
    }
}

int IterasiPangkat(int a, int n){
    int hasil = a;
    for (int i = 1; i < n; i++){
        hasil = hasil * a;
    }
    return hasil;
}

int RekursifPangkat(int a, int n){
    if (n >= 1)
    {
        return a * RekursifPangkat(a, n - 1);
    } else
    {
        return 1;
    }
}

int main()
{
    int a, n;
    cout << "Masukan angka: ";
    cin >> a;
    cout << "Masukan pangkat: ";
    cin >> n;

    cout << "Faktorial ===>" << endl;
    cout << IterasiFaktorial(a) << endl;
    cout << RekursifFaktorial(a) << endl;

    cout << "\nPangkat ===>" << endl;
    cout << IterasiPangkat(a,n) << endl;
    cout << RekursifPangkat(a, n) << endl;
    return 0;
}