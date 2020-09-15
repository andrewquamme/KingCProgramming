/* Converts military time to civilian time */

#include <stdio.h>

int main(void)
{
    int HH, MM;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &HH, &MM);

    printf("Equivalent 12-hour time: ");

    if (HH == 0) printf("%d:", 12);
    else if (HH < 12) printf("%d:", HH);
    else printf("%d:", HH - 12);

    printf("%.2d ", MM);

    if (HH < 12) printf("AM\n");
    else printf("PM\n");

    return 0;
}