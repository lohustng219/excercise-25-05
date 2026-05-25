#include<stdio.h>

int main()
{
    int chickens, cows, pigs;

    scanf("%d %d %d", &chickens, &cows, &pigs);
    int total = 0;

    total = (chickens * 2) + (cows * 4) + (pigs * 4);

    printf("%d" , total);

    return 0;

}