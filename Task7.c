#include <stdio.h>
int main() {
float attendance;
char midresult, fee;

printf("Enter your attendance percentage: ");
scanf("%f", &attendance);
if (attendance < 75.0) {
printf("You are not eligible to appear in the Final Exam due to low
attendance.\n");
return 0;
}
printf("Enter the report of mid exam (P for Pass, F for Fail): ");
scanf(" %c", &midresult);
if (midresult == 'F' || midresult == 'f') {
printf("You are not eligible to appear in the Final Exam due to midterm
exam failure.\n");
return 0;
}
// Ask if exam fee is paid
printf("Have you paid the exam fee?: ");
scanf(" %c", &fee);
if (fee == 'Y' || fee == 'y') {

printf("You are eligible for the Final Exam.\n");
} else {
printf("Please clear your fees to appear in the Final Exam.\n");
}
return 0;
}
