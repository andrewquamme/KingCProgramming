/* Displays ISBN information entered by user */

#include <stdio.h>

int main(void)
{
    int prefix, group, publisher, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check);

    printf("GS1 prefix: %.3d\n", prefix);
    printf("Group identifier: %.1d\n", group);
    printf("Publisher code: %.3d\n", publisher);
    printf("Item number: %.5d\n", item);
    printf("Check digit: %.1d\n", check);

    return 0;
}