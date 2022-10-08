# include<stdio.h>

void main()
{
    
    int a[4], item, i;
    printf("Enter list of numbers ");
    for (i = 0; i < 4; i++)
    {
        scanf("%d",& a[i]);
    }


    printf("Enter item to find ");
    scanf("%d",& item);

    for (i = 0; i < 4; i++)
    {
        if (a[i]==item)
            printf("Item found at %d \n ",i);
        
    }
    

    

}
