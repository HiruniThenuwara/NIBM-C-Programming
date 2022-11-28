#include<stdio.h>
int main() {
float num1;
float num2;
char Operator;
float tot;

printf("Enter num1\n");
scanf("%f",& num1);
printf("Enter Mathematical Operator(+,-,*,/)   :\n");
scanf("%s",& Operator );
printf("Enter num2\n");
scanf("%f",& num2);
switch (Operator){
case'+':
	tot=num1+num2;
	break;
case'-':
	tot=num1-num2;
	break;
case'*':
	tot=num1*num2;
	break;
case'/':
	tot=num1/num2;
	break;
default:
	printf("Invalid Operator\n");
	return 0;
	break;
		
}
printf("Answer is :%f\n",tot);
return 0;
}