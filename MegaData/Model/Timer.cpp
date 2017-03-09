/*
 * Timer.cpp
 *
 *  Created on: Jan 31, 2017
 *      Author: jpet4781
 */

#include <iostream>
#include "Timer.h"

using namespace std;

Timer::Timer() {
	executionTime = 0;
}

void Timer :: resetTimer(){
	executionTime = 0;
}

void Timer :: startTimer(){
	executionTime = clock();
}

void Timer :: finishTimer(){
	executionTime = clock() - executionTime;
}

long Timer :: getExecutionTimeInMicroseconds(){
	return executionTime;
}

void Timer :: displayTimerInformation(){
	cout << "It took this long to execute: " << executionTime << endl;
	cout << "That is this many seconds: " << executionTime/CLOCKS_PER_SEC << endl;
}
