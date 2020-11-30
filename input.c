#include "memory.h"
#include "input.h"
#include "stdio.h"
#include "stdlib.h"

int getsize(const char *msg, const char *errmsg)
{
    printf("%s", msg);

    for(;;)
    {
        char *sizeInput = malloc((2 + 1) * sizeof(char));
        fgets(sizeInput, 2, stdin);

        int size = atoi(sizeInput);

        if(size > 0)
        {
            return size;
        }

        printf("%s", errmsg);
    }
}

char *getmat(int w, int h, const char *msg, const char *errmsg)
{
    printf("%s", msg);
    char *mat = malloc((w * h) * sizeof(char));
    char *row = alloca((w * 2 + 1) * sizeof(char)); // max 129 byte allocation (compensating for the spaces)
    char crow = 0;

    {
        int c;
        while((c = getchar()) != '\n' && c != EOF);
    }

    while(crow < h)
    {
        printf("%d> ", crow);
        fgets(row, w * 2, stdin);

        row[strcspn(row, "\r\n")] = '\0';

        int j = 0;
        for(int i = 0;; i++)
        {
            char c = row[i];
            if(!c)
            {
                break;
            }

            if(c == 'r' || c == '0')
            {
                row[j++] = '0';
            }
            else if(c == 'b' || c == '1')
            {
                row[j++] = '1';
            }
        }

        if(j != w)
        {
            printf("%s", errmsg);
            continue;
        }

        int rowoffset = w * crow;
        for(int k = 0; k < w; ++k)
        {
            mat[k + rowoffset] = row[k];
        }

        crow++;
    }

    return mat;
}
