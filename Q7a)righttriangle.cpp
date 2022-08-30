//Q7a) * right angle triangle

#include<iostream>
using namespace std;

int main() {
   int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);

   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d","*");
	printf("\n");
   }
   return 0;
}