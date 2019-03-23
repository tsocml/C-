#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	float c,interest;
	printf(" Enter money,year and rate:");
	scanf("%d%d%f",&a, &b, &c);
	interest = a * pow((1 + c),b) - a;
	printf("interest=%.2f",interest); 
	
}
