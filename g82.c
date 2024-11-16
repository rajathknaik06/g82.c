/*Ramu is an aspiring entrepreneur who recently started a small business. He buys and sells various items, and he wants to keep track of his profits and losses.



Help him by writing a program that takes the local variable cost price and selling price of an item as input and determines whether he made a profit, incurred a loss, or neither.

Input format :
The first line of input consists of a double value, cp, representing the cost price.

The second line of input consists of a double value, sp, representing the selling price.

Output format :
If cp < sp, the output displays "Ramu earns Y profit by selling an item.", where Y is a double value, representing the profit amount, rounded to two decimal places.

If cp > sp, the output displays "Ramu incurred X loss on selling item." where X is a double value, representing the loss amount, rounded to two decimal places.

If cp = sp, the output displays "Ramu doesn't get any loss and profit on selling item.".*/

#include <stdio.h>

int main(){
    double cost_price, selling_price, profit, loss;
    scanf("%lf", &cost_price);
    scanf("%lf", &selling_price);
    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        printf("Ramu earns %.2lf profit by selling an item.", profit);
    }
    else if (selling_price < cost_price) {
        loss = cost_price - selling_price;
        printf("Ramu incurred %.2lf loss on selling item.", loss);
    }
    else {
        printf("Ramu doesn't get any loss and profit on selling item.");
    }
}
