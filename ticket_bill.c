#include <stdio.h>

// give 10% discount if more than 5 tickets are bought.
// give 20% discount if more than 10 tickets are bought.

float calculateBill(int tickets, float price) {
    float total = tickets * price;
    if (tickets > 5 && tickets <=10) {
        total = total * 0.9;  
    } else if (tickets > 10)
    {
      total = total *0.8;
    }
    
    return total;
}

int main() {
    int tickets;
    float price, bill;

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    printf("Enter price per ticket: ");
    scanf("%f", &price);

    bill = calculateBill(tickets, price);

    printf("Total Bill = Rs. %.2f\n", bill);

    return 0;
}
