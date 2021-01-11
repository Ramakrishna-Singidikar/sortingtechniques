#include<stdio.h> 

void bubblesort(int a[],int k)
{
int i,j,t;
for(i=0;i<k-1;i++)
{
 for(j=0;j<k-i-1;j++)
  {
   if(a[j]>a[j+1])
    {
      t=a[j];		//Swapping
      a[j]=a[j+1];
      a[j+1]=t;
    }
  }
}
}

int main()
{
int i,n,a[10];
printf("\nEnter the size of an array:");
scanf("%d",&n);
printf("\nEnter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

bubblesort(a,n);

printf("\n sorted array is:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}


