#include <iostream>

using namespace std;

int lenght(char input[])
{

    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char input[])
{
    int start = 0;
    int end = lenght(input) - 1;

    while (start < end)
    {
        swap(input[start], input[end]);
        start++;
        end--;
    }
}

int main()
{

    char name[100];

    cout << "Enter String : ";
    cin.getline(name, 100);
    cout << "Your String is : " << name << endl;
    reverse(name);
    cout << "Reverse String : " << name;
    // cout <<"Length : "<<lenght(name);

    return 0;
}
