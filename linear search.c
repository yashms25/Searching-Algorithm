#include <stdio.h>

int linear(int x[],int n,int a)
{
  for(int j=0;j<n;j++)
  {
    if (x[j]==a)
      return j;
  }
      return -1;
}
int main()
{
  int n,x[n],i,y,r;
  printf("Enter no. of elements:");
  scanf("%d",&n);
  printf("Enter elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&x[i]);
  printf("Enter element to be search:");
  scanf("%d",&y);
  r=linear(x,n,y);
  if(r==-1)
   printf("Element not found.");
  else
   printf("Element %d found at %d position",y,r);
  return 0;
}