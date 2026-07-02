#include <stdio.h>

int main() {
    int tickets;
    float price = 250, total;

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    total = tickets * price;

    printf("\n===== Ticket Details =====\n");
    printf("Ticket Price : %.2f\n", price);
    printf("Tickets      : %d\n", tickets);
    printf("Total Amount : %.2f\n", total);

    printf("Booking Successful!\n");

    return 0;
}