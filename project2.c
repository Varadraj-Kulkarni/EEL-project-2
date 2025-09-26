#include <stdio.h>

int main() {
    
    float ann_inc, time_busns, crdt_scr, choice, ln_amt, total_amt, interest, amt_per_mo;
    
    printf("Welcome to ABC Bank!\nPlease enter the asked data to get a business loan.\n\n");
    printf("Please enter your annual income: ");
    scanf("%f", &ann_inc);
    
    printf("Please enter no. of Years of business operation: ");
    scanf("%f", &time_busns);
    
    printf("Please enter your credit score: ");
    scanf("%f", &crdt_scr);
    
    if (ann_inc>=500000 && time_busns>=2 && crdt_scr>=650) {
        printf("\nCongratulations! you are eligible for loan.\n\nOur bank provides loan at interest rate of 10% Per annum (simple interest) and total time to repay the amount is 1 year. If interested, please input below '1' otherwise '2'if not interested. \n\nInput: ");
        scanf("%f", &choice);
        if (choice==1) {
            printf("\nPlease enter loan amount: ");
            scanf("%f", &ln_amt);
            interest = (ln_amt*10*1)/100;
            total_amt = interest + ln_amt;
            amt_per_mo = total_amt/12;
            printf("Total amount to be paid is: %.2f and amount per month to pay is: %.2f", total_amt, amt_per_mo);
            printf("\nThank You for choosing our service.");
        }
        else if (choice==0) {
            printf("Thank you for showing interest! hope you come back again!");
        }
        else {
            printf("Please enter a valid input between 0 and 1.");
        }
    }
    else {
        printf("Sorry, you are not eligible for loan.\nPlease check eligibility criteria and come back again!");
    }
    return 0;
}
