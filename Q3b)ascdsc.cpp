//Q3)a) Menu type for ascending and descending options for Q3a

#include<iostream>
using namespace std;

int main()
{
    int nums[3] = {};
    int i; int j; int temp; int choice;
    for (int i=0; i<3; i++) {
        cout << "Enter integer " << i+1 << " : ";
        cin >> nums[i];
    } //getting input of 3 nos in array
    cout << "Arrange array in : \n 1: Ascending \n 2: Descending \n Enter choice: ";
    cin >> choice;
    for (i = 0; i < 3; ++i) {
        for (j = i + 1; j < 3; ++j) {
            if (nums[i] > nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    } //bubble sorting that array in ascending order
    if (choice==1) {
        for (int i=0; i<3; i++) {
        cout << nums[i] << "\n";
        } //printing array
    }
    else if (choice==2) {
        for(int i = 0; i<3/2; i++) {
            temp = nums[i];
            nums[i] = nums[3-i-1];
            nums[3-i-1] = temp; 
        }
        for (int i=0; i<3; i++) {
        cout << nums[i] << "\n";
        } //printing array
    }
    return 0;
}