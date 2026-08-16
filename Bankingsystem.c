#include <stdio.h>
int balance= 1000;

void deposit(){
    int amount;
    printf("Enter Deposit amount:");
    scanf("%d",&amount);
    if(amount<= 0){
        printf("INVALID DEPOSIT AMOUNT!\n");
    }
    else{
        balance=balance+amount;
    printf("DEPOSITED SUCCESSFULLY!\n");
    }
    printf("\nNEW BALANCE= %d\n",balance);
}
void withdraw(){
    int amount;
    printf("Enter Withdraw amount:");
    scanf("%d",&amount);
    if(amount<=0){
        printf("INVALID WITHDRAW AMOUNT!\n");
    }
    else{
        balance=balance-amount;
        printf("WITHDRAW SUCCESSFIUL!\n");
    }
    printf("\nNEW BALANCE= %d\n",balance);
}
void checkBalance(){
    printf("CURRENT BALANCE= %d\n",balance);
}
int main(){
    int choice;
    while(1){
        printf("\n=====BANK MENU=====\n");
        printf("1.DEPOSIT\n");
        printf("2.WITHDRAW\n");
        printf("3.CHECK BALANCE\n");
        printf("4.EXIT\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            deposit();
            break;
            case 2:
            withdraw();
            break;
            case 3:
            checkBalance();
            break;
            case 4:
            printf("THANK YOU FOR USING OUR SYSTEM!\n");
            return 0;
            default:
            printf("INVALID CHOICE!\n");
        }
    }
    return 0;
}