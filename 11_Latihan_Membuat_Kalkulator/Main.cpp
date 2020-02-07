#include <iostream>
using namespace std;

int main()
{
    float a,b,hasil;
    char operasi;

    cout << "\n\nSelamat Datang Di kalkulator Sederhana\n\n";
    cout << "Masukan nilai pertama: ";
    cin >> a ;
    cout << "\nMasukan operasi (+,-,/,*): ";
    cin >> operasi;
    cout << "\nMasukan nilai kedua: ";
    cin >> b;

    

    switch (operasi)
    {
    case '+':
        hasil = a + b;
        cout << "\nHasil perhitungan " << a << operasi << b;
        cout << " = " << hasil << endl;
        break;
    
    case '-':
        hasil = a - b;
        cout << "\nHasil perhitungan " << a << operasi << b;
        cout << " = " << hasil << endl;
        break;
    
    case '/':
        hasil = a / b;
        cout << "\nHasil perhitungan " << a << operasi << b;
        cout << " = " << hasil << endl;
        break;

    case '*':
        hasil = a * b;
        cout << "\nHasil perhitungan " << a << operasi << b;
        cout << " = " << hasil << endl;
        break;
    
    default:
        cout << "\nTidak mendukung operasi " << operasi << endl;
        break;
    }

    return 0;
}