#include<stdio.h>
int main(){
	int a, b, c, d, e, f;
	printf("Enter a number:");
	scanf("%d",&a);
	b = ((a / 1000) + 9) % 10;
	c = ((a / 100) % 10 + 9) % 10;
	d = ((a / 10) % 10 + 9) % 10;
	e = (a % 10 + 9) % 10;
	f = d * 1000 + e * 100 + b * 10 + c;
	printf("The encrypted number is %d\n",f);
} 
