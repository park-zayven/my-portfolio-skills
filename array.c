#include <stdio.h>
int main(){
    int arr[6];
    int max;
    printf("Enter 5 numbers:");
    //input
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    //output 
    for(int i=0;i<5;i++){
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    printf("Maximum= %d",max);
    return 0;
}