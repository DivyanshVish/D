#include <iostream>

using namespace std;

int main()
{
    int n = nums.size();
    bool incre = true;
    bool derc = true;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            incre = false;
        }
        else if (nums[i] < nums[i - 1])
        {
            derc = false;
        }
    }
    return incre || derc;

    return 0;
}
