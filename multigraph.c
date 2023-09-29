#include <stdio.h>

#include <limits.h>

#define INF INT_MAX

#define N 8

void findShortestPath(int graph[N][N], int stages)
{

    int cost[N];

    int next[N];

    int i, j;

    cost[N - 1] = 0;

    next[N - 1] = -1;

    for (i = N - 2; i >= 0; i--)
    {

        int min_cost = INF;

        int min_index = -1;

        for (j = i + 1; j < N; j++)
        {

            if (graph[i][j] != 0 && graph[i][j] + cost[j] < min_cost)
            {

                min_cost = graph[i][j] + cost[j];

                min_index = j;
            }
        }

        cost[i] = min_cost;

        next[i] = min_index;
    }

    printf("Shortest Path: ");

    int current = 0;

    printf("%d ", current);

    while (next[current] != -1)
    {

        current = next[current];

        printf("%d ", current);
    }

    printf("\nMinimum Cost: %d\n", cost[0]);
}

int main()
{

    int graph[N][N] = {

        {0, 1, 2, 5, 0, 0, 0, 0},

        {0, 0, 0, 0, 4, 11, 0, 0},

        {0, 0, 0, 0, 9, 5, 16, 0},

        {0, 0, 0, 0, 0, 0, 2, 0},

        {0, 0, 0, 0, 0, 0, 0, 18},

        {0, 0, 0, 0, 0, 0, 0, 13},

        {0, 0, 0, 0, 0, 0, 0, 2},

        {0, 0, 0, 0, 0, 0, 0, 0}

    };

    int stages = 4;

    findShortestPath(graph, stages);

    return 0;
}
