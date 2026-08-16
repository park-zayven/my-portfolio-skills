#include <stdio.h>
void addStudent(int marks[],int *count){
    int n;
    printf("How many students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter marks of a studnet %d: ",*count+1);
        scanf("%d",&marks[*count]);
        (*count)++;
    }
}
void showStudent(int marks[],int count){
    if(count==0){
        printf("NO students added yet\n");
        return;
    }
        printf("\nStudents marks:\n");
        for(int i=0;i<count;i++){
            printf("student %d=%d\n",i+1,marks[i]);
        }
}
void findAverage(int marks[],int count){
    if(count==0){
        printf("No data added yet\n");
        return;
    }
        int sum=0;
        float average;
        for(int i=0;i<count;i++){
            sum=sum+marks[i];
        }
        average=(float)sum/count;
        printf("Average=%.2f\n",average);
}
void findMax(int marks[],int count){
    if(count==0){
        printf("No data added yet\n");
        return;
    }
    int max=marks[0];
    for(int i=0;i<count;i++){
        if(marks[i]>max){
            max=marks[i];
        }
    }
    printf("Highest Marks=%d\n",max);
}
void passfailCount(int marks[],int count){
    if(count==0){
        printf("No data added yet\n");
        return;
    }
    int pass=0,fail=0;
    for(int i=0;i<count;i++){
        if(marks[i]>=33){
            pass++;
        }
        else{
            fail++;
        }
    }
    printf("pass=%d\n",pass);
    printf("Fail=%d\n",fail);
}
int main(){
    int marks[100];
    int count=0;
    int choice;
    while(1){
        printf("\n=====Student managemant system=====\n");
        printf("1.ADD STUDENT MARKS\n");
        printf("2.SHOW ALL STUDENTS\n");
        printf("3.AVERAGE MARKS\n");
        printf("4.HIGHEST MARKS\n");
        printf("5.PASS/FAIL COUNT\n");
        printf("6.EXIT\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            addStudent(marks,&count);
            break;
            case 2:
            showStudent(marks,count);
            break;
            case 3:
            findAverage(marks,count);
            break;
            case 4:
            findMax(marks,count);
            break;
            case 5:
            passfailCount(marks,count);
            break;
            case 6:
            printf("program ended\n");
            return 0;
            default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}