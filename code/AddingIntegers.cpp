#include <iostream>

int main()
{
    int number1{0};
    int number2{0};
    int sum{0};

    std::cout << "Masukkan angka pertama: ";
    std::cin >> number1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> number2;

    sum = number1 + number2;

    std::cout << "Hasil penjumlahan: " << sum << std::endl;
}