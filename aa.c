#include<stdio.h>
int main(){
	int a,n,sum;
	sum = 0;
	printf("Input a, n: ");
	scanf("%d%d",&a,&n);
	while(n >= 0){
		sum += a*n;
		a = a*10;
		n--;
	}
	printf("s=%d",sum);
} 
