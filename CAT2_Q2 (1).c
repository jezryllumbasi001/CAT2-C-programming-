/*
NAME:JEZRYL LUMBASI 
REG NO:CT101/G/26464/25
DATE:6/11/2025
DESCRIPTION:CAT 2 QUESTION 2
*/
#include <stdio.h>

int main() {
    float hours, rate, grossPay, tax, netPay;
    float overtimeHours, regularPay, overtimePay;

    // Input from user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay
    if (hours > 40) {
        overtimeHours = hours - 40;
        regularPay = 40 * rate;
        overtimePay = overtimeHours * rate * 1.5;
        grossPay = regularPay + overtimePay;
    } else {
        grossPay = hours * rate;
    }

    // Calculate taxes
    if (grossPay <= 600)
        tax = grossPay * 0.15;
    else
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);

    // Calculate net pay
    netPay = grossPay - tax;

    // Output results
    printf("\nGross Pay: $%.2f", grossPay);
    printf("\nTaxes: $%.2f", tax);
    printf("\nNet Pay: $%.2f\n", netPay);

    return 0;
}