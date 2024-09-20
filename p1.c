#include<stdio.h>
main()
{
	char alphabet = 'A';
	
	do{
		printf("%c ",alphabet);
		alphabet = alphabet+=4;
	}
	while(alphabet<='Z');
}
