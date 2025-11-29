#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "bankacc.h"

struct Account*accounts = NULL;
int totalaccount=0; 

void accountcreate(){
    int num;
    printf("Enter a number account that should be created:");
    scanf("%d",&num);
    if(num<=0){
        printf("number must be positive\n");
        return;
    }
    accounts = (struct Account*)malloc(sizeof(struct Account)*num);
    if(accounts == NULL){
        printf("Memory allocation failed\n");
        return;
    }
    totalaccount = num;
    for (int i = 0; i < num; i++) {
        printf("\n details for account %d:\n", i + 1);
        printf("enter account number ");
        scanf("%d", &accounts[i].accno);
        int c;
        while((c=getchar()) != '\n' && c != EOF);


        printf("enter account holder name: ");
        scanf("%[^\n]s", accounts[i].name);
        printf("enter account balance: ");
        scanf("%f", &accounts[i].balance);
        printf("enter interest rates: ");
        scanf("%f", &accounts[i].rates);
        
    }
    printf("all accounts created successfully\n");
    
}
 

