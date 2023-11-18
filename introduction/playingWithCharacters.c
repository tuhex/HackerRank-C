/* Problem: https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. */
    char ch;
    char s[50];
    char sen[75];

    scanf("%c",&ch);
    scanf("\n");
    scanf("%[^\n]%*c",s);
    scanf("%[^\n]%*c",sen);

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);

    return 0;
}
