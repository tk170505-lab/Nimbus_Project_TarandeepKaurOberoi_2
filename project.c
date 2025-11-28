void menu() {
    int choice;
    do {
        printf("\n   BANK MENU   \n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Evaluate Interest\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                accountcreate();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                interest();
                break;
            case 6:
                printf("Thank you for using Bank System! Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter 1-6.\n");
        }
    } while(choice != 6);
}

int main() {
    menu();
    
    if(accounts != NULL) {
        free(accounts);
        accounts = NULL;
    }
    
    return 0;
}
