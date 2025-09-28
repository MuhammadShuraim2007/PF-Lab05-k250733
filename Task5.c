#include <stdio.h>
int main() {
float a , b ,c , x;
printf("Enter marks1: ");
scanf("%f" , &a);
printf("Enter marks2: ");
scanf("%f" , &b);
printf("Enter marks3: ");
scanf("%f" , &c);
x= (a>b && a>c) ? printf("a is greater among all") : (b>a && b>c) ?
printf("B is greatest of all") : printf("C is great");

return 0;
}
