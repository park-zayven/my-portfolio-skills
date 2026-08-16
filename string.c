#include <stdio.h>
#include <math.h>
void inputmarks(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void showmarks(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("Show marks:%d\n",arr[i]);
    }
}
int findmax(int arr[],int n){
    int max=*arr;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
float findaverage(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum/(float)n;
}
void addbonus(int *arr,int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]+5;
        if(arr[i]>100){
            arr[i]=100;
        }
    }
}
int main(){
    int marks[5],choice;
    while(1){
    printf("=====Menu=====\n");
    printf("1. Input Marks\n");
    printf("2. Show Marks\n");
    printf("3. Find Max\n");
    printf("4. Average\n");
    printf("5. Add Bonus\n");
    printf("6. Exit\n");
    printf("Enter Number:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        inputmarks(marks,5);
        break;
    case 2:
        showmarks(marks,5);
        break;
    case 3:
        printf("%d",findmax(marks,5));
        break;
    case 4:
        printf("%.2f\n",findaverage(marks,5));
        break;
    case 5:
        printf("Bonus added successfully\n");
        break;
    case 6:
        printf("Exit");
        return 0;
    default:
        printf("Invalid operator");
        break;
        }
    }
    return 0;
}