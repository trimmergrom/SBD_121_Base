#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 4;

    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < b; k++)
        {
            cout << " ";
        }
        b--;
        for (int j = 0; j < a; j++)
        {
            cout << "+";
        }
        a++;

        cout << "\n\n";
    }
    return 0;
}