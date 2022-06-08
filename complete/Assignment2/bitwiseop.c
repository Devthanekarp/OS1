#include<stdio.h>
int main()
{
	int a=20,b=78;
	int and,or,leftshift,rightshift,abar;
	and=a & b;//
	rightshift=a >> b;
	leftshift=a << b;
	or=a | b;
	
	printf("%d\n",and);
	printf("%d\n",or);
	printf("%d\n",rightshift);
	printf("%d\n",leftshift);
	return 0;
}
