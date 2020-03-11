// SortingAlgorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define MAXRANDVALUE 20

int * generate_random_numbers(int size) {
	srand(time(NULL));
	int * my_array = new int[size];
	for (int i(0); i < size; i++) {
		my_array[i] = rand() % MAXRANDVALUE + 1;
	}
	
	return my_array;
}
void printArray(int * myArray, int size) {
	for (int i(0); i < size; i++) {
		std::cout << myArray[i] << " ";
	}
	std::cout << "\n";

}

int main()
{
	std::cout << "Enter size of array: ";
	int size;
	std::cin >> size;
	int *p;
	p = generate_random_numbers(size);
	for (int i = 0; i < size; i++) {
		std::cout << p[i] << std::endl;
	}
	//selection_sort(p,size,ascending);
	//bubble_sort(p, size,ascending);
	//insertion_sort(p, size, descending);
	//merge_sort(p, size,ascending);
	quick_sort(p,0,size - 1,descending);
	printArray(p, size); 
    return 0;
	
}

