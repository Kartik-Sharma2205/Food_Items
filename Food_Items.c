#include<stdio.h>
main()
{
	printf("What would you like to order sir ? \n 1. Pav Bhaji \n 2. Chole Bhature \n 3. Paneer Tikka \n 4. Jalebi Fafda \n 5. Palak ka Soup \n");
	printf("Please tell the Dish Number sir :");
	int Dish = 0 ;
	scanf("%d",&Dish);
	switch(Dish)
	{
		case 1 : printf("Pav Bhaji ");
		         break ;
		case 2 : printf("Chole Bhature");
		         break ;
		case 3 : printf("Paneer Tikka");
		         break ;
		case 4 : printf("Jalebi Fafda");
		         break ;
		case 5 : printf("Palak ka Soup ");
		         break ;
		default : printf("This Dish Number is Invalid sir");
	}
	return 0;
}
