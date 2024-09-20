#include<stdio.h>
main()
{
	int n1,n2,n3,sum;
	printf("Enter the number:");
	scanf("%d",&n1);
	
	n3 = n1 % 10;
	
	while(n1>=10){
		
		n1/=10;
	}
	n2=n1;
	sum = n2+n3;
	
	printf("the sum of firstdigit and lastdigit is: %d",sum);
}
