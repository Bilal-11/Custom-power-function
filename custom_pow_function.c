/*Custom power function, made using looping construct*/
/*Author: Bilal, Date: 11/08/2021*/
#include<stdio.h>
int power(int,int);

int main()
{

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
