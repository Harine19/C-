//Q1) C program for area of a circle

#include<iostream>
using namespace std;

int main() 
{
  float area,radius;
  cout << "Enter radius of circle: "; 
  cin >> radius; 
  area = 3.14 * radius * radius;
  cout << "Area is: " << area;
  return 0;
}

