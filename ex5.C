#include<stdio.h>

int main()
{
    int i = 0;
    int count = 0;

    while (i < 5)
    {
        int n;
        scanf("%d", &n);
        if (n >= 20 && n <= 100)
        count++;

        i++;
    }
    printf("%d", count);

    return 0;
}