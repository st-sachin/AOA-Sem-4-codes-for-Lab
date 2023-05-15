#include <stdio.h>
#include <stdlib.h>
int min(int x, int y)
{
    if (x > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
void all_pair_spath(int cost[4][4], int A[4][4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = cost[i][j];
        }
    }
    
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
            }
        }
        printf("The intermediatory matrix is:");
        printf("\n");
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    }
    printf("The calculated matrix is:");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Enter the cost matrix:\n");
    int A[4][4];
    int n = 4;
    int cost[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &cost[i][j]);
        }
    }
    all_pair_spath(cost, A, n);
    return 0;
}
