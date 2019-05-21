#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a;
	
	int provinceA[7];
	for (int a = 0; a < 7; a ++)
	{
		cout << "Province A, Day " << a + 1 << ": ";
		cin >> provinceA[a];
	}
	
	int provinceB[7];
	for (int a = 0; a < 7; a ++)
	{
		cout << "Province B, Day " << a + 1 << ": ";
		cin >> provinceB[a];
	}
	
	int provinceC[7];
	for (int a = 0; a < 7; a ++)
	{
		cout << "Province C, Day " << a + 1 << ": ";
		cin >> provinceC[a];
	}
	
	cout << "  " << endl;
	
	cout << "Displaying Values: " << endl;
	for (int a = 0; a < 7; a ++)
	{
		cout << "Province A, Day " << a + 1 << " = " << provinceA[a] << endl;
	}
	
	for (int a = 0; a < 7; a ++)
	{
		cout << "Province B, Day " << a + 1 << " = " << provinceB[a] << endl;
	}
	
	for (int a = 0; a < 7; a ++)
	{
		cout << "Province C, Day " << a + 1 << " = " << provinceC[a] << endl;
	}
	
_getch();
return 0;
}
