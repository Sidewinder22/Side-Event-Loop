#include <iostream>
#include "EventLoop.hpp"

EventLoop::EventLoop()
	: running_(false)
	, eventQueue_(std::make_unique<EventQueue>())
{ }

EventLoop::~EventLoop()
{
	if (threadHandler_.joinable())
	{
		threadHandler_.join();
	}
}

void EventLoop::start()
{
    std::cout << "EventLoop is starting..." << std::endl;

	const std::lock_guard<std::mutex> lock(mutex_);
	running_ = true;

	threadHandler_ = std::thread(&EventLoop::startEventLoop, this);
}

void EventLoop::startEventLoop()
{
    while (running_)
    {
    	std::cout << "While..." << std::endl;

    	eventQueue_->waitForNextEvent();
    	auto event = eventQueue_->getNextEvent();
    	// dispatch event to the listener
    }
}

void EventLoop::stop()
{
	const std::lock_guard<std::mutex> lock(mutex_);

	running_ = false;
    std::cout << "EventLoop is stopped..." << std::endl;
}


void EventLoop::sendEvent(Event event)
{
	eventQueue_->sendEvent(event);
}
