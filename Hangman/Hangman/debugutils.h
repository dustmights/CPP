#pragma once
#include <iostream>

void printAddress(void* address)
{
	std::cout << "0x" << int(address) << std::endl;
	std::cout << oxff << std::endl;
	std::cout << address << "/n";
}
