#include <stdio.h>
int main(void)
{
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num); 

    if( num>95&&num<=100)
	{
	printf(" You got distinction"); 
		}
	else if ( num >=60)
	{ 
		printf(" You got first class");
		}
	else if ( num >=50)
	{
		printf(" You got second class");
		}
	else if ( num >=45)
	{
		printf(" You got third class");
		}
	else if ( num >=40)
	{
		printf(" You just passed");
		}
	else if ( num >=0)
	{
		printf(" You failed in the exam");
		}	
	
	else if ( num <0 )
	{
		printf("It is invalid");
		}
	

return 0;
}
