#include<stdio.h>
int main(){
	int t1, t2, a, b ,c, d, e, f;
	printf("Enter time1:");
	scanf("%d",&t1);
	printf("Enter time2:");
	scanf("%d",&t2);
	a = t1 % 100;
	b = t2 % 100;
	c = t1 / 100;
	d = t2 / 100;
	if(t1 < t2){
		if(b > a){
		e = d - c;
		f = b - a;
		printf("The train journey time is %d hours %d minutes\n", e, f);
	}
	else if(b < a){
		e = d - c - 1;
		f = 60 + b - a;
		printf("The train journey time is %d hours %d minutes\n", e, f);
	}
	else{
		e = d - c;
		f = 0;
		printf("The train journey time is %d hours %d minutes\n", e, f);
	}
	
	}

	else{
		if(b > a){
		e = c - d - 1;
		f = 60 - b + a;
		printf("The train journey time is %d hours %d minutes\n", e, f);
	}
	else if(b = a){
		e = c - d;
		f = 0;
		printf("The train journey time is %d hours %d minutes\n", e, f);
	}
	else{
		e = c - d;
		f = a - b;
		printf("The train journey time is %d hours %d minutes\n", e, f);
	}

	}
}

