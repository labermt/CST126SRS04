// WICLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define _CRTDBG_MAP_ALLOC  
#include <crtdbg.h>
#include "List.h"

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
	_CrtDumpMemoryLeaks();
    return 0;
}

