#include <iostream>
#include <string>
#include <vector> // For the 2D Array
#include <algorithm> // For the Sorting of the Array

using namespace std;

int main()
{
    string s = "abc";
    cout << s << endl;

    string s2;
    s2 = "def";
    cout << s2 << endl;

    string *sp = new string;
    *sp = "mno";
    cout << sp << endl;
    cout << *sp << endl;

    /* --------- For the Creating of 2D Array we use the following code --------- */

    vector<string> v;

    /* -- For the adding of the element in the 2D Array we use the following code - */

    // v.push_back(s);
    v.push_back("Hello");

    /* ------- For the Printing of the 2D Array we use the following code ------- */

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;

        /* --------- For the Sorting of the Array we use the following code --------- */

        sort(v[i].begin(), v[i].end());
        cout << v[i] << endl;
    }

    return 0;
}
