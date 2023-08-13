#include <stdio.h>

int main() {
    int code1, units1, code2, units2;
    float price1, price2;
    // Read input for product 1
    scanf("%d %d %f", &code1, &units1, &price1);

    // Read input for product 2
    scanf("%d %d %f", &code2, &units2, &price2);

    // Calculate total amount
    float totalAmount = (units1 * price1) + (units2 * price2);

    // Print the output
    printf("Valor a pagar: R$ %.2f\n", totalAmount);

    return 0;
}

