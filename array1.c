#include <stdio.h>
int main(){
    int arr[5];
    int sum=0;
    float avg;
    //input
    for(int i=0;i<5;i++){
        printf("Enter number:");
        scanf("%d",&arr[i]);
    }
    //sum 
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    //avg
     avg=sum/5;
     printf("sum= %d\n",sum);
     printf("avg= %.2f\n",avg);

     return 0;
}