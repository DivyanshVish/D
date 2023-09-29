/* ------------------ For the Taking the Input in 2D Array ------------------ */
/* ---------------------------- There are 2 Ways ---------------------------- */
/* ------------------------------- 1) Row Wise ------------------------------ */ // Very Comman
/* ----------------------------- 2) Column Wise ----------------------------- */

/* ----------------------------- Row Wise Input ----------------------------- */
/* ------------------------------- n = 3, m=2 ------------------------------- */
/* --------------------- For the Input in the 2D Array --------------------- */
/* ----------------------------- cin >> B[0][0] ----------------------------- */
/* ----------------------------- cin >> B[0][1] ----------------------------- */
/* ----------------------------- cin >> B[1][0] ----------------------------- */
/* ----------------------------- cin >> B[1][1] ----------------------------- */
/* ----------------------------- cin >> B[2][0] ----------------------------- */
/* ----------------------------- cin >> B[2][1] ----------------------------- */

#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the Number of the Row & Column"<<endl;

    cin>>n>>m;   // n is for the number of the Rows & m is for the number of Column  

    cout<<endl;
    int B[10][10];
    
    /* ------------------------- For the Row wise Input ------------------------- */

    for (int i = 0; i < n; i++)     // For the Input Of Row
    {
        for (int j = 0; j < m; j++)        // For the Input Of Column
        {
            cin>>B[i][j];
        }
    }


    /* ----------------------------- Row Wise Output ---------------------------- */

    for (int i = 0; i < n; i++)     // Row
    {
        for (int j = 0; j < m; j++)   // Column     
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;

    }

    /* ------------------------ For the Column wise Input ----------------------- */

    for (int i = 0; i < m; i++)     // For the Input Of Column
    {
        for (int j = 0; j < n; j++)        // For the Input Of Row
        {
            cin>>B[j][i];
        }
    }

    /* --------------------------- Column Wise Output --------------------------- */

    for (int i = 0; i < m; i++)    // Column 
    {
        for (int j = 0; j < n; j++)        // Row
        {
            cout<<B[j][i]<<" ";
        }
        cout<<endl;

    }



    return 0;
}
