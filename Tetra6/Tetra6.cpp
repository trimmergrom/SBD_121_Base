#include <iostream>

using namespace std;

int main()
{
	
	for (int j = 1; j < 26; j ++ )
	{
		if (j%2 == 0) {cout << "- ";}
		else {cout << "+ ";}
		if (j%5 == 0) {cout << "\n\n";}
	}

	return 0;	
}