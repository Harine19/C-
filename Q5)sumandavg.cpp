//Q5) Get input 5 numbers find  their sum and average

#include<iostream>
using namespace std;

int main()
{

int nums[5] = {};
int i; int sum=0; float avg=0.0;
    
for (int i=0; i<5; i++) {
    cout << "Enter integer " << i+1 << " : ";
    cin >> nums[i];
} //getting input of 3 nos in array

for (int i=0; i<5; i++) {
    sum+=nums[i];
}
avg=sum/5;

cout << "Sum is : " << sum << "\nAverage is : " << avg;
return 0;
}
