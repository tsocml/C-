#include<stdio.h>
int main(){
	int array[3]={35,56,37};  
    int *pa=array;  
    //通过指针pa 访问数组array 的三个单元的方法是：  
    printf("%d",*(pa + 1)); //访问了第0 号单元   
} 

