#include "stdafx.h"
#include "CSWoman.h"
#include "LinkList.h"
#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include<crtdbg.h>


int main()
{
	{
		LinkList cs_women;
		const auto w0 = new CSWoman("Ada Lovelace", 1815, "unknown");
		cs_women.add(w0);
		const auto w1 = new CSWoman("your mother", 1800, "Also Father");
		cs_women.add(w1);
		const auto w2 = new CSWoman("Carol Shaw", 1855, "Atari Game Dev");
		cs_women.add(w2);
		const auto w3 = new CSWoman("", 1, "");
		cs_women.add(w3);
		const auto w4 = new CSWoman("", 1, "");
		cs_women.add(w4);
		const auto w5 = new CSWoman("", 1, "");
		cs_women.add(w5);
		const auto w6 = new CSWoman("", 1, "");
		cs_women.add(w6);
		const auto w7 = new CSWoman("", 1, "");
		cs_women.add(w7);
		const auto w8 = new CSWoman("", 1, "");
		cs_women.add(w8);
		const auto w9 = new CSWoman("", 1, "");
		cs_women.add(w9);

		std::cout << cs_women << std::endl;
		/*cs_women.reverse();
		std::cout << cs_women << std::endl;*/
	}
	_CrtDumpMemoryLeaks();
    return 0;
}

