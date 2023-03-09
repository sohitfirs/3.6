/* https://github.com/sohitfirs/3.6.git */

#include <stdio.h>
#include <cstdlib>

main()
{
	for(int a=1; a<11; a++)
	{
		printf("5*%i=%i\n", a, 5*a);
	}
	printf("\n");
	
	int x=0;
	while(x!=7)
	{
		scanf("%i", &x);
		if(x>7)
		{
			printf("bolshe x\n");
		}
		else if(x<7)
		{
			printf("menshe x\n");
		}
		
		if(x>10)
		{
			printf("bolshe 10\n");
		}
		else if(x<10)
		{
			printf("menshe 10\n");
		}
		
		if(x%2==0)
		{
			printf("delitsya na 2\n");
		}
		else
		{
			printf("ne delitsya na 2\n");
		}
		
		if(x%3==0)
		{
			printf("delitsya na 3\n\n");
		}
		else
		{
			printf("ne delitsya na 3\n\n");
		}
	}
	printf("vernoe chislo!\n");
	system("pause");
}
