#include <iostream>

int main()
{
    int number1{0}; // set nilai awal = 0
    int number2{0}; // set nilai awal = 0
    int sum{0};     // set nilai awal = 0

    std::cout << "Masukkan angka pertama: ";
    std::cin >> number1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> number2;

    sum = number1 + number2; // menjumlahkan dua angka

    std::cout << "Hasil penjumlahan: " << sum << std::endl;
}