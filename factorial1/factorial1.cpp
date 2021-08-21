#include <iostream>
#include <conio.h>

using namespace std;

#define ESCAPE 27
int main()
{    
        int n, i, fact;
        char end;
do
    {
        fact = 1;
        cout << "Enter any integer numder "; cin >> n;        
        for (i = 1; i <= n; i++)
        {            
            fact *= i;
        }
        cout << "!" << n << " = " << fact << endl; 
        cout << "For leter press any kay, for exit - press Esc" << endl;
        end = _getch();
    } while (end != ESCAPE);
    return 0;
}


