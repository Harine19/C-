//Q2) Accept character from user and print it's ascii value 

#include<iostream>
using namespace std;

int main() 
{
  char c;
  cout << "Enter character: "; 
  cin >> c; 
  cout << "ASCII Value of " << c << " is " << int(c);
  return 0;
}