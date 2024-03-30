// If-Else Statement
#include <iostream>
using namespace std;

int main()
{
    int score; // inisialisasi variabel

    cout << "Nilai Anda: ";
    cin >> score;

    // pengecekan kondisi
    if (score >= 90)
    {
        cout << "Grade A!" << endl;
    }
    else if (score < 90 && score >= 80)
    {
        cout << "Grade B" << endl;
    }
    else if (score < 80 && score >= 75)
    {
        cout << "Grade C" << endl;
    }
    else
    {
        cout << "Anda gagal!" << endl;
    }
}