#include<stdio.h>
main()
{
	int n1,n2=0;
	printf("Enter the number:");
	scanf("%d",&n1);
	
	while(n1!=0){
		n1=n1/10;
		n2++;
	}
	printf("Total number of digits: %d",n2);
}
