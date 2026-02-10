#include <stdio.h>

int main(void) {

// input starts
printf("****************************************\n");
printf("\t\tGLOBAL LOGISTIC TERMINAL\t\t\n");
printf("****************************************\n");

char uppercase;
printf("Enter Shipping Category (UPPERCASE LETTER) : ");
scanf(" %c",&uppercase);

int ship;
printf("Enter number of units to ship : ");
scanf("%d",&ship);

float unit,price,exchange;

printf("Enter weight per unit (kg) : ");
scanf("%f",&unit);
printf("Enter unit price (USD) : ");
scanf("%f",&price);
printf("Enter USD to EUR exchange rate : ");
scanf("%f",&exchange);

// input ends


//output starts 
printf("==========================================\n");
char lowercase = uppercase + 32;
printf("SHIPPING MANIFEST [Dept: %c]\n",lowercase);
printf("==========================================\n");

printf("Item Count:\t%d units\n",ship);
printf("Total Weight:\t$%f.000 kg\n",(ship*unit));

printf("------------------------------------------\n");
printf("Unit Price:\t\t%.2f\n",price);
printf("Exchange Rate:\t\t%.4f\n",exchange);
printf("------------------------------------------\n");

printf("TOTAL PAYABLE (EUR): %.2f EUR\n",(ship*price*exchange));
printf("*******************************************\n");

printf("Internal ASCII Log: %d -> %d",uppercase,lowercase);

//output starts 

return 0;
}