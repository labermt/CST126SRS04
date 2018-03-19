// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CSWomen.h"
#include "linkedlist.h"

#ifndef _NDEBUG
#	define _CRTDBG_MAP_ALLOC
#	include <stdlib.h>
#	include <crtdbg.h>
#endif

int main()
{
	auto const woman1 = new const CSWoman("Ada Lovelace", 1815, "Ada is considered the first computer programmer.");
	auto const woman2 = new const CSWoman("Grete Hermann", 1901, "Grete created the foundations of computational algebra.");
	auto const woman3 = new const CSWoman("Grace Hopper", 1906, "Grace created COBOL and the first compiler.");
	auto const woman4 = new const CSWoman("Ida Rhodes", 1900, "Ida co-designed the C-10 language for the UNIVAC 1 computer.");
	auto const woman5 = new const CSWoman("Dana Ulery", 1938, "Dana was the first female enngineer at the US JPL.");
	auto const woman6 = new const CSWoman("Mary Wilkes", 1937, "Mary was the first developer of LAP, the operating system for the first minicomputer.");
	auto const woman7 = new const CSWoman("Margaret R. Fox", 1916, "Margaret served as the first Secretary for the AFIPS.");
	auto const woman8 = new const CSWoman("Margaret Hamilton", 1936, "Margaret helped develop the onboard flight software for Apollo 11.");
	auto const woman9 = new const CSWoman("Patricia Selinger", 1949, "Patricia was a key author of IBM System R, and an IBM Fellow.");
	auto const woman10 = new const CSWoman("Marissa Mayer", 1975, "Marissa was the first female engineer at Google.");

	{
		LinkedList women;
		women.addToList(woman1);
		women.addToList(woman2);
		women.addToList(woman3);
		women.addToList(woman4);
		women.addToList(woman5);
		women.addToList(woman6);
		women.addToList(woman7);
		women.addToList(woman8);
		women.addToList(woman9);
		women.addToList(woman10);

		std::cout << women;
		women.reverse();
		std::cout << "~~~~~~~~~~Here is the list in reverse order~~~~~~~~~~" << std::endl;
		std::cout << std::endl;
		std::cout << women << std::endl;
	}

#ifndef _NDEBUG // Left check in code as a suggestion of a way to leave scaffolding in place. 
	_CrtDumpMemoryLeaks();
#endif

	return 0;
}
