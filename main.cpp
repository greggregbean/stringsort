#include <stdio.h>
#include "linerfunction.cpp"
#include "bublesorter.cpp"

int main()
{
    char str[MAXLEN] = {'\0'};
    char* index[MAXLEN] = {'\0'};

    FILE* fp = fopen("mytext.txt", "r");
    liner(str, index, fp);
    fclose(fp);

    bublesorter(index);
    printf("\n");

    printf("RESULT OF BUBLESORTER: \n");
    print(index);
    printf("\n");

    return 0;
}
