#include <stdio.h>

int main()
{
    int a[3][2] = {9, 2, 5, 1, 35, 10};

    int max = a[0][0];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            if (*(*(a + i) + j) > max)
                max = *(*(a + i) + j);
    }
    printf("%d", max);
}