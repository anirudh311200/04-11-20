#include<stdio.h>
int main()
{
    int num, i;
    printf("Please Enter any Integer number = ");
    scanf("%d", &num);
    if(num >0)
    {
        printf("List of Natural Numbers from 1 to %d are \n", num);
        for(i = 1; i <= num; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("Enter Valid number\n");
    }
    return 0;
}