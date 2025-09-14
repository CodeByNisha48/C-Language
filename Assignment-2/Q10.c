// Write a program which takes the cost price and selling price of a product
// from the user. Now calculate and print profit or loss percentage.

#include <stdio.h>
#include <conio.h>

int main() {
    int costPrice, sellingPrice;

    printf("Enter the Cost Price: ");
    scanf("%d", &costPrice);

    printf("Enter the Selling Price: ");
    scanf("%d", &sellingPrice);

    if (sellingPrice > costPrice) {
        int profit = sellingPrice - costPrice;
        float profitPercent = (profit * 100.0) / costPrice;
        printf("Profit of %.2f%%", profitPercent);
    }
    else if (costPrice > sellingPrice) {
        int loss = costPrice - sellingPrice;
        float lossPercent = (loss * 100.0) / costPrice;
        printf("Loss of %.2f%%", lossPercent);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
