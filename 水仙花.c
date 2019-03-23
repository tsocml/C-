#include<stdio.h>
int main(){
	int m, n, a, b, c;
	printf("input m: ");
	scanf("%d", &m);
	printf("input n: ");
	scanf("%d", &n);
	for(m;m<n;m++)
	{
		a = m / 100;
		b = m / 10 % 10;
		c = m % 10;
		if(a * a * a + b * b * b + c * c * c == m){
			printf("%d\n",m);
		}
		else{
			continue;
		}

	}

}
