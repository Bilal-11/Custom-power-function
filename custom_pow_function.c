/*Custom power function, made using looping construct*/
/*Author: Bilal, Date: 11/08/2021*/
#include<stdio.h>
int power(int,int);

int main()
{
/*Add code to accept user input for a number and the power to which it is raised.
Both inputs should be integer. Use the power function I made to perform the
exponentiation. Display the result*/
  return 0;
}

int power(int a,int b)
{
  int ans = 1;
  for(int i = 1; i<=b ;i++)
  {
    ans = ans * a;
  }
  return 0;
}
