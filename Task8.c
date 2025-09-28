
#include <stdio.h>

int main() {
    char section;
    char size;
    char type;
    float total = 0, price = 0, discount = 0;
    int quantity;

    printf("Choose among Burger, Ice-cream, and Coffee (B/I/C): ");
    scanf(" %c", &section);

    if(section == 'C' || section == 'c') {
        printf("Coffee order handled in this section\n");
    } else {
        printf("Their order will be handled by that section\n");
        return 1;
    }

    printf("Choose the size of your coffee (s/m/l): ");
    scanf(" %c", &size);

    switch(size) {
        case 's':
            price = 100;
            printf("Small 100/-\n");
            break;

        case 'm':
            price = 200;
            printf("Medium 200/-\n");
            break;

        case 'l':
            price = 250;
            printf("Large 250/-\n");
            break;

        default:
            printf("Invalid size\n");
            return 1;
    }

    printf("Enter the quantity of coffee: ");
    scanf("%d", &quantity);

    total = price * quantity;
    
    if(quantity >= 5 && quantity < 10){
        discount = total * 0.05;
        printf("You have 5%% discount on your total bill.\n");
    } else if (quantity >= 10){
        discount = total * 0.10;
        printf("You have 10%% discount on your total bill.\n");
    } else {
        printf("You have no discount.\n");
    }

    printf("Enter the coffee type - Regular (r), Cappuccino (c), Latte (l): ");
    scanf(" %c", &type);
    printf("Coffee Type   : ");
    switch(type) {
        case 'r': printf("Regular\n"); break;
        case 'c': printf("Cappuccino\n"); break;
        case 'l': printf("Latte\n"); break;
        default: printf("Unknown Type\n");
    
    }
    
    printf("\n--- FINAL BILL ---\n");
    float finalBill = total - discount;

  
    printf("Size          : %c\n", size);
    printf("Quantity      : %d\n", quantity);
    printf("Price/cup : %.2f\n /-", price);
    printf("Total         : %.2f/- \n", total);
    printf("Discount      : %.2f/- \n", discount);
    printf("Final Bill    : %.2f-/ \n", finalBill);

    return 0;
}

