#include <iostream>

int tambah(int a, int b);

int main()
{
    std::cout << tambah(2,3) << std::endl;
    return 0;
}


/*
Preprocessing: proses dimana file disatukan dengan file yang di include (#include <iostrem>/header file)
               yang dibutuhkan sebelum di compail, error tidaknya file tidak berpengaruh di sini.

               'g++ -E namafile.cpp'/ 'g++ -E namafile.cpp > namafilebaru.p' (untuk melihat proses preprocessing)

Compailing: proses setelah proses preprocessing, dengan sarat file yang masuk prosses compailing harus tampa error.
            disini akan menghasilkan file .o atau biasa disebut dengan object file (berisi bahasa mesin)

            'g++ -c namafile.cpp' (akan membuat file dengan extensi .o)
            'objdump -d namafile.o' (untuk membuka file object file/file berekstensi .o)

Lingking: proses penggabungan file" yang telah melewati proses compailing(object file) dan dijadikan satu file .exe/.out
          sehingga program bisa di jalankan.

          'g++ namafile.o namafile.o' (untuk menggabungkan object file)
          'g++ namafile.o namafile.o -o output' (memberi nama file .exe/.out nya)
          'g++ namafile.cpp namafile.cpp' (tanpa melihat proses compailingnya, langsung hasil akhirnya)
 */