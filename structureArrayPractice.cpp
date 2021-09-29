#include <iostream>
using namespace std;

struct Student
{
    string name;
    string lastName;
    int N1, N2, N3;
    float pro;
};

int main()
{
    const int SIZE = 3;
    Student estudiante[SIZE];

    estudiante[0] = {"Pedro", "Morales", 80, 90, 60 };
    estudiante[1] = {"Juan", "Vazquez", 70, 30, 50 };
    estudiante[2] = {"Tito", "Rivera", 30, 90, 100 };
    //for (int i = 0; i < SIZE; i++)
    //{
    //    cout << "Enter name: " << estudiante[i].name;
    //}

    for (int i = 0; i < SIZE; i++)
    {
        estudiante[i].pro = (estudiante[i].N1 + estudiante[i].N2 + estudiante[i].N3) / 3.0;
        cout << estudiante[i].name << "\t" << estudiante[i].lastName << "\t" << estudiante[i].pro << endl;
    }

    return 0;

}
