#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int countdigit(char *number,int digit);
int main(){
	int num,b,len,digit = 2;
	char str[10];
	printf("Enter an integer: ");
	scanf("%d",&num);
	num = fabs(num);
	itoa(num,str,10);
	b = countdigit(&str,digit);
	printf("Number of digit 2: %d",b);
}
int countdigit(char *number,int digit){
	int len = strlen(number),count = 0,i,n;
	char c[1];
	itoa(digit,c,10);
	for(i = 0;i<=len;i++){
		n = number[i];
		if(n == c[0]){
		count = count + 1;
		}
	}
	return count;
}
