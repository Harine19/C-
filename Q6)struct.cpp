//Q6) Declare a struct storing the following information related to the student. student name, roll number, marks

#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int rollno;
    float marks;
};

void displayData(student); // Function declaration

int main()
{
    student p;

    cout << "Enter Full name: ";
    cin.get(p.name, 50);
    cout << "Enter roll no: ";
    cin >> p.rollno;
    cout << "Enter marks: ";
    cin >> p.marks;

    // Function call with structure variable as an argument
    displayData(p);

    return 0;
}

void displayData(student p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.rollno << endl;
    cout << "Salary: " << p.marks;
}