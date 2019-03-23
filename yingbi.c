#include<stdio.h>
int main(){
	int x,y,z,n,sum;
	sum = 0;
	printf("input money: ");
	scanf("%d",&n);
	for(x = 1;x <= n;x++)
	for(y = 1;y <= n / 2;y++)
	for(z = 1;z <= n / 5;z++){
		if(x + 2 * y + 5 * z == n){
			sum++;
		}
	}
	printf("%d",sum);
} 
