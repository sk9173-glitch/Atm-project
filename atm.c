#include <stdio.h>

int main() {

    int create_pin;
    int enter_pin;
	int choice;
	float balance=25000;
	float amount;
    printf("=========crete pin=======\n");
    printf("create you pin: ");
    scanf("%d" ,&create_pin);
    printf("PIN Created succufuly!\n");


    printf("=========ATM LOGIN=======\n");
    printf("enter you pin: ");
    scanf("%d" ,&enter_pin);
    if(enter_pin == create_pin)
    {
        printf("\npin correct! acces granted:\n");
    
        
    
    
	printf("==========ATM MACHINE=============\n");
	printf("1: Check Balance\n");
	printf("2: Deposit Money\n");
	printf("3: Withdraw money\n");
	printf("4: Exit\n");
	
	printf("Enter Your Choise\n");
	scanf("%d" ,&choice);
	switch(choice)
	{
	    case 1:
	    printf("your balance is %.2f\n" ,balance);
	    break;
	    
	    case 2:
	    printf("Enter Your Deposit\n");
            scanf("%f" ,&amount);
	    balance=balance+amount;
	    printf("Money Deposit Succesfully\n");
	    printf("New balance  = %.2f\n" ,balance);
	    break;
	    case 3:
	    printf("Enter Withdrawal amount: ");
	    
	    
	    
	    scanf("%f" ,&amount);
	    if(amount<=balance)
	    {
	        balance=balance-amount;
	        printf("plese collect your money\n");
	        printf("Remening Balance.%.2f" ,balance);
	        
	    }
	    else
	    {
	        printf("Insufficiant balance.\n");
	        
	    }
	    break;
	    case 4:
	    printf("thank you for using atm.\n");
	    break;
	    default:
	    printf("invalid choise.\n");
	}
    }
    else
    {
        printf("incorrect! ,plese enter correct pin");
    }
    
        
	return 0;
}
