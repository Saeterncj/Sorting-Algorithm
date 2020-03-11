
/******************************************************************************
*
* @file     shared_data.c
* @brief    stdafx.cpp : source file that includes just the standard includes
*           SortingAlgorithms.pch will be the pre-compiled header stdafx.obj will 
*           contain the pre-compiled type information
* @version  V1.00
* @date     8, December 2018
*
* @note
*
******************************************************************************/

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file



/*----------------------------------------------------------------------------
*
* Place #include files required to compile this source file here.
*
*----------------------------------------------------------------------------*/

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
// function callbacks
// 
int ascending(int a, int b) {
	return a - b;
}
int descending(int a, int b) {
	return b - a;
}
