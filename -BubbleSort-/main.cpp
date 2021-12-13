#include<iostream>

void PrintArray(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << input[i] << " ";
	}
}


void Swap(int&x,int&y)
{
	int temp = x;
	x = y;
	y = temp;
}

//Ot = n^2	Os = n
void BubbleSort(int input[], int size)
{
	for (int phase = 0; phase < size - 1; ++phase)
	{
		for (int k = 0; k < size - phase - 1; ++k)
		{
			if (input[k] > input[k + 1])
			{
				Swap(input[k], input[k + 1]);
			}
		}
	}
}

int main()
{
	int array[5]{ 8,7,2,3,1 };

	BubbleSort(array, 5);

	PrintArray(array, 5);

}