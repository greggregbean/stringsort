#include <stdio.h>
#include <malloc.h>
#include <txlib.h>

#include "doc.h"
#include "print.cpp"
#include "linerfunction.cpp"
#include "bublesorter.cpp"


int main()
{
    int lenOfStr = 0;
    int lenOfIndex = 0;
    FILE* fp = fopen("mytext.txt", "r");
    FILE* result = fopen("result.txt", "w");
    lencounter(fp, &lenOfIndex, &lenOfStr);
    fseek(fp, 0, SEEK_SET);
    fprintf(result ,"LENGTH OF INDEX: %d \n\n", lenOfIndex);
    fprintf(result ,"LENGTH OF STRING: %d \n\n", lenOfStr);
    char* str = (char*) calloc(lenOfStr + 2, sizeof(char));
    char** index = (char**) calloc(lenOfIndex + 2, sizeof(char*));
    liner(str, index, fp);
    bublesorter(index, lenOfIndex,  str1_MORE_str2);
    fprintf(result, "\n");
    fprintf(result, "RESULT OF BUBLESORTER: \n");
    print(index, result);
    fprintf(result, "\n");
    bublesorter(index, lenOfIndex, revcmp);
    fprintf(result, "\n");
    fprintf(result, "RESULT OF REVBUBLESORTER: \n");
    print(index, result);
    fclose(fp);
    fclose(result);
    printf("Everything is ok. \nThe result of the program in result.txt. \n");
    return 0;
}
