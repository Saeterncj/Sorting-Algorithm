/// C file layout

/******************************************************************************
*
* @file     selection_sort.cpp
* @brief    file for selection sort algorithm.
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

void selection_sort(int *p, int size, int (*compare)(int,int)) {
	for (int i = 0; i < size - 1; i++) {
		int element = i;
		for (int j(i+1); j < size; j++) {
			if (compare(p[element],p[j]) > 0)
				element = j;
		}
		int temp = p[i];
		p[i] = p[element];
		p[element] = temp;
	}
	std::cout << "\n";
}