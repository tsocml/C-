#include<stdio.h>
#include<math.h>
void f(int num,int *count,int *sum);
int main(){
	int a,b,c;
	b = 0;
	c = 0;
	printf("Input an integer: ");
	scanf("%d",&a);
	a = fabs(a);
	f(a,&b,&c);
	printf("count=%d sum=%d",b,c);
}
void f(int num,int *count,int *sum){
	do{
		(*count)++;
		*sum = *sum + num % 10;
		num = num / 10;
	}while(num);
}
