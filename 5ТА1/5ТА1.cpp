#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int low;
	int temp;
	char arraySymbol[6];
	int arrayInt[6];
	
	for (int i = 0; i < 6; i++)
	{
		cin >> arraySymbol[i];
	}
	for (int i = 0; i < 6; i++)
	{
		arrayInt[i] = (int)arraySymbol[i];

	}
	for (int i = 0; i < 6-1; i++)
	{
		low = i;
		for (int j = i + 1; j < 6; j++)
		{
			if (arrayInt[j] < arrayInt[low])
			{
				low = j;

			}


		}
		temp = arrayInt[low];
		arrayInt[low] = arrayInt[i];
		arrayInt[i] = temp;


	}
	for (int k = 0; k < 6; k++)
	{

		cout << arrayInt[k] << " " << endl;
		arraySymbol[k] = arrayInt[k];
		cout << "Отсортированные элементы строки" << endl;
		cout << arraySymbol[k] << "\t";

	}
	
}
