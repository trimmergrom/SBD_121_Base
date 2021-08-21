#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 1;
    int c = 1;
    int d = 5;
    int e = 5;    

    for (int i = 0; i < 5; i++)
    {
        for (int k = 1; k < a; k++)
        {
            cout << " ";
        }
        a--;        
        for (int j = 0; j < 1; j++)
        {
            cout << "/";
        }
       
        for (int k = 1; k < b; k++)
        {
            cout << " ";
        }
        b++;
        for (int k = 1; k < c; k++)
        {
            cout << " ";
        }
        c++;
        for (int j = 0; j < 1; j++)
        {
            cout << "\\";
        }       

        cout << "\n\n";
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < 1; j++)
        {
            cout << "\\";
        }
        for (int k = 1; k < d; k++)
        {
            cout << " ";
        }
        d--;
        for (int k = 1; k < e; k++)
        {
            cout << " ";
        }
        e--;
        for (int j = 0; j < 1; j++)
        {
            cout << "/";
        }
        cout << "\n\n";
    }    
    return 0; 
}


