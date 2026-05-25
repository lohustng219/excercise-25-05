#include<stdio.h>
#include<math.h>

int main()
{
    float h,b;

    scanf("%f %f", &h, &b);

    float area;
    area = h*b;
    area = area/2;

    printf("%.2f", area);

    return 0;
}