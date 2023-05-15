// Rabin-Karp algorithm in C

#include <stdio.h>
#include <string.h>
#include <math.h>

#define d 10

void rabinKarp(char P[], char T[], int q)
{
    int m = strlen(P);
    int n = strlen(T);
    int i, j;
    int p = 0;
    int t = 0;
    int h = 1;
    // int h=(int)pow(d,m-1)%q;

    for (i = 0; i < m - 1; i++)
        h = (h * d) % q;

    for (i = 0; i < m; i++)
    {
        p = (d * p + P[i]) % q;
        t = (d * t + T[i]) % q;
    }

    for (i = 0; i <= n - m; i++)
    {
        if (p == t)
        {
            for (j = 0; j < m; j++)
            {
                if (T[i + j] != P[j])
                    break;
            }

            if (j == m)
                printf("P is found at position:  %d \n", i + 1);
        }

        if (i < n - m)
        {
            t = (d * (t - T[i] * h) + T[i + m]) % q;

            if (t < 0)
                t = (t + q);
        }
    }
}

int main()
{
    char T[] = "ABFCFCCDDAEFG";
    char P[] = "FCF";
    int q = 13;
    rabinKarp(P, T, q);
}