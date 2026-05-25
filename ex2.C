#include<stdio.h>

int main()
{
    int two, three;
    scanf("%d %d", &two, &three);

    int scored;
    scored = (two*2) + (three*3);

    printf("%d", scored);

    return 0;
}