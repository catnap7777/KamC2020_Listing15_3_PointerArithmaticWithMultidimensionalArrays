//Listing 15_3 Pointer arithmetic with multidimensional arrays; page 367
#include <stdio.h>

int multi[2][4];

int main(void)
{

    printf("\nthe value of multi = %u", multi);
    printf("\nthe value of (multi + 1) = %u", (multi+1));
    printf("\nthe address of multi[1] = %u\n", &multi[1]);

    return 0;
}
