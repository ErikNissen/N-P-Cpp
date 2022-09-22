#include <iostream>
#include "Stoppuhr/Stoppuhr.hpp"
#include <chrono>
#include <thread>

int main() {
	auto stoppuhr = Stoppuhr::Stoppuhr();
	stoppuhr.startTimer();
	std::cout << "Sleeping for 5 second" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(5));
	stoppuhr.setTimer();
	std::cout << "Sleeping for 3 second" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
	stoppuhr.setTimer();

	stoppuhr.printTimes();
	stoppuhr.resetTimer();
}
