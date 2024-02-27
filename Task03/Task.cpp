#include <iostream>


using namespace std;

void random_init(int*, int, int);
string convert_vector_to_string(int*, int);

bool is_the_same_values(int*, int);

int main() {


	int size;
	int bound;

	do {
		system("cls");
		cout << "Input size of array and bound: ";
		cin >> size >> bound;
	} while (size <= 0);

	int* vector = new int[size];  

	random_init(vector, size, bound);

	cout << "\nElement of vector:\n" << convert_vector_to_string(vector, size) << endl;

	string result = is_the_same_values(vector, size) ? "Yes, there are the same value." 
		: "No, all values are different.";

	cout << "Result - " << result << endl;

	delete[] vector;

	return 0;
}