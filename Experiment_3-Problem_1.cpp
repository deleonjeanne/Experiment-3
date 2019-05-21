#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int array [10];
	double total = 0;
	double average = 0;
	int a, b, c;
	
		cout << "Enter ten(10) values with spaces in between.. " << endl;
		
	for (a = 0; a < 10; a ++)
	{
		cin >> array [a];
		total += array [a];
		average = total / 10;
	}
	
	int max = array [0];
	
	for (b = 0; b < 10; b ++)
	{
		if (max < array[b])
			max = array[b];
	}
	
	int min = array [0];
	
	for (c = 0; c < 10; c ++)
	{
		if (min > array[c])
			min = array[c];
	}
	
		cout << " The smallest integer is.. " << min << endl;
		cout << " The largest integer is.. " << max << endl;
		cout << " The total of the values is.. " << total << endl;
		cout << " The average of the values is.. " << average << endl;
		
_getch();
return 0;
}
