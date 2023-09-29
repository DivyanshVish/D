#include <iostream>

using namespace std;

int main()
{
    /* -------------------------- Optimal Approach -------------------------- */

    int nums[] = {1, 2, 3, 4, 5, 6, 7, 9};

    int n = nums.size();
    int sum_of_n_numbers = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        sum += nums[i];
    }

    return sum_of_n_numbers - sum;
}
