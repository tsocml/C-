#include<stdio.h>
#include<math.h>
#include<complex.h>
int main(){
	float a,b,c,d,x1,x2,p,q;
	printf("������һԪ���η���ax^2 + bx + c = 0��a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	d = b * b - 4 * a * c;
	p = -b / (2 * a);
	q = sqrt(-d);
	if(d > 0){
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		printf("�÷��̵�������Ϊ��%.2f %.2f",x1,x2);
	}
	else if(d < 0){
		x1 = p + q * _Complex_I;
		x2 = p - q * _Complex_I;
		printf("x1 = %f + %fi x2 = %f + %fi",creal(x1),cimag(x1),creal(x2),cimag(x2));
	}
	else{
		x1 = -b / (2 * a);
		x2 = x1;
		printf("�÷��̵�������Ϊ��%.2f %.2f",x1,x2);
	}

} 
