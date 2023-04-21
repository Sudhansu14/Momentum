#include<stdio.h>

main()
{
	int unit,elc_bill,sr,total;
	printf("enter elc_unit=");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		elc_bill=unit*0.50;
		printf("ele_bil=%d",elc_bill);
    }
    else if(unit<=150)
    {
    	elc_bill=(unit-50)*0.75+25;
    	printf("ele_bill=%d",elc_bill);
	}
    else if(unit<=250)
    {
    	elc_bill=(unit-150)*1.20+100;
    	printf("elc_bill=%d",elc_bill);
	}
	else if(unit<=250)
	{
		elc_bill=(unit-250)*1.50+150;
		printf("elc_bill=%d",elc_bill);
	}
	

		sr=elc_bill*0.20;
		total=elc_bill+0.2;
		printf("total=%d",total);
	
}


