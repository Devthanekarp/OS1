#include<stdio.h>
int swap(int n,int m);
int main()
{
	int a,b,temp,Swap;
	printf("Enter the numbers for swapping!");
	scanf("%d %d",&a,&b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	Swap=swap(a,b);
	printf("a=%d\n",b);
	printf("b=%d",a);
	return 0;
}
int swap(int n,int m)
{
	int temp;
	temp=n;
	n=m;
	m=temp;
	
	return (n,m);

}
