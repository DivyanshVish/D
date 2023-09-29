#include <iostream>

using namespace std;

void printArray(int a[][10], int n, int m)
{
    for (int i = 0; i < n; i++) // Row
    {
        for (int j = 0; j < m; j++) // Column
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    /* ------ For Storing the the Elements in the 2D Array we use Row Major by the Formula ----- */
    /* ------------------------------- int a[R][C] ------------------------------ */
    // TODO: /* ----------------------------- a[i][j] = i*C+j ---------------------------- */ // Important
    /* ---------------------- Note : Value of R is Not Use ---------------------- */

    int a[5][10];
    int m, n;
    cout << "Enter the Value" << endl;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++) // For the Input Of Row
    {
        for (int j = 0; j < m; j++) // For the Input Of Column
        {
            cin >> a[i][j];
        }
    }
    printArray(a, n, m);

    return 0;
}
