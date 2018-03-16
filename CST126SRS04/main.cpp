// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CSWoman.h"
#include "linkedlist.h"
#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
//I would be lost without Mitch for this assignment. Thank you 
int main()
{
	auto const woman0{ new const CSWoman("Radia Perlman", 1951, "Grew up in NJ\n") };
	auto const woman1{ new const CSWoman("Carol Shaw", 1955, "In 2017, she won the Industry Icon Award at The Game Awards\n") };
	auto const woman2{ new const CSWoman("Susan Kare", 1954, "She is the designer of many typefaces, icons, and original marketing material for the original Macintosh OS\n") };
	auto const woman3{ new const CSWoman("Grace Hopper", 1906, "Google made the Google Doodle for her 107th birthday\n") };
	auto const woman4{ new const CSWoman("Janese Swanson", 1958, "Wrote a thesis on gender issues in product design, play patterns and gender preferences\n") };
	auto const woman5{ new const CSWoman("Beatrice Worsley", 1921, "In 2014, she was posthumously awarded the Lifetime Achievement Award in Computer Science\n") };
	auto const woman6{ new const CSWoman("Dorothy Vaughan", 1910, "She worked for opportunities for the women in West Computing\n") };
	auto const woman7{ new const CSWoman("Sophie Wilson", 1957, "designed a microcomputer with a 6502 microprocessor\n") };
	auto const woman8{ new const CSWoman("Anita Borg", 1949, "She founded the Institute for Women and Technology and the Grace Hopper Celebration of Women in Computing\n") };
	auto const woman9{ new const CSWoman("Lucy Sanders", 1954, "co-founded the National Center for Women & Information Technology\n") };
	 
	if 
	(
		woman0 != nullptr &&
		woman1 != nullptr &&
		woman2 != nullptr &&
		woman3 != nullptr &&
		woman4 != nullptr &&
		woman5 != nullptr &&
		woman6 != nullptr &&
		woman7 != nullptr &&
		woman8 != nullptr &&
		woman9 != nullptr
	)
	{
		linkedlist ll;
		ll.add(*woman0);
		ll.add(*woman1);
		ll.add(*woman2);
		ll.add(*woman3);
		ll.add(*woman4);
		ll.add(*woman5);
		ll.add(*woman6);
		ll.add(*woman7);
		ll.add(*woman8);
		ll.add(*woman9);

		std::cout << ll << std::endl;
		std::cout << "**Reverse Order**\n\n" << std::endl; 
		ll.reverse();
		std::cout << ll << std::endl;
	} 
	_CrtDumpMemoryLeaks();
	system("pause");
    return 0;
};

