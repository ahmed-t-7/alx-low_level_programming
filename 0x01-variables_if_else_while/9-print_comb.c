#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main() {
    int i, j, k, l;

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            for (k = j + 1; k < 10; k++) {
                for (l = k + 1; l < 10; l++) {
                    putchar(i + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(j + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(k + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(l + '0');
                    putchar('\n');
                }
            }
        }
    }

    return 0;
}
