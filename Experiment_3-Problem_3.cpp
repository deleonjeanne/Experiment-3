#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	int a, b, temp;
	char printer[10];
	cout << "Enter array elements.. " << endl;
		for ( a = 0; a <= 9; a ++)
		{
			cin >> printer[a];
		}
		for ( a = 0; a <= 9; a ++)
		{
			for ( b = 0; b <= 8; b ++)
			{
				if (printer[b] > printer[b+1])
				{
					temp = printer[b];
					printer[b] = printer[b+1];
					printer[b+1] = temp;
				}
			}
		}
	cout << "Reversed output " << endl;
	for ( a = 0; a <= 9; a ++)
	{
		cout << printer[a];
	}

_getch();
return 0;
}
