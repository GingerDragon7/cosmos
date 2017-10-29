#include <stdio.h>
int multiply(int number,int A[],int size)
{
  int carry=0,i;
  for(i=0;i<=size-1;i++)
  {
    int temp=A[i]*number+carry;
    carry=temp/10;
    A[i]=temp%10;
  }
  while(carry!=0)
  {
    A[size]=carry%10;
    carry=carry/10;
    size++;
  }
  //for(int i=size-1;i>=0;i--)
  //{
    //printf("%d",A[i]);
  //}
  return size;
}
int factorial(int number)
{
  int fact[10000],i;
  fact[0]=1;
  int size=1;
  for(i=1;i<=number;i++)
  {
    size=multiply(i,fact,size);
  }
  for(i=size-1;i>=0;i--)
  {
    printf("%d",fact[i]);
  }
}

int main()
{
  int T,k=0,i;
  scanf("%d",&T);
  while(k<T)
  {
    scanf("%d",&i);
    factorial(i);
    printf("\n");
    k++;
  }
  return 0;
}
