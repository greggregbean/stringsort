//! @file doc.h

enum YesOrNo
{
    YES = 1,
    NO = 0
};

//! @brief The function gets the strings from file
//! @note The function puts the strings from file to the given list
//!             and puts the pointer of the string in the index list
//! @param str - the list in which we should put strings from the file
//! @param index - the list in which we should put the pointers of the strings
//! @param fp - the pointer of the file, we will read from
//! @return Nothing
void liner(char* str, char** index, FILE* fp);

//! @brief The function counts the number of symbols and the number of strings in file
//! @param fp - the pointer of file
//! @param lenOfIndex - the pointer of number of strings
//! @param lenOfStr - the pointer of number of symbols
//! @return Nothing
void lencounter(FILE* fp, int* lenOfIndex, int* lenOfStr);

//! @brief Determines the length of  string
//! @note For this function the end of string is '\0'
//! @param line - a string of symbols
//! @return length of the line
int strlen(char line[]);

//! @brief Prints the line
//! @param line - a string of symbols
//! @param result - the pointer of the file, we will print to
//! @return Nothing
void puts(char line[], FILE* result);

//! @brief Prints all the strings in index
//! @param index - an array whose elements are pointers of strings
//! @return Nothing
void print(char* index[]);

//! @brief Determines which of two strings should be set firstly
//! @param str1 - a pointer of the first string
//! @param str2- a pointer of the second string
//! @return 1 - if the first string should be set after the second one
//!                0 - if the first string should be set before the second one
int str1_MORE_str2 (char* str1, char* str2);

//! @brief Determines which of two strings should be put set firstly
//! @note In this function strings are compared from the end
//! @param str1 - a pointer of the first string
//! @param str2- a pointer of the second string
//! @return 1 - if the first string should be set after the second one
//!                0 - if the first string should be set before the second one
int revcmp (char* str1, char* str2);

//! @brief Sets the pointers of strings from index in the right order
//! @param index - an array whose elements are pointers of strings
//! @param lenOfIndex - the pointer of number of strings
//! @param comporator - the pointer of function, which sets the rules of comparing two strings
//! @return Nothing
void bublesorter(char* index[], int lenOfIndex, int (*comparator) (char* str1, char* str2));



