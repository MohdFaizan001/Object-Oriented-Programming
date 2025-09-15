#include <stdio.h>
#include <string.h>

int calculateBalance(int n) {
    int income = 0;
    int expense = 0; 
    int amount;
    char type[10];

    for (int i = 0; i < n; i++) {
        printf("Transaction %d:\n", i + 1);
        printf("Type (Income/Expense): ");
        scanf("%s", type);
        printf("Amount: ");
        scanf("%d", &amount);

        if (strcmp(type, "Income") == 0 || strcmp(type, "income") == 0) {
            income += amount;
        } else {
            expense += amount;
        }
    }

printf("Total Income = %d rs\n",income);
printf("Total Expense = %d rs\n",expense);

int balance = income - expense;

printf(" Final balance = %d rs\n", balance);

 if (balance < 0) {
        printf("Warning: You are overspending!\n");
    }



    return income - expense;
}

int main() {
    int n ;

    printf("Enter number of transactions: ");
    scanf("%d", &n);

   calculateBalance(n);

    
    return 0;
}
