
#include <stdio.h>

int main()
{
    int total=80000;
    int total_men= 80000 * .52;
    int total_literacy = 80000 * .48;
    int total_literate_men = 80000 * .35;                          //illiterate men and women

    int total_illiterate_men = total_men - total_literate_men;
    int total_literate_women = total_literacy - total_literate_men;
    int total_illiterate_women = total - total_literate_women;

    printf("Total illiterate men: %d\nTotal illiterate women: %d", total_illiterate_men, total_illiterate_women);



    return 0;
}
