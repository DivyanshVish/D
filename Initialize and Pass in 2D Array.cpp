#include <iostream>

using namespace std;

void printArray(int a[][5], int n, int m)
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

    int a[][5] = {{1, 2},
                  {3, 4}};
    int b[5][5] = {{0}};

/* -------- For Passing the 2D Array in the Function the Value Of the Column is Mandatory and for the Row is Optional ------- */
/* -------------------- For the Printing the 2D Array we  have to give both Number of Rows and Column -------------------- */

    printArray(a,2,5);
    cout<<endl;
    printArray(b,5,5);


    return 0;
}