/// C file layout

/******************************************************************************
*
* @file     quick_sort.cpp
* @brief    file for quick sort algorithm.
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
template<typename T>
void swap(T &a, T &b)
{
	T t = a;
	a = b;
	b = t;
}

int partition(int * p, int start, int end, int(*compare)(int, int)) {
	int pivot_v = p[end];
	int pivot_i = start;
	for (int i(start); i < end ; i++) {
		if (compare(p[i], pivot_v) <= 0) {
			/*int temp = p[i];
			p[i] = p[pivot_i];
			p[pivot_i++] = temp;*/
			swap(p[i], p[pivot_i]);
			pivot_i++;
		}
	}
	swap(p[pivot_i], p[end]);
	return pivot_i;
}
void quick_sort(int *p, int start, int end, int(*compare)(int, int)) {
	int pivot_i ;
	if (start >= end) return; 
	pivot_i = partition(p, start,end, compare);
	quick_sort(p, start, pivot_i-1, compare);
	quick_sort(p, pivot_i + 1, end, compare);
	
}