#include "stdafx.h"
#include "cs_woman.h"
#include "link_list.h"
#include <iostream>
#include <iomanip>


int main()
{
	link_list cs_women;
	const auto w0 = new cs_woman("Ada Lovelace", 1815, "she was an analyst of Charles Babbage's analytical engine and is considered by many the first computer programmer.");
	cs_women.add(w0);
	const auto w1 = new cs_woman("Kathleen Booth", 1922, "she was credited with writing the assembly language for the ARC2 computer.");
	cs_women.add(w1);
	const auto w2 = new cs_woman("Carol Shaw", 1955, "she was an Atari Game Dev.");
	cs_women.add(w2);
	const auto w3 = new cs_woman("Dana Ulery", 1938, "she was the first female engineer at Jet Propulsion Laboratory, developing real-time tracking systems using a North American Aviation Recomp II.");
	cs_women.add(w3);
	const auto w4 = new cs_woman("Joan Ball", 1934, "she was the first person to start a computer dating service in 1964.");
	cs_women.add(w4);
	const auto w5 = new cs_woman("Vera Molnar", 1924, "in 1968 she began working with computers, where she began to create algorithmic drawings based on simple geometric shapes geometrical themes.");
	cs_women.add(w5);
	const auto w6 = new cs_woman("Margaret Hamilton", 1936, "she was the Director of the Software Engineering Division of the MIT Instrumentation Laboratory, which developed on-board flight software for the Apollo space program.");
	cs_women.add(w6);
	const auto w7 = new cs_woman("Shafi Goldwasser", 1958, "she was a theoretical computer scientist, is a two-time recipient of the Gödel Prize for research on complexity theory.");
	cs_women.add(w7);
	const auto w8 = new cs_woman("Sandra Kurtzig", 1947, "founded ASK Computer Systems, an early Silicon Valley startup.");
	cs_women.add(w8);
	const auto w9 = new cs_woman("Sister Mary Kenneth Keller", 1913, "she became the first American woman to earn a Ph.D. in Computer Science in 1965.");
	cs_women.add(w9);

	std::cout << "The list of CS women is:" << std::endl;
	std::cout << std::setfill('-')<< std::setw(100)<<"-"<< std::endl;
	std::cout << cs_women << std::flush;
	std::cout << std::setfill('-')<< std::setw(100)<<"-"<< std::endl;
	std::cout << std::endl;
	cs_women.reverse();
	std::cout << "The list of Computer Science women in reverse:"<< std::endl;
	std::cout << std::setfill('-')<< std::setw(100)<<"-"<< std::endl;
	std::cout << cs_women << std::flush;
	std::cout << std::setfill('-')<< std::setw(100)<<"-"<< std::endl;
    return 0;
}

