#include <iostream>

using namespace std;

/* ----------------- Pattern Rules ----------------- */
/* ------------- 1) For the Outer Loop, Count the number of rows ------------ */
/* ----------- 2) For the Inner Loop, Count the number of columns and somehow connect with rows ----------- */
/* ----------------- 3) Print the pattern in the Inner Loop ----------------- */
/* -------------------- 4) Observe the symmetric [Optional] ------------------- */
void printPattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void Pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void Pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout <<"* ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        printPattern1(n);
    }

    return 0;
}
