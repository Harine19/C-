//Q4) Write a c++ program to declare char, short, int, unsigned int, unsinged long, float, double, long double, datatype variables 
//and then print the storage space reserved for those variables

#include <iostream>
using namespace std;

int main()
{
    int age = 36;
    char name = 'harine';
    float num = 32.4;
    double avg = 23.5;
    long int n = 32;
    short int a = 23;
    unsigned long e = 27;
    long double s = 34;

    cout << "Size of char: " << sizeof(name) << " byte" << endl;
    cout << "Size of int: " << sizeof(age) << " bytes" << endl;
    cout << "Size of float: " << sizeof(num) << " bytes" << endl;
    cout << "Size of double: " << sizeof(avg) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(n) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of unsigned long: " << sizeof(e) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(s) << " bytes" << endl;

    return 0;
}