//! @file bublesorter.cpp

#include "print.cpp"
#include "doc.h"

int str1_MORE_str2(char* str1, char* str2)
{
    int i = 0;

    while(1)
    {
        if (str1[i] > str2[i])
        {
            return YES;
        }

        if (str1[i] < str2[i])
        {
            return NO;
        }

        else if (str1[i] == '\n')
        {
            return NO;
        }

        else if (str2[i] == '\n')
        {
            return YES;
        }

        i++;
    }
}

void bublesorter(char* index[])
{
    int lenOfIndex = 0;

    while (index [lenOfIndex + 1]  != '\0')
     {
        lenOfIndex++;
     }

    printf("LENGTH OF INDEX: %d \n\n", lenOfIndex + 1);

    printf("THE PROCESS OF BUBLESORTER: \n");

    print(index);

    for (int i = 0; i < lenOfIndex; i++)
    {
            for(int num = 0; num < lenOfIndex; num++)
            {
                if ( str1_MORE_str2( index [num], index [num + 1] ) )
                {
                            char* tmp = index [num + 1];
                            index [num + 1] = index [num];
                            index [num] = tmp;
                            print(index);
                }
            }
    }
}
