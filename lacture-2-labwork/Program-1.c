#include <stdio.h>
#include <conio.h>
main()
{
	int num1,num2,sum,sub,mul,div,mod;
	num1=12;
	num2=6;
	sum=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mod=num1%num2;
	printf("THE ADDITION OF %d + %d=%d\n",num1,num2,sum);
	printf("THE SUBTRATCION OF %d - %d=%d\n",num1,num2,sub);
	printf("THE MULTIPLICATION OF %d * %d=%d\n",num1,num2,mul);
	printf("THE DIVISION OF %d / %d=%d\n",num1,num2,div);
	printf("THE MODULE OF %d mod %d=%d\n",num1,num2,mod);
}
