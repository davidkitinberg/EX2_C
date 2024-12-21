#include <stdio.h>
#include "palindrome.h"
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);

    for(int i = 0; i < length/2 ; i++)
    {
        if(str[i] != str[length - i -1])
        {
            return 0; // Not a palindrome
        }
    }
    return 1; // It is a palindrome

}