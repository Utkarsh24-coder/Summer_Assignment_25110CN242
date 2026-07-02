/*This project is a simple Bank Management System built using the C programming language. It allows users to:

1) Create a new bank account
2)View account details
3)Deposit and withdraw money
4)Update account information
5)Delete an account
6)Secure access using PIN

The system uses file handling to store account records in a text file, ensuring data persistence even after the program is closed.*/

/*--------------------------------ABC BANK MANAGEMENT SYSTEM-------------------------------------------*/ 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//Creating a Structure
struct Account
{
    int ano;
    char name[50];
    float balance;
    int pin;
};

void Start(void);   //Defining Functions
void Services(void);
void New_Account(void);
void Account_Details(void);
void Deposit_Money(void);
void Withdraw_Money(void);
void Check_Balance(void);
void Update_Pin(void);
void Login_User(void);
void Exit(void);
void Delete_User(void);

int main()
{
    Start();
    return 0;
}

void Start(void)
{
    int Ch;
    printf("\nHELLO AND WELCOME TO ABC BANK MANAGEMENT SYSTEM\n");
    printf("\n1) Login User\n2) Create New Account\n3) Exit\n");
    scanf("%d", &Ch);
    printf("Loading."); //Loadbar....
    for (int i = 0; i <= 10; i++)
    {
        printf("-");
        Sleep(100);
    }
    printf("\n");

    if (Ch == 1)
        Login_User();
    else if (Ch == 2)
        New_Account();
    else
        exit(0);
}

void New_Account(void)
{
    FILE *fp;
    struct Account acc;

    printf("\nEnter 4 digit Account No: ");
    scanf("%d", &acc.ano);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    printf("Enter 4 digit PIN: ");
    scanf("%d", &acc.pin);

    acc.balance = 0;

    fp = fopen("accounts.txt", "a");//Opening A file for adding data
    if (fp == NULL)
    {
        printf("File error!\n");
        return;
    }

    fprintf(fp, "%d %s %.2f %d\n",
            acc.ano, acc.name, acc.balance, acc.pin);

    fclose(fp);

    printf("\nAccount Created Successfully!\n");
    
    printf("\nThank you For Using Our Service.\n");
    printf("\n============================================================================\n");
    Start();
}

void Login_User(void)
{
    int an, pin;
    struct Account acc;
    FILE *fp;
    int found = 0;

    printf("\nEnter Account No: ");
    scanf("%d", &an);

    printf("Enter four digit PIN: ");
    scanf("%d", &pin);

    fp = fopen("accounts.txt", "r");
    if (fp == NULL)
    {
        printf("File error!\n");
        return;
    }

    //Checking the Details of Customer
    while (fscanf(fp, "%d %s %f %d",
                  &acc.ano, acc.name, &acc.balance, &acc.pin) != EOF)
    {
        if (acc.ano == an && acc.pin == pin)
        {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
    {
        printf("\nInvalid Account or PIN!\n");
        Start();
        return;
    }

    printf("\nLogin Successful! Welcome %s\n", acc.name);
    Services();
}

void Account_Details(void)
{
    int an, found = 0;
    struct Account acc;
    FILE *fp;

    printf("\nEnter Account No: ");
    scanf("%d", &an);

    fp = fopen("accounts.txt", "r");
    if (fp == NULL)
        return;
    printf("Loading.");
    for (int i = 0; i <= 10; i++)
    {
        printf("-");
        Sleep(100);
    }
    printf("\n");


    while (fscanf(fp, "%d %s %f %d",
                  &acc.ano, acc.name, &acc.balance, &acc.pin) != EOF)
    {
        if (acc.ano == an)
        {
            printf("\nAccount No: %d", acc.ano);
            printf("\nName: %s", acc.name);
            printf("\nBalance: %.2f\n", acc.balance);
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Account not found!\n");
    printf("\nThank you For Using Our Service.\n");
    printf("\n============================================================================\n");
    Services();
    
}

void Deposit_Money(void)
{
    int an, pin, found = 0;
    float amount;
    struct Account acc;
    FILE *fp, *temp;

    printf("\nEnter Account No: ");
    scanf("%d", &an);

    printf("Enter Amount to Deposit: ");
    scanf("%f", &amount);

    printf("Enter four Digit PIN: ");
    scanf("%d", &pin);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
        Services();
        return;
    }

    fp = fopen("accounts.txt", "r");
    temp = fopen("temp.txt", "w");//Openinh a temprory file for Updating Money

    if (fp == NULL || temp == NULL)
        return;

    while (fscanf(fp, "%d %s %f %d",
                  &acc.ano, acc.name, &acc.balance, &acc.pin) != EOF)
    {
        if (acc.ano == an && acc.pin == pin)
        {
            acc.balance += amount;
            found = 1;
        }

        fprintf(temp, "%d %s %.2f %d\n",
                acc.ano, acc.name, acc.balance, acc.pin);
    }

    fclose(fp);
    fclose(temp);

    if (!found)
    {
        printf("Invalid Account or PIN!\n");
        remove("temp.txt");
        Services();
        return;
    }

    remove("accounts.txt");//Removing Old File
    rename("temp.txt", "accounts.txt");//Changing Name of temp file

    printf("Deposit Successful!\n");
    printf("\nThank you For Using Our Service.\n");
    printf("\n============================================================================\n");
    Services();
}

void Withdraw_Money(void)
{
    int an, pin, found = 0;
    float amount;
    struct Account acc;
    FILE *fp, *temp;

    printf("\nEnter Account No: ");
    scanf("%d", &an);

    printf("Enter Amount to Withdraw: ");
    scanf("%f", &amount);

    printf("Enter four digit PIN: ");
    scanf("%d", &pin);

    fp = fopen("accounts.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
        return;

    while (fscanf(fp, "%d %s %f %d",
                  &acc.ano, acc.name, &acc.balance, &acc.pin) != EOF)
    {
        if (acc.ano == an && acc.pin == pin)
        {
            if (acc.balance >= amount)
            {
                acc.balance -= amount;
                found = 1;
            }
            else
            {
                printf("Insufficient Balance!\n");//Checking for Zero or negative balance
            }
        }

        fprintf(temp, "%d %s %.2f %d\n",
                acc.ano, acc.name, acc.balance, acc.pin);
    }

    fclose(fp);
    fclose(temp);

    if (!found)
    {
        remove("temp.txt");
        Services();
        return;
    }

    remove("accounts.txt");
    rename("temp.txt", "accounts.txt");

    printf("Withdraw Successful!\n");
    printf("\nThank you For Using Our Service.\n");
    printf("\n============================================================================\n");
    Services();
}

void Check_Balance(void)
{
    int an, found = 0;
    struct Account acc;
    FILE *fp;

    printf("\nEnter Account No: ");
    scanf("%d", &an);

    fp = fopen("accounts.txt", "r");
    if (fp == NULL){
        printf("Error Opening File");

        return;
    }
    printf("Loading");
    for (int i = 0; i <= 10; i++)
    {
        printf("-");
        Sleep(100);
    }
    printf("\n");

    while (fscanf(fp, "%d %s %f %d",
                  &acc.ano, acc.name, &acc.balance, &acc.pin) != EOF)
    {
        if (acc.ano == an)
        {
            printf("Account No:%n", acc.ano);
            printf("\nBalance: %.2f\n", acc.balance);
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Account not found!\n");
    printf("\nThank you For Using Our Service.\n");
    printf("\n============================================================================\n");
    Services();
}

void Update_Pin(void)
{
    int an, oldPin, newPin, found = 0;
    struct Account acc;
    FILE *fp, *temp;

    printf("\nEnter Account No: ");
    scanf("%d", &an);

    printf("Enter Old PIN: ");
    scanf("%d", &oldPin);

    printf("Enter New 4-digit PIN: ");
    scanf("%d", &newPin);

    fp = fopen("accounts.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
        return;

    while (fscanf(fp, "%d %s %f %d",
                  &acc.ano, acc.name, &acc.balance, &acc.pin) != EOF)
    {
        if (acc.ano == an && acc.pin == oldPin)
        {
            acc.pin = newPin;
            found = 1;
        }

        fprintf(temp, "%d %s %.2f %d\n",
                acc.ano, acc.name, acc.balance, acc.pin);
    }

    fclose(fp);
    fclose(temp);

    if (!found)
    {
        remove("temp.txt");
        printf("Invalid Account or PIN!\n");
        Services();
        return;
    }

    remove("accounts.txt");
    rename("temp.txt", "accounts.txt");

    printf("PIN Updated Successfully!\n");
    printf("\nThank you For Using Our Service.\n");
    printf("\n============================================================================\n");
    Services();
}

void Delete_User(void)
{
    int an, found = 0;
    struct Account acc;
    FILE *fp, *temp;

    printf("\nEnter Account No to Delete: ");
    scanf("%d", &an);

    fp = fopen("accounts.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
        return;

    while (fscanf(fp, "%d %s %f %d",
                  &acc.ano, acc.name, &acc.balance, &acc.pin) != EOF)
    {
        if (acc.ano == an)
            found = 1;
        else
            fprintf(temp, "%d %s %.2f %d\n",
                    acc.ano, acc.name, acc.balance, acc.pin);
    }

    fclose(fp);
    fclose(temp);

    remove("accounts.txt");
    rename("temp.txt", "accounts.txt");

    if (found)
        printf("Account Deleted Successfully!\n");
    else
        printf("Account Not Found!\n");
    printf("\nThank you For Using Our Service.\n");
    printf("\n============================================================================\n");
    Services();
}

void Services(void)
{
    int ch;

    printf("\n1) Account Details\n2) Deposit\n3) Withdraw\n4) Check Balance\n5) Update PIN\n6) Delete Account\n7) Exit\n");
    scanf("%d", &ch);
    printf("Loading.");
    for (int i = 0; i <= 10; i++)
    {
        printf("-");
        Sleep(100);
    }
    printf("\n");
    //Calling Each functions By Taking choice from user

    switch (ch)
    {
    case 1: Account_Details(); 
            break;
    case 2: Deposit_Money(); 
             break;
    case 3: Withdraw_Money(); 
            break;
    case 4: Check_Balance(); 
            break;
    case 5: Update_Pin(); 
            break;
    case 6: Delete_User(); 
            break;
    case 7: Start(); 
            break;
    default: Services();
    }
}


