#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < a; j++)
        {            
            cout << '+';
        }
        a--;

        cout << "\n\n";    
    }    

    return 0;
}

