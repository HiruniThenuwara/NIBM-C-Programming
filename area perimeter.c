#include<stdio.h>
main() {
	int height;
	int width;
	int area;
	int perimeter;
	printf("Input height:");
	scanf("%d",& height);
	printf("Input width:");
	scanf("%d",&width);
	
	area=height*width;
	perimeter=2*(height+width);
	
	printf("Area:%d\n",area);
	printf("perimeter:%d\n",perimeter);
}