// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "List.h"

#ifndef _NDEBUG
#	define _CRTDBG_MAP_ALLOC
#	include <stdlib.h>
#	include <crtdbg.h>
#endif

void printAndReverse()
{
	List list;
	list.printCSWomen();
	std::cout << std::endl;
	list.reverse();
	list.printCSWomen();
}

int main()
{
	printAndReverse();

#ifndef _NDEBUG
	_CrtDumpMemoryLeaks();
#endif

	return 0;
}
