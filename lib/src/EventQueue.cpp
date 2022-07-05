/*
 * EventQueue.cpp
 *
 *  Created on: 5 lip 2022
 *      Author: sidewin
 */

#include <iostream>
#include <chrono>
#include <thread>
#include "EventQueue.hpp"

void EventQueue::sendEvent(Event event)
{
	std::cout << "EventQueue::sendEvent[" << event.getId() << "]" << std::endl;

	const std::lock_guard<std::mutex> lock(mutex_);

	queue_.push(event);
}

Event EventQueue::getNextEvent()
{
	std::cout << "EventQueue::getNextEvent" << std::endl;

	const std::lock_guard<std::mutex> lock(mutex_);

	if (queue_.empty())
	{
		return {};
	}

	auto event = queue_.front();
	queue_.pop();

	return event;
}

void EventQueue::waitForNextEvent()
{
	std::cout << "EventQueue::waitForNextEvent" << std::endl;

	std::this_thread::sleep_for(std::chrono::seconds(1));

	if (!queue_.empty())
	{
		std::cout << "Event received!!!" << std::endl;
	}

	// add lock_guard and cond_var
}
