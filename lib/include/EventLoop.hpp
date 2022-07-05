/*
 * EventQueue.hpp
 *
 *  Created on: 3 lip 2022
 *      Author: sidewin
 */

#ifndef LIB_INCLUDE_EVENTLOOP_HPP
#define LIB_INCLUDE_EVENTLOOP_HPP

#include <mutex>
#include <memory>
#include <thread>
#include "EventQueue.hpp"

class EventLoop
{
public:
    EventLoop();
    ~EventLoop();

    void start();
    void stop();

    // temporary -> will be moved to the dispatcher
    void sendEvent(Event event);

private:
    void startEventLoop();

    bool running_;
    std::mutex mutex_;
    std::thread threadHandler_;
    std::unique_ptr<EventQueue> eventQueue_;
};

#endif // LIB_INCLUDE_EVENTLOOP_HPP
