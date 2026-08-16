#include <stdio.h>
int maximum(int a,int b){
    if(a>b){
        return a;    }
    else{
        return b;
    }
}
int main(){
int a,b,result;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
result=maximum(a,b);
printf("Maximum= %d\n",result);
return 0;
}