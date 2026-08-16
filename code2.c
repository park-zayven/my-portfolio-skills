#include <stdio.h>
#include <math.h>

int main (){ 
    int a,b,result=1;
    char op;

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Enter operator (+,-,*,/,%%,^):");
    scanf(" %c",&op);

    switch(op){
        case '+':
        printf("Result: %d",a+b);
        break;

        case '-':
        printf("Result: %d",a-b);
        break;

        case '*':
        printf("Result: %d",a*b);
        break;
        
        case '/':
            if(b !=0)
                printf("Result: %d",a/b);
            else
                printf("can not divide by zero");
        break;

        case '%':
        printf("Result: %d",a%b);
        break;

        case '^':
        result=1;
        for(int i=1;i<=b;i++){
            result=result*a;
        }
        printf("Result: %d",result);
        break;

        default:
        printf("Invalid operator");

    }
    return 0;
}
