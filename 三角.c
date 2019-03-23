#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float s,area, perimeter;
	printf("Enter 3 sides of the triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c){
		perimeter = (a + b + c);
		s = perimeter/2; 
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area=%.2f;",area);
		printf("perimeter=%.2f\n",perimeter);
		}
	else{
		printf("These sides do not correspond to a valid triangle");
	}
}
