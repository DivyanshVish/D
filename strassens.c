#include <stdio.h>

int main()

{

    int a[10][10], b[10][10], c[10][10];

    int m1, m2, m3, m4;

    int n = 2;

    printf("Enter the 4 elements in first matrix \n");

    for (int i = 1; i <= n; i++)

    {

        for (int j = 1; j <= n; j++)

        {

            printf("a[%d][%d]", i, j);

            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the 4 elements in second matrix \n");

    for (int i = 1; i <= n; i++)

    {

        for (int j = 1; j <= n; j++)

        {

            printf("a[%d][%d]", i, j);

            scanf("%d", &b[i][j]);
        }
    }

    m1 = a[1][1] * b[1][1] + a[1][2] * b[2][1];

    m1 = a[1][1] * b[1][2] + a[1][2] * b[2][2];

    m1 = a[2][1] * b[1][1] + a[2][2] * b[2][1];

    m1 = a[2][1] * b[1][2] + a[2][2] * b[2][2];

    c[1][1] = m1;

    c[1][2] = m2;

    c[2][1] = m3;

    c[2][2] = m4;

    printf("Resultant matrix is \n");

    for (int i = 1; i <= n; i++)

    {

        for (int j = 1; j <= n; j++)

        {

            scanf("%d", &b[i][j]);
        }
    }

    return 0;
}
