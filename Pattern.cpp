#include <iostream>

using namespace std;

/* ----------------- Pattern Rules ----------------- */
/* ------------- 1) For the Outer Loop, Count the number of rows ------------ */
/* ----------- 2) For the Inner Loop, Count the number of columns and somehow connect with rows ----------- */
/* ----------------- 3) Print the pattern in the Inner Loop ----------------- */
/* -------------------- 4) Observe the symmetric [Optional] ------------------- */

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
