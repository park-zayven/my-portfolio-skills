
        printf("\n-----BANK MENU-----\n");
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