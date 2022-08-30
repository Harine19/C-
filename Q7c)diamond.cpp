//Q7c)pattern matching program of * diamond

#include<iostream>
using namespace std;

int main() {
    int i, j, n, flag; 
    cout << "Enter number of rows: ";
    cin >> n; 
    flag = n-1;

    for(i=1; i<=n; i++) 
    {
        for(j=1; j<=flag; j++)
            cout<<" ";
        flag--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<"\n";
    }
    flag = 1;
    for(i=1; i<=(n-1); i++)
    {
        for(j=1; j<=flag; j++)
            cout<<" ";
        flag++;
        for(j=1; j<=(2*(n-i)-1); j++)
            cout<<"*";
        cout<<"\n";
    }
    cout << "\n";
    return 0;
}