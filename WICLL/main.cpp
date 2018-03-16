#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "CSWoman.h"
#include "link_list.h"



int main()
{
	link_list cs_women;
	const auto const w0 = new CSWoman("Ada Lovelace", 1815, "she was an analyst of Charles Babbage's analytical engine and is considered by many the first computer programmer.");
	cs_women.add(w0);
	const auto const w1 = new CSWoman("Kathleen Booth", 1922, "she was credited with writing the assembly language for the ARC2 computer.");
	cs_women.add(w1);
	const auto const w2 = new CSWoman("Carol Shaw", 1955, "she was an Atari Game Dev.");
	cs_women.add(w2);
	const auto const w3 = new CSWoman("Dana Ulery", 1938, "she was the first female engineer at Jet Propulsion Laboratory, developing real-time tracking systems using a North American Aviation Recomp II.");
	cs_women.add(w3);
	const auto const w4 = new CSWoman("Joan Ball", 1934, "she was the first person to start a computer dating service in 1964.");
	cs_women.add(w4);
	const auto const w5 = new CSWoman("Vera Molnar", 1924, "in 1968 she began working with computers, where she began to create algorithmic drawings based on simple geometric shapes geometrical themes.");
	cs_women.add(w5);
	const auto const w6 = new CSWoman("Margaret Hamilton", 1936, "she was the Director of the Software Engineering Division of the MIT Instrumentation Laboratory, which developed on-board flight software for the Apollo space program.");
	cs_women.add(w6);
	const auto const w7 = new CSWoman("Shafi Goldwasser", 1958, "she was a theoretical computer scientist, is a two-time recipient of the Gödel Prize for research on complexity theory.");
	cs_women.add(w7);
	const auto const w8 = new CSWoman("Sandra Kurtzig", 1947, "founded ASK Computer Systems, an early Silicon Valley startup.");
	cs_women.add(w8);
	const auto const w9 = new CSWoman("Sister Mary Kenneth Keller", 1913, "she became the first American woman to earn a Ph.D. in Computer Science in 1965.");
	cs_women.add(w9);

	std::cout << "The list of CS women is:" << std::endl;
	std::cout << std::setfill('-')<< std::setw(60)<<"-"<< std::endl;
	std::cout << cs_women << std::flush;
	std::cout << std::setfill('-')<< std::setw(60)<<"-"<< std::endl;
	std::cout << std::endl;
	cs_women.reverse();
	std::cout << "The list of Computer Science women in reverse:"<< std::endl;
	std::cout << std::setfill('-')<< std::setw(60)<<"-"<< std::endl;
	std::cout << cs_women << std::flush;
	std::cout << std::setfill('-')<< std::setw(60)<<"-"<< std::endl;
    return 0;
}

