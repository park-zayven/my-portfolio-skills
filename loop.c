#include <stdio.h>
    int main (){
       int start,end;
       printf("Enter start:");
       scanf("%d",&start);
       printf("Enter end:");
       scanf("%d",&end);
       for(int num=start;num<=end;num++){
        printf("\nTable of %d:\n",num);
        for(int i=1;i<=10;i++){
            printf("%d*%d=%d\n",num,i,num*i);
        }
       }
        return 0;
    }