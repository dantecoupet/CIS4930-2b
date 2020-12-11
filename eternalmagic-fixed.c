#include "time.h"
#include "smack.h"
#include "stdio.h"
#include "stdlib.h"
#include "input.h"
#include "soln.h"

int main()
{
    int w = getsize("Enter the WIDTH of the puzzle: ", "You must enter a positive integer.");
    int h = getsize("Enter the HEIGHT of the puzzle: ", "You must enter a positive integer.");

    if(w * h > 64)
    {
        printf("Maximum supported size is 64, exiting.");
        return 1;
    }
    assert(w *h <= 64);

    char *materr = malloc((32 + 2) * sizeof(char)); // max 2 digits as size <= 64
    sprintf(materr, "You must enter a row of width %d.\n", w);
    char *mat = getmat(w, h, "Enter the puzzle matrix (r/b):\n", materr);

    printf("Solving...\n");
    unsigned long long soln = 0;

    clock_t diff;
    clock_t begin = clock();
    char issolved = solve(w, h, mat, &soln);
    diff = clock() - begin;
    long msdiff = diff * 1000 / CLOCKS_PER_SEC;

    if(issolved)
    {
        printsoln(w, h, soln);
    }
    else
    {
        printf("No solution exists.");
    }

    printf("Evaluated puzzle in %ld.%ld seconds.", msdiff / 1000, msdiff % 1000);
}
