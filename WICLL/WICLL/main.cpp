#include "stdafx.h"
#include <iostream>
#include "CSWoman.h"
#include "LinkedList.h"

int main()
{
	LinkedList* listOfWomen = new LinkedList();

	listOfWomen->add(new CSWoman("name", 1999, "fact"));
	
	return 0;
}