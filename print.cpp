//! @file print.cpp

int strlen(char line[])
{
    int len = 0;

    while (line[len] != '\0')
    {
        len++;
    }

    return len;
}

void puts(char line[], FILE* result)
{
    int lenOfLine = strlen(line);

    for (int num = 0; num < lenOfLine; num++)
    {
        fprintf(result ,"%c", line[num]);
    }
    if(lenOfLine != 0)
    {
        fprintf(result, "\n");
    }
}

void print(char* index[], FILE* result)
{
    int i = 0;

    while(index [i] != '\0')
    {
        puts(index[i], result);
        i++;
    }

    fprintf(result, "\n");
}
