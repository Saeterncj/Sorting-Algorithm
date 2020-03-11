
/******************************************************************************
*
* @file     insertion_sort.cpp
* @brief    
* @version  V1.00
* @date     march 10, 2020
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
void insertion_sort(int * p, int size, int (*compare)(int,int) ){
	for (int i = 1; i < size; i++) {
		int hole = i, value = p[i];

		while (hole > 0 && compare(p[hole-1],value) > 0) {
			p[hole] = p[hole - 1];
			hole -= 1;
		}
		p[hole] = value;
	}
}