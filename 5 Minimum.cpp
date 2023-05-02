#include<stdio.h>

main()

{
	int a,b,c,d,e;
	printf("value of a=");
	scanf("%d=",&a);
	printf("value of b=");
	scanf("%d=",&b);
	printf("value of c=");
	scanf("%d=",&c);
	printf("value of d=");
	scanf("%d=",&d);
	printf("value of E=");
	scanf("%d=",&d);
	
	if(a<b)
	{
		if(a<c)
		{
		 if(a<d)
		 {
		   if(a<e)
		   {
		   	 printf("A is min");
		   }
		   else
		   {
		   	 printf("e is min");
		   }
		 
		 }
		 else
		 {
		 	if(d<e)
		 	{
		 		printf("D is min");
			}
			else
			{
			   printf("e is min");
			}
		 }
		
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("c is min");
				}
				else
				{
					printf("e is min");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is min");
				}
				else
				{
					printf("e is min");
				}
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("b is min");
				}
				else
				{
					printf("e is min");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is min");
				}
				else
				{
					printf("e is min");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("c is min");
				}
				else
				{
					printf("e is min");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is min");
				}
				else
				{
					printf("e is min");
				}
			}
		}
	}
}
