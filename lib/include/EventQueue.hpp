/*
 * EventQueue.hpp
 *
 *  Created on: 5 lip 2022
 *      Author: sidewin
 */

#ifndef LIB_INCLUDE_EVENTQUEUE_HPP_
#define LIB_INCLUDE_EVENTQUEUE_HPP_

#include <mutex>
#include <queue>
#include "Event.hpp"

class EventQueue
{
public:
	void sendEvent(Event event);
	Event getNextEvent();
	void waitForNextEvent();

private:
	std::mutex mutex_;
	std::queue<Event> queue_;
};

#endif /* LIB_INCLUDE_EVENTQUEUE_HPP_ */
