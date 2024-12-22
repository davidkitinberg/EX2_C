#include <stdio.h>
#include "palindrome.h"
#include <string.h>

int main_b() {
    char str[] = "abba";
    char str2[] = "wwwwdsw";

    int answer = isPalindrome(str);
    int answer2 = isPalindrome(str2);
    
    if(answer == 0)
    {
        printf("%s is a palindrome\n", str);
    }
    if(answer == 1)
    {
        printf("%s is not a palindrome\n", str);
    }
    
    if(answer2 == 0)
    {
        printf("%s is a palindrome\n", str);
    }
    if(answer2 == 1)
    {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}