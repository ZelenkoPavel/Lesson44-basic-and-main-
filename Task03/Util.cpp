#include <stdlib.h>
#include <ctime>
#include <string>

using namespace std;

void random_init(int* vector, int size, int bound) {
	if (size <= 0) {
		return;
	}
	srand(time(NULL));


	for (int i = 0; i < size; i++)
	{
		*(vector + i) = rand() % (bound + 1);
	}
}

string convert_vector_to_string(int* vector, int size) {
	if (size <= 0) {
		return "-1";
	}
	string msg = "";


	for (int i = 0; i < size; i++)
	{
		msg += to_string(*(vector + i)) + " ";
	}

	return msg;
}