#include<stdio.h>
int main(){
	int array[3]={35,56,37};  
    int *pa=array;  
    //ͨ��ָ��pa ��������array ��������Ԫ�ķ����ǣ�  
    printf("%d",*(pa + 1)); //�����˵�0 �ŵ�Ԫ   
} 

