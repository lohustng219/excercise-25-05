#include <stdio.h>
#include <math.h>
#include <string.h>
int const N = 8;
int bi[N];
int main()
{
    int n;
    scanf("%d" , &n);
    if (n <= 0 || n > 255) printf("%s" "Unsuccessful!");
    else
    {
       memset(bi,0,sizeof(bi));
       int i = 7;
       while (n > 0) {
        bi[i] = n % 2;
        i--;
        n = n / 2;
        }
       for (int i = 0; i <= 7; i++) 
        printf("%d", bi[i]);
    }

    return 0;

}
