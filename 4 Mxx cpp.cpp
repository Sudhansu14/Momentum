#include<stdio.h>

main()
{
	int a,b,c,d;
	printf("value of a=");
	scanf("%d=",&a);
	printf("value of b=");
	scanf("%d=",&b);
	printf("value of c=");
	scanf("%d=",&c);
	printf("value of d=");
	scanf("%d=",&d);
	
	if(a>b);
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

