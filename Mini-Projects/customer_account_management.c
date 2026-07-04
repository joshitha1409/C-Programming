#include <stdio.h>
#include <string.h>
#define MAX_CUSTOMERS 20  

// Assuming we are dealing with a maximum of 20 customers

// Define the structure for storing customer information
typedef struct {
    char name[100];
    int accountNumber;
    float balance;
} Customer;


// Function to print names of all customers with balance less than $200
void printCustomersWithLowBalance(Customer customers[], int count) {
	int i;
	for(i=0;i<count;i++)
	{
if(customers[i].balance<200)
{printf("%s\n",customers[i].name);}
}
}

// Function to add $100 to the balance of customers with more than $1000
// and print their updated balance

void updateBalanceForHighBalanceCustomers(Customer customers[], int count) {
	int i;
	for(i=0;i<count;i++)
		{
			if(customers[i].balance>1000){
			customers[i].balance+=100;
		printf("%d %.2f\n",customers[i].accountNumber,customers[i].balance);
			}
		}
}


int main() {
    int i, numCustomers;
    Customer customers[MAX_CUSTOMERS];
    scanf("%d", &numCustomers);

    // Input customer information
    for (i = 0; i < numCustomers; i++) {
        printf("Enter details for customer %d\n", i + 1);
    scanf("%s",customers[i].name);
	scanf("%d",&customers[i].accountNumber);
	scanf("%f",&customers[i].balance);
    }
    printCustomersWithLowBalance(customers, numCustomers);
    updateBalanceForHighBalanceCustomers(customers, numCustomers);
    return 0;
}
