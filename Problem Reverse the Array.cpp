#include <iostream>

using namespace std;

int main()
{

    cout << "Enter the Size of Array";

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    /* --------------------- To Print Normally Left -> Right -------------------- */

    cout << "Before Reversing the Array " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    /* --------------- To Print in the Reverse Order Right -> Left -------------- */

    cout << "After Reversing the Array " << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
