//Name : umer javeed masoodi
//Roll-no : ECE-22-08

#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter the number of terms required: \n");
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
		printf("%d, ",i);
	}
	printf("%d.", n);
}
