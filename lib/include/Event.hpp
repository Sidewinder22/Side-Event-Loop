/*
 * Event.hpp
 *
 *  Created on: 5 lip 2022
 *      Author: sidewin
 */

#ifndef LIB_INCLUDE_EVENT_HPP_
#define LIB_INCLUDE_EVENT_HPP_

#include <cstdint>

class Event
{
public:
	virtual ~Event() = default;

	uint32_t getId();

private:
	static uint32_t id_;
};

#endif /* LIB_INCLUDE_EVENT_HPP_ */
