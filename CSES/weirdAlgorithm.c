/* Problem: https://cses.fi/problemset/task/1068 */

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    /* Constraints */
    int min=1, max=pow(10, 6);

    do {
        printf("n start value: ");
        scanf("%d",&n);
        if (n==min || n<min || n>=max) {
            printf("Please start from > 1 and < 10000001\n");
            printf("=================\n");
        }
    } while (n==min || n<min || n>=max);

    if(n>min && n<=max) {
        while (n!=1) {
            printf("%d",n);
            printf("->");
            if(n%2==1)
                n = (n*3)+1;
            else
                n = n/2;
        }
    }

    printf("%d\n",n);

    return 0;
}
