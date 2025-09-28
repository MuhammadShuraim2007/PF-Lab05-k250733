#include <stdio.h>

int main() {
    
    int pin = 1234;
    int actualBalance = 10000;
    int withdrawal;
    int remainigBalance;
    int userPin;
    
    printf("Enter the four digit pin: ");
    scanf("%d" , &userPin);
    
    if (pin >= 1000 && pin <= 9999) {
        printf("Valid 4-digit PIN.\n");
    } else {
        printf("Invalid PIN. It must be exactly 4 digits.\n");
    }
    
    if(userPin==pin){
        printf("PIN verified \n");
    } else {
        printf("In-valid pin\n");
        return 1;
    }
    
    printf("Enter the withdrawal amount: ");
    scanf("%d" , &withdrawal);
    
   
    if (withdrawal <= actualBalance) {
        remainigBalance = actualBalance - withdrawal;
        printf("Withdrawal successful \n");

        printf("\n---- Withdrawal Info ----\n");
        printf("Actual Balance   : %d\n", actualBalance);
        printf("Withdrawal Amount: %d\n", withdrawal);
        printf("Remaining Balance: %d\n", remainigBalance);
    } else {
        printf("Insufficient balance. Transaction failed.\n");
    }
    
    return 0;
}

