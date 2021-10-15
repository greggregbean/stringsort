//! @file doc.h

#define MAXLEN 1000

enum YesOrNo
{
    YES = 1,
    NO = 0
};

//! @brief The function gets the strings from file
//! @note The function puts the strings from file to the given list
//!             and puts the pointer of the string in the index list
//! @param[in] str - the list in which we should put strings from the file
//! @param[in] index - the list in which we should put the pointers of the strings
//! @param[in] fp - the pointer of the file
//! @return Nothing
void liner(char* str, char** index, FILE *fp);

//! @brief Determines the length of  string
//! @note For this function the end of string is '\0'
//! @param[in] line - a string of symbols
//! @return length of the line
int strlen(char line[]);

//! @brief Prints the line
//! @param[in] line - a string of symbols
//! @return Nothing
void puts(char line[]);

//! @brief Prints all the strings in index
//! @param[in] index - an array whose elements are pointers of strings
//! @return Nothing
void print(char* index[]);

//! @brief Determines which of two strings should be set firstly
//! @param[in] str1 - a pointer of the first string
//! @param[in] str2- a pointer of the second string
//! @return 1 - if the first string should be set after the second one
//!                0 - if the first string should be set before the second one
int str1_MORE_str2(char* str1, char* str2);

//! @brief Sets the pointers of strings from index in the right order
//! @param index - an array whose elements are pointers of strings
//! @return Nothing
void bublesorter(char* index[]);

//! @brief Determines which of two strings should be put set firstly
//! @note In this function strings are compared from the end
//! @param[in] str1 - a pointer of the first string
//! @param[in] str2- a pointer of the second string
//! @return 1 - if the first string should be set after the second one
//!                0 - if the first string should be set before the second one
int revcmp(char* str1, char* str2);

//! @brief Sets the pointers of strings from index in the reverse order
//! @param index - an array whose elements are pointers of strings
//! @return Nothing
void revbublesorter(char* index[]);
