#include <stdio.h>

int main()
{
    int a[8] = {1, 5, 2, 3, 23, 5, 1, 2};
    int count[1001] = {0}, n = a[0], countMax = 0;
    for (int i = 0; i < 8; ++i)
    {
        count[a[i]]++;
    }
    for (int i = 0; i < 8; ++i)
    {
        if (count[a[i]] > countMax)
        {
            countMax = count[a[i]];
            n = a[i];
        }
    }
    printf("%d", n);
}