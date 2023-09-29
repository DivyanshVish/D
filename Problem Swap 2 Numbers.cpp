#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int temp;
    cout << "Enter Two Number You want to Swap " << endl;
    cin >> a;
    cin >> b;

    cout << "Before Swapping A = " << a << " & "
         << "B = " << b << endl;

    cout << "After Swapping";

    /* --------------------- Using 3rd Variable and Swapping -------------------- */

    temp = a;
    a = b;
    b = temp;

    /* ------------------------ Another Method Using XOR ------------------------ */

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    /* ---------------------- Using Inbuilt Function "Swap" --------------------- */

    swap(a,b);

    cout << " A = " << a << " & "
         << "B = " << b << endl;

    return 0;
}
