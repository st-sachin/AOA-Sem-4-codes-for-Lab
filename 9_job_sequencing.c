#include <stdio.h>

typedef struct job{
char id[4];
int deadline;
int profit;
} Job;

int max(int x, int y)
{
if(x < y)
return y;
return x;
}
void js(Job jobs[], int n)
{
int maxd = 0;
for(int i = 0; i < n; i++)
{
maxd = max(maxd, jobs[i].deadline);
}

int t[maxd];
int p = 0;

for(int i = 0; i < maxd; i++)
{
t[i] = 0;
}

printf("\nJobs executed:\n");
for(int i = 0; i < n; i++)
{
if(t[jobs[i].deadline-1] == 0)
{
p += jobs[i].profit;
t[jobs[i].deadline-1] = 1;
printf("%s\t", jobs[i].id);
}
}
printf("\nThe profit obtained is: %d\n", p);
}
void main()
{

Job jobs[4] =
{
{"J1", 2, 100},
{"J2", 1, 10},
{"J3", 2, 15},
{"J4", 1, 27},

};
Job temp;
int n = 4;
for(int i = 1; i < n; i++)
{
for(int j = 0; j < n; j++)
{
if(jobs[j].profit < jobs[i].profit)
{
temp = jobs[j];
jobs[j] = jobs[i];
jobs[i] = temp;
}
}
}
printf("Job\tDeadline\tProfit\n");
for(int i = 0; i < n; i++)
{
printf("%s\t%d\t\t%d\n", jobs[i].id, jobs[i].deadline, jobs[i].profit);
}
js(jobs, n);
}
