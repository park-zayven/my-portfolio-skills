#include <stdio.h>
//function to find average
float findaverage(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return(float)sum/size;
}
//function to find maximum mark
int findmax(int arr[],int size) {
    int max = arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    return max;
}
//function to check pass/fail
void checkpassfail(int arr[],int size)
{
    printf("\n--- Result Status ---\n");
    for(int i=0;i<size;i++){
        if(arr[i]>=33) {
            printf("Student %d:Pass\n",i+1);
        }
        else {
            printf("Student %d:Fail\n",i+1);
        }
    }

}
int main() {
     int marks[5];
     //intput 
     printf("Enter marks of 5 students:\n");
     for(int i=0;i<5;i++) {
        printf("Student %d:",i+1);
        scanf("%d",&marks[i]);
     }
     //print all marks 
     printf("\n--- Student Marks ---\n");
     
     for(int i=0;i<5;i++){
        printf("Student %d= %d\n",i+1,marks[i]);
     }
     //average 
     float avg=findaverage(marks,5);
     printf("\nAverage=%.2f\n",avg);
     // Highest mark
     int highest=findmax(marks,5);
     printf("Highest Mark =%d\n",highest);
     //pass/fail
     checkpassfail(marks,5);
     return 0;
}