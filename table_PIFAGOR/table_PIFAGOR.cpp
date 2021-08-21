#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 1;

    do
    {
        for (a = 1; a < 11; a++)
        {
        cout << a*b << " ";
        if (a == 10) { cout << "\n"; }
        }
         b += 1;

    } while (b < 11);

    return 0;
}



