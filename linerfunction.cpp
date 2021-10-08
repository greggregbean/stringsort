//! @file linerfunction.cpp

#include "print.cpp"

void liner(char* str, char** index, FILE *fp)
{
    int i = 0;
    int n = 0;
    int len = 0;

    printf("FIRST POINTER: %p \n\n", &(str[0]));

    while((str[i] = getc(fp)) != EOF)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';

            printf("Str: \n");

            index[n] = &(str[i - len]);

            print(index);

            printf("Addres: %p \n\n", index[n]);

            n++;
            len = 0;
            i++;

            continue;
        }
        i++;
        len++;
    }
}
