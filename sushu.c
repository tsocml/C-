#include<stdio.h>
#include<math.h>
int prime(int x){
	int i;
	for(i = 2;i <= (int)sqrt(x);i++)
		if(x % i==0)
			return 0;
	return 1;
}
void main(){
	int m,n,s,j;
	j = 0;
	printf("input m: ");
	scanf("%d",&m);
	printf("input n: ");
	scanf("%d",&n);
	if(n > 2){
		printf("%4d",2);
		j++;
	}
	for(s = 3;s <= n;s += 2)
		if(prime(s)){
			printf("%4d",s);
		    if(++j % 6 == 0)
			   printf("\n");
		 }
		printf("\n");
}

