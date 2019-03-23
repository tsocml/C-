#include<stdio.h>
int factorsum(int a){
	int counter,sum;
	sum = 0;
	if(a == 1){
		return a;
	}
	for(counter = 1;counter < a;counter++){
		if(a % counter == 0){
			sum += counter;
		}
	}
	return sum;
}
int main(){
	int m,n,d,i;
	printf("input m: ");
	scanf("%d",&m);
	printf("input n: ");
	scanf("%d",&n);
	if(m < n){
		m = m;
		n = n;
	}
	else{
		d = m;
		m = n;
		n = d;
	}
	for(i = m;i <= n;i++){
		if(factorsum(i) == i){
			printf("%5d",i);
		}
	}
}
