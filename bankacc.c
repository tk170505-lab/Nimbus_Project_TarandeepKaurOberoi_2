#include <stdio.h>
#include <stdlib.h>
#include "bankacc.h"

int findacc(int accNum) {
    int pos = 0;
    while (pos < totalaccount) {
        if (accounts[pos].accno == accNum) {
            return pos;
        }
        pos++;
    }
    return -1;
}
void deposit() {
    int accNum, pos;
    float depAmt;
    printf("\nEnter the account number: ");
    scanf("%d", &accNum);
    pos = findacc(accNum);
    if(pos == -1){
        printf("Sorry,that account doesn't exist!\n");
        return;
    }
    printf("Enter deposit amount: ");
    scanf("%f", &depAmt);

    if(depAmt<=0){
        printf("Deposit amount must be greater than zero!\n");
        return;
    }
    accounts[pos].balance += depAmt;
    printf("Deposit successful! New Balance: %.2f\n", accounts[pos].balance);
}
void withdraw() {
    int accNum,pos;
    float wdAmt;
     printf("\nEnter account number: ");
   scanf("%d", &accNum);

    pos = findacc(accNum);
    if (pos == -1) {
        printf("Account not found!\n");
        return;
}
printf("Enter withdrawal amount: ");
scanf("%f",&wdAmt);

    if (wdAmt <= 0 || wdAmt > accounts[pos].balance){
        printf("Invalid amount or insufficient balance!\n");
        return;
    }
    accounts[pos].balance -= wdAmt;
    printf("Withdrawal successful! Remaining Balance: %.2f\n", accounts[pos].balance);
}
void checkBalance(){
    int accNum,pos;

    printf("\nEnter account number: ");
    scanf("%d", &accNum);
    pos = findacc(accNum);
    if (pos == -1) {
        printf("Account does not exist!\n");
        return;
    }
    printf("Account Name: %s\n", accounts[pos].name);
    printf("Current Balance: %.2f\n",accounts[pos].balance);
}