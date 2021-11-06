#include <stdio.h>
#include <stdlib.h>

int main()
{
float h;//initialize variable
printf("Enter your number :");
scanf("%f",&h);//input

if (h>=0&&h<=25)
	printf("%f Intervals  in [0,25]", h);
	
else if (h>25&&h<=50)
	printf("%f Intervals in (25,50]",h);

else if (h>50&&h<=75)
	printf("%f Intervals in (50,75]",h);

else if (h>75&&h<=100)
	printf("%f Intervals in (75,100]",h);

else 
	printf("%f Out of Intervals",h);
	return 0;
}
