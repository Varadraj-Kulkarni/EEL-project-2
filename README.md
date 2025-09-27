PROJECT 2 

NAME: Varadraj Kulkarni
ROLL NO: 127 (PRN: B25CE1127)
CLASS: FY CE 2
BATCH: C

AIM: To create a C program using control structures similar to theme: Displaying grades and average of first year undergraduate students.

RESEARCH:
ideas:
Educational Programs: A university might require applicants to have passed their 10+2 exams with a minimum percentage and have no backlogs, according to the institution's specific criteria. 

Startup Funding: An incubator program may look for innovative and scalable business ideas, financial support received to date, or specific domicile status. 

Loan Applications: For a business loan, criteria might include a minimum operational history, annual revenue, and a sound financial standing.
 
Job Recruitment: Candidates must have a minimum of 3 years of relevant experience, a bachelor’s degree in a related field, and proficiency in specific software tools. No prior criminal record and must be legally authorized to work in the country. 

Housing Rentals: Applicants must demonstrate a steady income that is at least three times the monthly rent, provide references from previous landlords, and have a clean credit history. No pets allowed or pet size restrictions might apply.

PROJECT:  loan eligibility check system.
Loan applications are a critical aspect of financial systems, helping individuals and businesses access funds to meet personal or professional needs. Financial institutions typically use eligibility criteria to reduce the risk of defaults. These criteria may include:
Annual Income/Revenue: Ensures the applicant has sufficient means to repay the loan.
Operational Years (for businesses): Confirms business stability and sustainability.
Credit Score: Reflects the applicant’s past financial behavior and repayment reliability.


Simulating a loan eligibility process in C provides an opportunity to apply control structures (if-else conditions) to real-world problems. It demonstrates how logical decision-making in finance can be represented using programming logic, bridging concepts of economics, finance, and technology.

ANALYSIS:
To replicate a loan eligibility check in a beginner-level C program, we need to define key thresholds:
Annual Income → must be above a minimum limit (e.g., ₹5,00,000).
Years of Business Operation → should meet a minimum (e.g., 2 years).
Credit Score → should be higher than a threshold (e.g., 650).


The program will take these inputs from the user, compare them against thresholds, and analyze eligibility:
If all criteria are met, the applicant is “Eligible for Loan.”
If any one of the conditions fails, the applicant is “Not Eligible.”


This decision-making closely resembles real-world banking systems but is simplified for a beginner programming context.

IDEATE:
 Possible variations of the project could include:
Personal Loan Eligibility
Inputs: Monthly income, credit score, employment status.
Output: Eligible / Not Eligible.


Business Loan Eligibility (Selected for project)
Inputs: Annual revenue, operational years, credit score.
Output: Eligible / Not Eligible.


Student Loan Eligibility
Inputs: Academic score percentage, guarantor availability, no existing defaulted loans.
Output: Eligible / Not Eligible.
Chosen Project: Business Loan Eligibility Check
Provides multiple inputs for analysis.
Demonstrates real-life financial decision-making logic.
Offers clear “Yes/No” eligibility outcome, making it ideal for a beginner-level program.

BUILD:
The program was developed in the C language due to its wide use in system-level programming and simplicity in handling conditional structures.
 Steps followed in building the program:
Input collection:
Annual income (ann_inc)
Years of business operation (time_busns)
Credit score (crdt_scr)


Eligibility check:
If annual income ≥ ₹5,00,000
If years of operation ≥ 2
If credit score ≥ 650


Only if all conditions are met, the applicant is declared “Eligible for Loan.”


User choice:
If eligible, the applicant can choose to proceed (choice == 1) or decline (choice == 0).


Loan calculation (Simple Interest):
Interest rate fixed at 10% p.a.
Repayment time = 1 year
Formula:
Interest = (Principal × Rate × Time) / 100
Total Amount = Principal + Interest
Monthly Installment = Total Amount / 12


Output:
Displays eligibility result.
Shows total repayment and per-month installment if loan is taken.

TESTING:
Code:
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




IMPLIMENTATION:
The program can be implemented in a real-world banking simulation for basic eligibility screening before passing applications to detailed processing systems. It demonstrates:
How simple conditions can filter applicants.
How loan repayment details can be quickly computed.
The practical use of conditional logic and arithmetic in decision-making software.                                                                                    
Github link:  https://github.com/Varadraj-Kulkarni/EEL-project-2/blob/2724f3d5f73b3c6e282735559ba4d4c2cc0a104e/project2.c

CONCLUSION:
This project successfully simulates a Business Loan Eligibility System using C programming. By accepting inputs such as annual income, years of operation, and credit score, the program applies conditional logic to determine eligibility. If eligible, it further calculates total repayment and monthly installments based on simple interest.
This demonstrates how fundamental control structures and arithmetic in C can be used to model real-world financial decision-making, making it a beginner-friendly yet practical project. 

SOURCES:
Reserve Bank of India – Loan Guidelines
Investopedia – Loan Eligibility and Credit Score Basics
TutorialsPoint – C Programming Basics
GeeksforGeeks – Control Structures in C




