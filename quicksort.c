#include<stdio.h>
void quicksort(int number[],int first,int last)
{
   int i, j, k, l;

   if(first<last){
      k=first;
      i=first;
      j=last;

      while(i<j)
      {
         while(number[i]<=number[k]&&i<last)
            i++;
         while(number[j]>number[k])
            j--;
         if(i<j)
	{    			//Swapping
            l=number[i];
            number[i]=number[j];
            number[j]=l;
         }
      }

      l=number[k];
      number[k]=number[j];
      number[j]=t;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int main()
{
   int i, count, number[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}

