#include <iostream>

using namespace std;

int main()
{
    int a;
    int n;
    cout << "Enter a "; cin >> a;
    cout << "Enter n "; cin >> n;

    int exp = a;
    for (int i = 0; i < (n-1); i++)
    {
        exp *= a;
    }

    cout << "pow(" << a << ", " << n << ") = " << exp << endl;
    
    return 0;
}

