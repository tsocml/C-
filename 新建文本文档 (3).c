#include<stdio.h>
int main(){
	int a,b,c,d,n;
	c = 1;
	n = 2;
	printf("enter a,b:");
	scanf("%d%d",&a,&b);
	if(a >= b){
		a = a;
		b = b;
	}
	else{
		d = a;
		a = b;
		b = d;
	}
	while(n < b){
		if(a % n == 0 && b % n == 0){
			a = a / n;
			b = b / n;
			c = c * n;
		}
		else{
			n = n + 1;
		}		
	}
	printf("%d",c);  	
}
