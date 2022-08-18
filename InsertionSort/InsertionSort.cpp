// Insertion Sort C++ Implementation

#include<iostream>
using namespace std;
int main() {
	int a[] = {4, 1, 2, 9, 8, 5, 7, 6, 3};
	int j;
	cout << "Array Before Sort: ";
	for (int k = 0; k < 9; k++)
	{
		cout << a[k] << " ";
	}
	cout << "\n";
	int key;
	for (int i = 1; i < 9; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)  //By changing the greater than sign to lesser than sign, sorting can be reversed
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}

	cout << "Array After Insertion Sort: ";
	for (int l = 0; l < 9; l++)
	{
		cout << a[l] << " ";
	}

	return 0;
}