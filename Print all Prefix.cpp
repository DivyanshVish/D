#include <iostream>
#include <cstring>

using namespace std;

void Print_Prefix(char str[])
{
    for (int e = 0; str[e] != '\0'; e++)
    {

        for (int s = 0; s <= e; s++)
        {
            cout << str[s];
        }
        cout << endl;
    }
}

int main()
{

    char str[] = "abcd";
    Print_Prefix(str);

    return 0;
}
