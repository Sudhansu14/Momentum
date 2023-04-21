# include<stdio.h>

main()
{
	
	char ch;
	printf("enter your value=");
	scanf("%c",&ch);
	
	if(ch>='A'  &&  ch<='Z')
	{
		printf("%c is Captial Alphabet");
	}
	else if(ch>='a'  &&  ch<='z')
	{	
	    printf("%c is smaller Alphabet");
    }
    else if(ch>='0'  &&  ch<='9999')
    {
    	printf("%c no.is digital");
	}
    else 
    {
    	printf("%c no. is special");
	}
}
