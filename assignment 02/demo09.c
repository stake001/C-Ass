#include <stdio.h>

int main() {
    int quantity;
    float unit_price = 5.0, total_price, discount = 0.0;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    // Calculate total price before discount
    total_price = quantity * unit_price;

    // Apply discount based on quantity
    if (quantity > 50) {
        discount = 0.15; // 15% discount
    } else if (quantity > 30) {
        discount = 0.10; // 10% discount
    }

    // Apply discount and display final price
    if (discount > 0.0) {
        total_price *= (1.0 - discount); // Apply discount as a percentage
        printf("You get a %.0f%% discount for buying %d items.\n", discount * 100, quantity);
    }

    printf("Total price (after discount): Rs %.2f\n", total_price);

    return 0;
}
