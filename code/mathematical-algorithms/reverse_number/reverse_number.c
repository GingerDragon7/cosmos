#include <stdio.h>
int main()
{
  int num=5896,n=1,temp=num,rev;
  while(temp!=0)
  {
    temp=temp/10;
    n=n*10;
  }
  n=n/10;
  while(num!=0)
  {
    rev=n*(num%10)+rev;
    num=num/10;
    n=n/10;
  }
  printf("%d\n",rev);
  return 0;
}
