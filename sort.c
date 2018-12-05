#include <stdio.h>
void printf_array(int array[], int len)
{
	for (int i = 0;i < len;i++)
	{
		printf("%d  ", array[i]);
	}
	printf("\n");
}
void bubbleSort(int array[],int len)
{
	for (int i = 0;i < len;i++)
	{
		for (int j = 0;j < len-i-1;j++)
		{
			if (array[j] > array[j+1])
			{
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
	
}
void selectionSort(int array[], int len)
{
	int max = 0,tmp=0;
	for (int i = 0;i < len;i++)
	{
		max = i;
		for (int j = i+1;j < len;j++)
		{
			if (array[j] > array[max])
			{
				max = j;
			}
		}
		tmp = array[i];
		array[i] = array[max];
		array[max] = tmp;
		printf_array(array, len);
	}

}
void insertionSort(int array[], int len)
{
	int preIndex = 0, current = 0;
	for (int i = 1;i < len;i++)
	{
		preIndex = i - 1;
		current = array[i];
		while (preIndex >= 0 && array[preIndex]>current)
		{
			array[preIndex + 1] = array[preIndex];
			preIndex--;
		}
		array[preIndex + 1] = current;
		printf_array(array, len);
		
	}
}
int main()
{
	int array[] = {1,4,123,99,44,88,66,79,3,7,9,4,3,0};
	selectionSort(array, sizeof(array) / 4);
	getchar();
	return 0;
}