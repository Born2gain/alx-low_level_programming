#include "main.h"
/**
 *prints _putchar followed by a new line
 *
 * return 0 on success
 */
int main (void)
{

        int n = 0;
        char name[8] = "_putchar";

        while (n < 8)
                {                                        putchar(name[n]);
                n++;                                     }                                        putchar('\n');
        return 0;                        }
