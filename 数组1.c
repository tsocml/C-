#include <stdio.h>
#include<string.h>
#define N 10
int a(int score[]){
    int i, sum;
    sum = 0;
    for(i = 0;i <= 9;i++){
        sum += score[i];
    }
    return sum;
}
int b(int score[]){
    int i,max;
    max = score[0];
    for(i = 0;i <= 8;i++){
        if(score[i] > max){
            max = score[i];
        }
    }
    return max;
}
int c(int score[]){
    int i,min;
    min = score[0];
    for(i = 0;i <= 8;i++){
        if(score[i] < min){
            min = score[i];
        } 
      
    }
      return min;
}
int d(int score[]){
    int i,sum,sum1;
    sum = 0;
    for(i = 0;i <= 9;i++){
        sum += score[i];
        sum1 = sum / 10;
    }
    return sum1;
}
int e(int score[]){
    int j,i,sum;
    for(j = 8;j>=0;j--){
            for(i = 0;i <= j;i++){
                if(score[i]>score[i+1]){
                 sum = score[i];
                 score[i] = score[i+1];
                score[i+1] = sum;
        }
      }
    }
}
int main()
{
    int i;
    int score[N]={67,98,75,63,82,79,81,91,66,84};
    printf("%d\n",a(score));
    printf("%d\n",b(score));
    printf("%d\n",c(score));
    printf("%d\n",d(score));
    e(score);
    for(i=0;i<=9;i++){
        printf("%d ",score[i]);
    } 
}
