#include <iostream>

using namespace std;
int main()
{

    cout << "Enter the number of Elements" << endl;
    int n;
    cin >> n;

    /* ------------------------------ For the Input ----------------------------- */

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    cout <<"Sum = "<< sum << endl;

    return 0;
}
