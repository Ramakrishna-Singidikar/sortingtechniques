#include<stdio.h> 
//:wq

void insertionsort(int a[],int s)
{
int i,j,t;
for(i=1;i<s;i++)
{
 t=a[i];
 j=i-1;
 while(t<a[j]&&j>=0)
  {
   a[j+1]=a[j];
   j=j-1;
    }
   a[j+1]=t; 
  }
}

int main()
{
int i,n,a[20];
printf("\nenter the size of an array:");
scanf("%d",&n);
printf("\nenter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
insertionsort(a,n);
printf("\n sorted array is:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}

