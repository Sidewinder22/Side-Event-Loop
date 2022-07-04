/*
 * main.cpp
 *
 *  Created on: 1 lip 2022
 *      Author: sidewin
 */

#include <iostream>
#include "EventLoop.hpp"

int main()
{
	std::cout << "### Side-Event-Loop ###" << std::endl;

    EventLoop loop;
    loop.start();

    std::cout << "### Bye... ###" << std::endl;
    return 0;
}
