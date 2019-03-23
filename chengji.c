#include<stdio.h>
int main(){
	int a,i;
	for(i = 0;i < 5;i++){
		printf("Enter grade: ");
		scanf("%d",&a);
		if(a >= 60){
			printf("Pass\n");
		}
		else{
			printf("Fail\n");
		}
	}
}
