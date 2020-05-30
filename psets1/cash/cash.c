#include <stdio.h>
#include <cs50.h>
#include <math.h>



int main(void)
{
    float cash = get_float("Change owed: ");

    while (cash < 0 )
    {
        cash = get_float("Change owed: ");
    }

    // converting dollars do cent
    int money = round(cash * 100);

    // exact number of quarter coins
    int quarter_count = money / 25;
    //remainer of cash to give
    int leftover = money % 25;

    // exact number of dimes coins
    int dimes_count = leftover / 10;
    //remainer of cash to give
    leftover = leftover % 10;

    // exact number of nickels coins
    int nickels_count = leftover / 5;
    //remainer of cash to give
    leftover = leftover % 5;

    // exact number of pennies coins
    int pennies_count = leftover;

    int total_coins = quarter_count + dimes_count + nickels_count + pennies_count;
    //printf("quarter(25): %i dimes(10): %i nickels(5): %i pennies(1): %i \n",quarter_count,dimes_count,nickels_count,pennies_count);
    printf("%i \n", total_coins);


}