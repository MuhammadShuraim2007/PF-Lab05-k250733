
#include <stdio.h>

int main() {
    char signal;
    int hour;

    printf("Enter traffic signal (R/Y/G): ");
    scanf(" %c", &signal); 

    printf("Enter current hour in 24-hour format: ");
    scanf("%d", &hour);

    if (hour < 0 || hour > 23) {
        printf("Invalid time. Please enter an hour between 0 and 23.\n");
        return 1;
    }

    switch(signal) {
        case 'R':
        case 'r': 
            if (hour < 22) {
                printf("Stop and wait\n");
            } else {
                printf("Stop, but night caution allowed\n");
            }
            break;

        case 'Y':
        case 'y':
            printf("Get Ready\n");
            break;

        case 'G':
        case 'g':
            printf("Go\n");
            break;

        default:
            printf("Invalid Signal\n");
            break;
    }

    return 0;
}
