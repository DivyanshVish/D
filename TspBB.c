#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define N 4

int graph[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

int finalPath[N + 1];
bool visited[N];

int finalCost = INT_MAX;

void copyToFinalPath(int currentPath[])
{
    for (int i = 0; i < N; i++)
    {
        finalPath[i] = currentPath[i];
    }
    finalPath[N] = currentPath[0];
}

int firstMin(int i)
{
    int min = INT_MAX;
    for (int k = 0; k < N; k++)
    {
        if (graph[i][k] < min && i != k)
        {
            min = graph[i][k];
        }
    }
    return min;
}

int secondMin(int i)
{
    int first = INT_MAX, second = INT_MAX;
    for (int j = 0; j < N; j++)
    {
        if (i == j)
        {
            continue;
        }
        if (graph[i][j] <= first)
        {
            second = first;
            first = graph[i][j];
        }
        else if (graph[i][j] <= second && graph[i][j] != first)
        {
            second = graph[i][j];
        }
    }
    return second;
}

void TSPRec(int currentBound, int currentWeight, int level, int currentPath[])
{
    if (level == N)
    {
        if (graph[currentPath[level - 1]][currentPath[0]] != 0)
        {
            int currentCost = currentWeight + graph[currentPath[level - 1]][currentPath[0]];
            if (currentCost < finalCost)
            {
                copyToFinalPath(currentPath);
                finalCost = currentCost;
            }
        }
        return;
    }

    for (int i = 0; i < N; i++)
    {
        if (graph[currentPath[level - 1]][i] != 0 && visited[i] == false)
        {
            int temp = currentBound;
            currentWeight += graph[currentPath[level - 1]][i];
            if (level == 1)
            {
                currentBound -= ((firstMin(currentPath[level - 1]) + firstMin(i)) / 2);
            }
            else
            {
                currentBound -= ((secondMin(currentPath[level - 1]) + firstMin(i)) / 2);
            }

            if (currentBound + currentWeight < finalCost)
            {
                currentPath[level] = i;
                visited[i] = true;
                TSPRec(currentBound, currentWeight, level + 1, currentPath);
            }

            currentWeight -= graph[currentPath[level - 1]][i];
            currentBound = temp;

            // Reset visited array
            for (int j = 0; j < N; j++)
            {
                visited[j] = false;
            }

            // Mark visited cities
            for (int j = 0; j <= level - 1; j++)
            {
                visited[currentPath[j]] = true;
            }
        }
    }
}

void TSP()
{
    int currentPath[N + 1];
    int currentBound = 0;

    for (int i = 0; i < N + 1; i++)
    {
        currentPath[i] = -1;
    }

    for (int i = 0; i < N; i++)
    {
        currentBound += (firstMin(i) + secondMin(i));
    }
    currentBound /= 2;

    visited[0] = true;
    currentPath[0] = 0;

    TSPRec(currentBound, 0, 1, currentPath);
}

int main()
{
    TSP();

    printf("Optimal Path: ");
    for (int i = 0; i <= N; i++)
    {
        printf("%d ", finalPath[i]);
    }
    printf("\n");
    printf("Optimal Cost: %d\n", finalCost);

    return 0;
}
