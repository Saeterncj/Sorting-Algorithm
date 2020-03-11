/// C file layout

/******************************************************************************
*
* @file     bubble_sort.cpp
* @brief    file for bubble sort algorithm.  
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
int bubble_sort(int * p, int size, int (*compare)(int,int)) {

	while (size-- > 1) {
		int sorted_flag = 1;
		for (int i = 0; i < size; i++) {
			if (compare(p[i],p[i + 1]) > 0) {
				int temp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = temp;
				sorted_flag = 0;
			}
		}
		if (sorted_flag) {
			std::cout << "Already Sorted\n";
			break;
		}
	}

	return 0;
}