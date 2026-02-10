#include <stdio.h>

int main() {

printf("===================================================\n");
printf("\t\t\tFamily Monthly Budget Tracker\n");
printf("===================================================\n");

int monthlyIncome;
printf("Enter Total Monthly Income : $");
scanf("%d",&monthlyIncome);

printf("\n");

printf("=== Housing & Utilities ===\n");

int Rent;
printf("Enter Rent : $");
scanf("%d",&Rent);

int electricityBill;
printf("Enter Electricity Bill : $");
scanf("%d",&electricityBill);

int waterBill;
printf("Enter Water Bill : $");
scanf("%d",&waterBill);

int internetBill;
printf("Enter Internet Bill : $");
scanf("%d",&internetBill);

printf("\n");

printf("=== Food & Entertainment ===\n");

int grocery;
printf("Monthly Grocery Budget : $");
scanf("%d",&grocery);

int dining;
printf("Dining & Takeout : $");
scanf("%d",&dining);

int hobbies;
printf("Hobbies & Movies : $");
scanf("%d",&hobbies);

printf("\n");
printf("\n");


printf("===================================================\n");
printf("\t\t\tMonthly Financial Report\n");
printf("===================================================\n");

printf("Total Income:\t\t\t$%d.00\n",monthlyIncome);
printf("---------------------------------------------------\n");
printf("Housing (Rent):\t\t\t$%d.00\n",Rent);
printf("Utilities Total:\t\t$%d.00\n",electricityBill+waterBill+internetBill);
printf("Food & Dining Total:\t$%d.00\n",grocery+dining);
printf("Leisure Total:\t\t\t$%d.00\n",hobbies);

printf("===================================================\n");

int grandTotal = Rent+electricityBill+waterBill+internetBill+grocery+dining+hobbies;
int monthlySavings = monthlyIncome - grandTotal;
printf("Grand Total Expense:\t$%d.00\n",grandTotal);
printf("Monthly Savings:\t\t$%d.00\n",monthlySavings);
printf("===================================================\n");

int percentage = (int)(((float)Rent / monthlyIncome) * 100);
printf("Housing is %d%% of your Total Income\n",percentage);
printf("===================================================\n");
    return 0;
}