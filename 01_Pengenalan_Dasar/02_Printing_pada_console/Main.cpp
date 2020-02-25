#include <iostream>


int main()
{
    std::cout << "Hello Dunia." << std::endl; // Contoh satu baris
    std::cout << "Ini adalah baris baru,"; // contoh baris yang baris selanjutnya tidak membuat baris baru
    std::cout << " ini bukan baris baru.\n"; // contoh baris yang selanjutnya akan membuat baris baru
    std::cout << "Ini baris baru"; // baris baru
    std::cout << " dan ini adalah akhir kalimat." << std::endl;
    std::cin.get();
    return 0;
}

/*
NB: Unutk membuat baris baru bisa menggunakan endl atau \n.
    semua yang ada didalam tanda kutip dua disebut string.
 */