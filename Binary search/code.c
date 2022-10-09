# include<stdio.h>

int main()
{
   int first, last, middle, n, search, array[25];

   printf("Enter number of elements:\n");
   scanf("%d",&n); 
   printf("Enter %d integers:\n", n);
    
    for (int i = 0; i < n; i++)
      {scanf("%d",&array[i]); }


   printf("Enter the value to find:\n");
   scanf("%d", &search);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d is present at index %d.\n", search, middle);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found!");
   return (0);  
}
