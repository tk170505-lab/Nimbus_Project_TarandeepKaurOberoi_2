#ifndef BANKACC_H
#define BANKACC_H

struct Account {
    char name[100];
    float balance;
    float rates;
    int accno;
};

extern struct Account *accounts;
extern int totalaccount;

void accountcreate(void);
int findacc(int accNum);
void deposit(void);
void withdraw(void);
void checkBalance(void);
void interest(void);

#endif
