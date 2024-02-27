#include <iostream>
#include <string>

using namespace std;


int main() {

	int size = 5;

	//do {
	//	system("cls");
	//	cout << "Input size of array: ";
	//	cin >> size;
	//} while (size <= 0);

	int* array = new int[size];  // dynamic array

	//for (int i = 0; i < size; i++) // i(0, 1, 2, 3, 4)
	//{
	//	array[i] = 10; // --> *(array + i)
	//}


	//string result = "";
	//for (int j = 0; j < size; j++)
	//{
	//	result += array[j] + " ";
	//}


	*(array + 0) = 11;
	*(array + 1) = 22;
	*(array + 2) = 33;
	*(array + 3) = 44;
	*(array + 4) = 55;

	cout << array + 0 << " - " << *(array + 0) << endl;
	cout << array + 1 << " - " << *(array + 1) << endl;
	cout << array + 2 << " - " << *(array + 2) << endl;
	cout << array + 3 << " - " << *(array + 3) << endl;
	cout << array + 4 << " - " << *(array + 4) << endl;

	return 0;
}