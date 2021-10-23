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

void puts(char line[])
{
    int lenOfLine = strlen(line);

    for (int num = 0; num < lenOfLine; num++)
    {
        printf("%c", line[num]);
    }

    printf("\n");
}

void print(char* index[])
{
    int i = 0;

    while(index [i] != '\0')
    {
        puts(index[i]);
        i++;
    }

    printf("\n");
}