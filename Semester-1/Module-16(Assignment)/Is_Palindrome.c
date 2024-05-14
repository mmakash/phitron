#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main()
{
    char str[1001];
    scanf("%s", str);
    if (is_palindrome(str))
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    
    return 0;
}