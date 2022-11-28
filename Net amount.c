#include<stdio.h>
main(){
	int unit;
	float amt;
	printf("Enter the units consumed:");
	scanf("%d",&unit);
	if(unit<=50){
		amt=unit*0.50;
	}else if (unit>100>50){
		amt=unit*0.75;
	}else if (unit>100){
		amt=unit*0.90;
	}
	float sc=amt*0.20;
	float na=amt+sc;
	printf("Net Amount :%f\n",na);
	return 0;
}