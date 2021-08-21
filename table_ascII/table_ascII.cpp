#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i;
    int j = 0;
   
    for (i = 0; i < 256; i++)
    {
        cout << (char)i << "  ";
        j += 1;
        if (j % 16 == 0) { cout << "\n"; }
    }
    
        return 0;  
}
