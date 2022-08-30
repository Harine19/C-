//Q3)a) Read 3 integers from the user and print them in ascending order 

#include<iostream>
using namespace std;

int main()
{
    int nums[3] = {};
    int i; int j; int temp;

    for (int i=0; i<3; i++) 
    {
        cout << "Enter integer " << i+1 << " : ";
        cin >> nums[i];
    } //getting input of 3 nos in array

    for (i = 0; i < 3; ++i)
    {
        for (j = i + 1; j < 3; ++j)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
           }
        }
    } //bubble sorting that array in ascending order

    for (int i=0; i<3; i++) 
    {
        cout << nums[i] << "\n";
    } //printing array

    return 0;
}