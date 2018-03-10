// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CSWoman.h"
#include "linkedlist.h"
#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

int main()
{
	CSWoman * woman0{ new CSWoman("Radia Perlman", 1951, "Grew up in NJ\n") };
	CSWoman * woman1{ new CSWoman("Carol Shaw", 1955, "In 2017, she won the Industry Icon Award at The Game Awards\n") };
	CSWoman * woman2{ new CSWoman("Susan Kare", 1954, "She is the designer of many typefaces, icons, and original marketing material for the original Macintosh operating system\n") };
	CSWoman * woman3{ new CSWoman("Grace Hopper", 1906, "Google made the Google Doodle for her 107th birthday\n") };
	CSWoman * woman4{ new CSWoman("Janese Swanson", 1958, "Wrote a thesis on gender issues in product design, play patterns and gender preferences\n") };
	CSWoman * woman5{ new CSWoman("Beatrice Worsley", 1921, "In 2014, she was posthumously awarded the Lifetime Achievement Award in Computer Science by the Canadian Association of Computer Science\n") };
	CSWoman * woman6{ new CSWoman("Dorothy Vaughan", 1910, "She worked for opportunities for the women in West Computing\n") };
	CSWoman * woman7{ new CSWoman("Sophie Wilson", 1957, "designed a microcomputer with a 6502 microprocessor\n") };
	CSWoman * woman8{ new CSWoman("Anita Borg", 1949, "She founded the Institute for Women and Technology and the Grace Hopper Celebration of Women in Computing\n") };
	CSWoman * woman9{ new CSWoman("Lucy Sanders", 1954, "co-founded the National Center for Women & Information Technology\n") };
	 
	linkedlist ll; 
	ll.add(woman0);
	ll.add(woman1);
	ll.add(woman2);
	ll.add(woman3);
	ll.add(woman4);
	ll.add(woman5);
	ll.add(woman6);
	ll.add(woman7);
	ll.add(woman8);
	ll.add(woman9);

	_CrtDumpMemoryLeaks();
    return 0;
};

