/// C file layout

/******************************************************************************
*
* @file     merge_sort.cpp
* @brief    file for merge sort algorithm. 
using the following resource
https://www.youtube.com/watch?v=TzeBrDU-JaY&list=PL2_aWCzGMAwKedT2KfDMB9YA5DgASZb3U&index=5
* @version  V1.00
* @date     March 10, 2020
*
* @note
*
******************************************************************************/

/*----------------------------------------------------------------------------
*
* Place #include files required to compile this source file here.
*
*----------------------------------------------------------------------------*/

#include "stdafx.h"
/*----------------------------------------------------------------------------
*
* Place function prototypes that will be used only by this file here.
* This section need only include "forward referenced" functions.
*
*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
*
* Define global variables that will be used by both this source file
* and by other source files here.
*
*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
*
* Place #define constants and macros that will be used only by this
* source file here.
*
*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
*
* Place typedefs, structs, unions, and enums that will be used only
* by this source file here.
*
*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
*
* Place static variables that will be used only by this file here.
*
*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
*
* Place function bodies here.
*
*----------------------------------------------------------------------------*/
void merge(int * left_array, int * right_array, int * p,int size, int(*compare)(int, int)) {
	int l_length = size / 2;
	int r_length = size - l_length;
	int i,j,k;
	i = j = k = 0;
	while (i < l_length && j < r_length) {
		if (compare(left_array[i],right_array[j]) < 0) {
			p[k] = left_array[i++];
		}
		else {
			p[k] = right_array[j++];
		}
		k++;
	}
	while (i < l_length) {
		p[k++] = left_array[i++];
	}
	while (j < r_length) {
		p[k++] = right_array[j++];
	}
}

void merge_sort(int * p, int size, int (*compare)(int, int) ){
	int mid = size / 2;
	if (size < 2) {
		return;
	} 
	int * leftArray = new int[mid];
	int * rightArray = new int[size-mid];
	for (int i(0); i < mid; i++) {
		leftArray[i] = p[i];
	}
	for (int i(mid); i < size; i++) {
		rightArray[i - mid] = p[i];
	}
	merge_sort(leftArray, mid, compare);
	merge_sort(rightArray, size - mid, compare);
	merge(leftArray, rightArray, p, size, compare);
	delete[] leftArray;
	delete[] rightArray;
}