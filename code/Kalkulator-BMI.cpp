#include <iostream>
using namespace std;

int main()
{
    float weight, height, BMI; // inisialisasi variabel

    // menambahkan nilai ke variabel
    cout << "weight (in kg): ";
    cin >> weight;

    cout << "height (in meter): ";
    cin >> height;

    // menghitung BMI
    BMI = weight / (height * height);

    // pengecekan kondisi
    if (BMI >= 30)
    {
        cout << "BMI score: " << BMI << endl;
        cout << "Obese";
    }
    else if (BMI < 30 && BMI >= 25)
    {
        cout << "BMI score: " << BMI << endl;
        cout << "Overweight";
    }
    else if (BMI < 25 && BMI >= 18.5)
    {
        cout << "BMI score: " << BMI << endl;
        cout << "Normal";
    }
    else
    {
        cout << "BMI score: " << BMI << endl;
        cout << "Underweight";
    }
}