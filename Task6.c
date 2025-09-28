#include <stdio.h>


void bin(int n) {
    for (int i = 7; i >= 0; i--)
        printf("%d", (n >> i) & 1);
}

int main() {
    int a, b;
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    
    int and = a & b;        
    int xor = a ^ b;
    int result = and | xor; 


    printf("\nBinary of a = %d (", a); bin(a); printf(")\n");
    printf("Binary of b = %d (", b); bin(b); printf(")\n\n");


    printf("Step 1: a & b      = %d (", and); bin(and); printf(")\n");
    printf("Step 2: a ^ b      = %d (", xor); bin(xor); printf(")\n");
    printf("Step 3: Final result = %d (", result); bin(result); printf(")\n");

    return 0;
}

