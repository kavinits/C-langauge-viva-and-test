#include<stdio.h>
main()
{
	int sum=0,firstdigit,lastdigit,n;
	printf("Enter the value if n=");
	scanf("%d",&n);
	lastdigit=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	  sum=firstdigit+lastdigit;
	  printf("Sum of first and last digit=%d",sum);
	
	

}
