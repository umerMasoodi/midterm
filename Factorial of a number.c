//Name : umer javeed masoodi
//Roll-no : ECE-22-08

#include<stdio.h>
int main()
{
	int i,n,fact =1 ;
	printf("Enter any number: \n");
	scanf("%d", &n);
	for(i=n;i>=1;i--)
	{
		fact*=i;
	}
	printf("Factorial of %d is %d.",n,fact);
}
