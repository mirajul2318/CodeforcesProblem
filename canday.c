#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int ones = 0, twos = 0;
        for (int i = 0; i < n; i++)
        {
            int candy;
            scanf("%d", &candy);
            if (candy == 1) ones++;
            else if (candy == 2) twos++;
        }

        int total_weight = ones + 2 * twos;
        if (total_weight % 2 != 0)
        {

            printf("NO\n");
        }
        else
        {
            int half_weight = total_weight / 2;
            if (half_weight % 2 == 0 || (half_weight % 2 == 1 && ones > 0))
            {

                printf("YES\n");
            }
            else
            {

                printf("NO\n");
            }
        }
    }

    return 0;
}

