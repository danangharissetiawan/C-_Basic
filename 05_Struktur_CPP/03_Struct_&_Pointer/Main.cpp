#include <iostream>
using namespace std;

// Struct to Pointer
struct Buah
{
    string nama;
    int jumlah;
};

int main() {

    Buah *ptr, b;

    ptr = &b;

    cout << "Buah: ";
    cin >> (*ptr).nama;
    cout << "Jumlah: ";
    cin >> ptr->jumlah;
    
    cout << "\n==> Data Buah <==" << endl;
    cout << "Nama: " << (*ptr).nama << endl;
    cout << "Jumlah: " << ptr->jumlah << endl;

    return 0;
}