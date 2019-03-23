#include<stdio.h>
int main(){
	float height,distance;
	int n;
	distance = 0;
	printf("input height: ");
	scanf("%f",&height);
	printf("input n: ");
	scanf("%d",&n);
	while(n > 0){
		distance = distance + height;
		height = height / 2;
		distance = distance + height;
		--n;
	}
	distance = distance - height;
	printf("distance=%.1f\nheight=%.1f",distance,height);
} 
