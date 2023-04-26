#include<stdio.h>
main()
{
	int a,b,c,d;
    //printf("Enter Value A=");
    //scanf("%d",&a);
    //printf("\nEnter Value B=");
    //scanf("%d",&b);
    //printf("\nEnter Value C=");
    //scanf("%d",&c);
    //printf("\nEnter Value D=");
    //scanf("%d",&d);
    
	if (a>b)
    {
      if(a>c)
       {
    		if(a>d)
    		{
    		    printf("A is Max");	
			}
			else
			{
		    	printf("D is Max");	
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is Max");
			}
			else
			{
				printf("D is Max");
			}
		}
		 	
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is Max");
			}
			else
			{
				printf("D is Max");
			}
		}
		else 
		{
			if(c>d)
			
		{
			printf("C is Max");
		}
		    else
		    {
		    	printf("D is Max");
			}
		}
	}
	
	
       
}
