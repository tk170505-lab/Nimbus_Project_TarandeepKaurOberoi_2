void interest(){
    int acc,index;
    float time,simple;
    printf("\nEnter account number:\n");
    scanf("%d",&acc);
    index= findacc(acc);
    if(index==-1){
        printf("Account not found.\n");
        return;
    }
    printf("Enter time in years: ");
    scanf("%f",&time);
    simple=(accounts[index].balance*accounts[index].rate*time)/100.0;
    printf("\nSimple Interest= %.2f\n",simple);
    printf("Total Ampunt after %.1f years=%.2f\n",time,accounts[index].balance+simple);
}