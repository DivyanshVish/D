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

int main()
{

    char name[100];

    cout << "Enter Your Name : ";
    cin >> name;
    cout << "Your Name is : " << name << endl;

    cout <<"Length : "<<lenght(name);

    return 0;
}
