#include<stdio.h>
main() {
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	if(num%2==0){
		printf("Even number\n");
	}
	else{
		printf("Odd number\n");
	}
	return 0;
}