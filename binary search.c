#include <stdio.h>
void sort (int x[],int lb,int ub)
{
  int j;
  if(lb>=ub)
    return ;
  else
  {
    j=partition(x,lb,ub);
    sort(x,lb,j-1);
    sort(x,j+1,ub);
  }  
}
int partition (int x[],int lb,int ub)
{
  int down=lb,up=ub,pivot=x[lb],temp,temp1;
  while(down<up)
  {
    while(x[down]<pivot && down<ub)
      down++;
    while(x[up]>pivot && up>lb)
      up--;
    if(down<up)
     {
       temp=x[down];
       x[down]=x[up];
       x[up]=temp;
     }
  } temp1=x[up];
    x[up]=pivot;
    pivot=temp1;
    return up;
  
}
int binary(int x[],int n,int no)
{
  int low=0,high=n-1,mid=0;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(x[mid]==no)
     return mid;
    else
    {
     if(x[mid]>no)
       high=mid-1;
     else
       low=mid+1;
    }
  }
  return -1;
}
int main()
{
  int n,i,y,r;
  printf("Enter no. of elements:");
  scanf("%d",&n);
  int x[n];
  printf("Enter elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&x[i]);
  sort(x,0,n-1);
  printf("Enter element to be search:");
  scanf("%d",&y);
  r=binary(x,n,y);
  if(r==-1)
    printf("Element not found.");
  else
    printf("Element %d found at %d position",y,r);
  return 0;
}
    