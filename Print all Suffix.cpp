#include <iostream>
#include <cstring>

using namespace std;

void Print_Suffix(char str[])
{
    int k;
   int n=strlen(str);
    for (int i =0;i<n;i++)
    {
        k=n;
        for (int j = 0;j<n+1;j++)
        {
           if (k<=i)
           {
             cout << str[k];
           }
           k--;

        }
        cout << endl;
    }
}

int main()
{

    char str[] = "abcd";
    Print_Suffix(str);

    return 0;
}
