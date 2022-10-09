# include<stdio.h>

void main()
{
    
    int a[4], item, i;
    printf("Enter list of numbers\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d",& a[i]);
    }


    printf("Enter item to find\n");
    scanf("%d",& item);

    for (i = 0; i < 4; i++)
    {
        if (a[i]==item)
            printf("Item found at index %d \n",i);
        
    }
    

    

}
