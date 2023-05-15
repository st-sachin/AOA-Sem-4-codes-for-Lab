#include <stdio.h>
#include <string.h>

char T[100], P[100];
int M, N, pi[100], j = 0, q = 0;

void compute_prefix_pattern()
{
    int k = 0, q;
    pi[0] = 0;
    q = 1;
    while (q < M)
    {
        if (P[q] == P[k])
        {
            k++;
            pi[q] = k;
            q++;
        }
        else
        {
            if (k != 0)
                k = pi[k - 1];
            else
            {
                pi[q] = 0;
                q++;
            }
        }
    }
}
void KMPSearch()
{
    int j = 0, q = 0;
    M = strlen(P);
    N = strlen(T);
    compute_prefix_pattern();
    while (q < N)
    {
        if (P[j] == T[q])
        {
            j++;
            q++;
        }

        if (j == M)
        {
            printf("Found Ptern at index %d \n", q - j);
            j = pi[j - 1];
        }
        else if (P[j] != T[q])
        {
            if (j != 0)
                j = pi[j - 1];
            else
                q = q + 1;
        }
    }
}

int main()
{
    printf("\n ENTER THE TEXT  : ");
    gets(T);
    printf("\n ENTER THE PTERN : ");
    gets(P);
    KMPSearch();
    return 0;
}
