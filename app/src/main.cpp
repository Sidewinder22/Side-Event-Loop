/*
 * main.cpp
 *
 *  Created on: 1 lip 2022
 *      Author: sidewin
 */

#include <iostream>
#include <chrono>
#include <thread>
#include "EventLoop.hpp"
#include "Event.hpp"
#include "EventQueue.hpp"

int main()
{
	std::cout << "### Side-Event-Loop ###" << std::endl;

    EventLoop loop;
    loop.start();

	std::this_thread::sleep_for(std::chrono::seconds(2));
    // temp -> I need a event dispatcher
    Event event;
    loop.sendEvent(event);

	std::this_thread::sleep_for(std::chrono::seconds(3));
	loop.stop();

    std::cout << "### Bye... ###" << std::endl;
    return 0;
}
