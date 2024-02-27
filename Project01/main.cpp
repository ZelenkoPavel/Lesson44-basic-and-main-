#include <iostream>
#include <ctime>

using namespace std;


int main() {
	
	srand(time(NULL));

	int size;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	int* array = new int[size];  // dynamic array

	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 10;
	}

	cout << "\nElements of dynamic array: ";

	for (int j = 0; j < size; j++)
	{
		cout << *(array + j) << " ";
	}

	cout << endl;

	return 0;
}