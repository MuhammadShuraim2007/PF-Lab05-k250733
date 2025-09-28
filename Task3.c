#include <stdio.h>

int main() {
    int x = 3, y = 4, z = 2;
     printf("x = %d, y = %d, z = %d\n\n", x, y, z);
     
    
   
    int step1 = y * z;
    printf("Step 1: y * z         = %d\n", step1);
    
    int step2 = x + step1;
    printf("Step 2: x + y*z       = %d\n", step2);
    
    int step3 = step2 > 10;     
    printf("Step 3: x + y*z > 10  = %d\n", step3);
     
    int step4 = x - z;
    printf("Step 4: x - z         = %d\n", step4);
     
    int step5 = step4 < y;
    printf("Step 5: x - z < y     = %d\n", step5);
    
    int step6 = step3 && step5;
    printf("Step 6: cond1 && cond2 = %d\n", step6);
    
    int step7 = y % z;          
    printf("Step 7: y %% z         = %d\n", step7);
     
    int step8 = !(step7);
    printf("Step 8: !(y %% z)     = %d\n", step8);
      
    int final_result = step6 || step8;
    printf("Final Result: %d || %d = %d\n", step6, step8, final_result);

    return 0;
}
