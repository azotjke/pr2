#include<stdio.h>

main()
{
	int a,b;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	if(a>b)
	{
		printf("A bolshe");
	}
	else
	{
		if(a==b)
		{
			printf("A=B");
		}
		else
		{
			printf("B bolshe");
		}
	if(a<b)
	    {
	    	printf("A menshe");
		}
	    else
	    {
	    	if(b==a)
	    	{
	    		printf("B=A");
			}
			else
			{
				printf("B menshe");
			}
	    		
			}
		}
   }
