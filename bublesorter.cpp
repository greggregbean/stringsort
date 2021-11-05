//! @file bublesorter.cpp

int revcmp (char* str1, char* str2)
{
    if(str1[0] == '\0')
    {
        return NO;
    }

    else if(str2[0] == '\0')
    {
        return YES;
    }

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int i = 1;

    while (str1[len1 - i] <= 64)
    {
        len1--;
    }

    while (str2[len2 - i] <= 64)
    {
        len2--;
    }

    while (1)
    {
        if (str1[len1 - i] > str2[len2 - i])
        {
            return YES;
        }

        else if (str1[len1 - i] < str2[len2 - i])
        {
            return NO;
        }

        else if (str1[len1 - i] == '\0')
        {
            return NO;
        }

        else if (str2[len2 - i] == '\0')
        {
            return YES;
        }

        i++;
    }
}

int str1_MORE_str2 (char* str1, char* str2)
{
    if(str1[0] == '\n')
    {
        return NO;
    }

    else if(str2[0] == '\n')
    {
        return YES;
    }

    int len1 = 0;
    int len2 = 0;

    while (str1[len1] <= 64)
    {
        len1++;
    }

    while (str2[len2] <= 64)
    {
        len2++;
    }

    while(1)
    {
        if (str1[len1] > str2[len2])
        {
            return YES;
        }

        else if (str1[len1] < str2[len2])
        {
            return NO;
        }

        else if (str1[len1] == '\0')
        {
            return NO;
        }

        else if (str2[len2] == '\0')
        {
            return YES;
        }

        len1++;
        len2++;
    }
}

void bublesorter(char* index[], int lenOfIndex, int (*comparator) (char* str1, char* str2))
{
    for (int i = 0; i < lenOfIndex; i++)
    {
        for(int num = 0; num < lenOfIndex; num++)
        {
            if ( comparator ( index [num], index [num + 1] ) )
            {
                char* tmp = index [num + 1];
                index [num + 1] = index [num];
                index [num] = tmp;
            }
        }
    }
}
