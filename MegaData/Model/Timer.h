/*
 * Timer.h
 *
 *  Created on: Jan 31, 2017
 *      Author: jpet4781
 */

#ifndef MODEL_TIMER_H_
#define MODEL_TIMER_H_

#include <time.h>

class Timer {

private:
	clock_t executionTime;

public:
	Timer();
	void startTimer();
	void finishTimer();
	void resetTimer();
	void displayTimerInformation();
	long getExecutionTimeInMicroseconds();
};

#endif /* MODEL_TIMER_H_ */
