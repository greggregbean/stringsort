//! @file linerfunction.cpp

void lencounter(FILE* fp, int* lenOfIndex, int* lenOfStr)
{
    char c;

    while((c = getc(fp)) != EOF)
    {
        if(c == '\n')
        {
            (*lenOfStr)++;
            (*lenOfIndex)++;
            continue;
        }
        (*lenOfStr)++;
    }
    (*lenOfIndex)--;
}

void liner(char* str, char** index, FILE* fp)
{
    int i = 0;
    int n = 0;
    int len = 0;

    while((str[i] = getc(fp)) != EOF)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';

            index[n] = &(str[i - len]);

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
