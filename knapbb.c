#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define N 4

int maxProfit = INT_MIN;
int weights[N] = {2, 3, 4, 5};
int profits[N] = {3, 4, 5, 6};
int capacity = 8;
bool bestSet[N];

typedef struct
{
    int level;
    int profit;
    int weight;
    float bound;
} Node;

float bound(Node u)
{
    if (u.weight >= capacity)
    {
        return 0;
    }
    float result = u.profit;
    int j = u.level + 1;
    int totalWeight = u.weight;
    while (j < N && totalWeight + weights[j] <= capacity)
    {
        result += profits[j];
        totalWeight += weights[j];
        j++;
    }
    if (j < N)
    {
        result += (capacity - totalWeight) * (profits[j] / (float)weights[j]);
    }
    return result;
}

void knapsack()
{
    Node u, v;
    Node Q;
    int i;
    Q.level = -1;
    Q.profit = Q.weight = 0;
    Q.bound = bound(Q);
    int maxProfit = 0;
    bool include[N];
    for (i = 0; i < N; i++)
    {
        include[i] = false;
    }
    while (Q.bound > maxProfit)
    {
        u = Q;
        if (u.level == -1)
        {
            v.level = 0;
        }
        else
        {
            v.level = u.level + 1;
        }
        v.weight = u.weight + weights[v.level];
        v.profit = u.profit + profits[v.level];
        v.bound = bound(v);
        if (v.weight <= capacity && v.profit > maxProfit)
        {
            maxProfit = v.profit;
        }
        if (v.bound > maxProfit)
        {
            Q = v;
        }
        v.weight = u.weight;
        v.profit = u.profit;
        v.bound = bound(v);
        if (v.bound > maxProfit)
        {
            Q = v;
        }
    }
    printf("Maximum Profit: %d\n", maxProfit);
}

int main()
{
    knapsack();
    return 0;
}
