/* Write a program that asks the user to enter a two digit number, then
prints the number with its digits reversed */

#include <stdio.h>

int main(void)
{
    int num, new_num;

    printf("Enter a two digit number: ");
    scanf("%d", &num);

    new_num = 0;
    new_num += (num % 10) * 10;
    new_num += num / 10;

    printf("The reversal is: %d\n", new_num);

    return 0;
}