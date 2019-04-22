#include<stdio.h>
#include<math.h>
int f(int num);
int main(){
	int a,b;
	printf("Input an integer: ");
	scanf("%d",&a);
	a = fabs(a);
	b = f(a);
	printf("count=%d",b); 
}
int f(int num){
	int count = 0;
	do{
		count++;
		num = num / 10;
	}while(num);
	return count;
}
