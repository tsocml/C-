#include<stdio.h>
int main(){
	int year,month;
	scanf("%d%d",&year,&month);
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		printf("Leap year,");
	}
	else{
		printf("Common year,");
	}
	if(month >= 3 && month <= 5){
		printf("Spring,");
	}
	else if(month >= 6 && month <= 8){
		printf("Summer,");
	}
	else if(month >= 9 && month <= 11){
		printf("Fall,");
	}
	else if(month == 12 || month <= 2){
		printf("Winter,");
	}
	switch(month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 8:
	case 10:
	case 12:printf("31");
	break; 
	case 2:{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		    printf("29");
		  else
			printf("28"); 
        }break;
    default:printf("30");
	}
} 
