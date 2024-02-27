
// O(N^2)
bool is_the_same_values(int* vector, int size) {

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (*(vector + i) == *(vector + j)) {
				return true;
			}
		}
	}

	return false;
}