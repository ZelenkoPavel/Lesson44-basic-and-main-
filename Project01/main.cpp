#include <iostream>
#include <string>

using namespace std;


int main() {

	int size;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	int* array = new int[size];  // dynamic array

	for (int i = 0; i < size; i++) // i(0, 1, 2, 3, 4)
	{
		array[i] = 10; // --> *(pointer + i)
	}


	string result = "";
	for (int j = 0; j < size; j++)
	{
		result += array[j] + " ";
	}

	cout << result << endl;

	return 0;
}