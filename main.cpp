#include <stdio.h>
#include <txlib.h>
#include "linerfunction.cpp"
#include "bublesorter.cpp"

int main()
{

    char str[MAXLEN_STR] = {'\0'};
    char* index[MAXLEN_INDX] = {'\0'};

    FILE* fp = fopen("mytext.txt", "r");
    liner(str, index, fp);
    fclose(fp);

    bublesorter(index);
    printf("\n");
    printf("RESULT OF BUBLESORTER: \n");
    print(index);

    printf("\n");

    revbublesorter(index);
    printf("\n");
    printf("RESULT OF REVBUBLESORTER: \n");
    print(index);

    return 0;
}
