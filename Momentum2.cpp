#include<stdio.h>

main()
{
	char ch;
	printf("press S for Sunday");
	printf("\npress M for Monday");
	printf("\npress T for Tuesday");
	printf("\npress W for wednesday");
	printf("\npress t for thursday");
	printf("\npress F for Friday");
	printf("\npress s for saturday");
	printf("\nenter your choice");
	scanf("%c",&ch);
	switch(ch) 
	{
		
		case 'S':
    		   printf("Sunday");
    		   break;
    	case 'M':
		       printf("Monday");
		       break;
		case 'T':
		       printf("Tuesday");
		       break;
		case 'W':
		       printf("Wednesday");
		       break;
		case 't':
		       printf("thursday");
		       break;
		case 'F':
			   printf("Friday");
			   break;  	   	   	   	   
	   case 's':
	           printf("saturday");
	           break;
		default :
		         printf("Plz Enter valid Choice");         
			    	      
	}
	
}
