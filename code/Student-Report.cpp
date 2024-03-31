#include <iostream>
using namespace std;

class Student
{
private:
    int score;
    string nama;

public:
    Student(string namaMahasiswa, int scoreMahasiswa) : nama(namaMahasiswa)
    {
        if (scoreMahasiswa >= 0 && scoreMahasiswa <= 100)
        {
            score = scoreMahasiswa;
        }
    }

    string getNama()
    {
        return nama;
    }

    int getScore()
    {
        return score;
    }

    string setGrade()
    {
        if (score <= 100 && score >= 90)
        {
            return "grade A";
        }
        else if (score < 90 && score >= 80)
        {
            return "grade B";
        }
        else if (score < 80 && score >= 70)
        {
            return "grade C";
        }
        else if (score < 70 && score >= 60)
        {
            return "grade D";
        }
        else
        {
            return "grade E";
        }
    }
};

int main()
{
    Student mahasiswa1{"Ahmad", 85};
    Student mahasiswa2{"Jupri", 90};

    cout << mahasiswa1.getNama() << " mendapatkan nilai "
         << mahasiswa1.getScore() << " setara "
         << mahasiswa1.setGrade() << endl;
    cout << mahasiswa2.getNama() << " mendapatkan nilai "
         << mahasiswa2.getScore() << " setara "
         << mahasiswa2.setGrade() << endl;
}