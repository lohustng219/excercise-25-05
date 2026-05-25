#include <stdio.h>

int main() 
{
    long long pax;
    long long prices;

    scanf("%lld", &pax);

    if (pax < 10) 
    {
        prices = pax * 600;
    } 
    else 
    {
        prices = pax * 500;
    }

    printf("%lld", prices);

    return 0;
}
