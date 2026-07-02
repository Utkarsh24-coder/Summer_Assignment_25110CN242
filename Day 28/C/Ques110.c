#include <stdio.h>

int main() {
    char name[50];
    int accNo, choice;
    float balance = 0, amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    do {
        printf("\n===== BANK MENU =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposit Successful!\n");
            break;

        case 2:
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if(amount <= balance) {
                balance -= amount;
                printf("Withdrawal Successful!\n");
            }
            else {
                printf("Insufficient Balance!\n");
            }
            break;

        case 3:
            printf("Current Balance = %.2f\n", balance);
            break;

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}