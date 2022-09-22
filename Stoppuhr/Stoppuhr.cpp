/*
Autor:          Erik Nissen
Studiengang:    Informationstechnologie (INI)
Matrikelnummer: 937388
Datei:          Stoppuhr/Stoppuhr.cpp
Erstellt:       22.09.2022
*/
#include <iostream>
#include "Stoppuhr.hpp"

namespace Stoppuhr{
	void Stoppuhr::startTimer(){
		std::cout << "Timer started" << std::endl;
		start = std::chrono::system_clock::now();
		last = start;
	}
	void Stoppuhr::setTimer(){
		std::cout << "Timer set" << std::endl;
		current = std::chrono::system_clock::now();
		end = current;
		times.push_back(current - last);
	}
	void Stoppuhr::printTimes() {
		std::cout << "Printing times" << std::endl;
		for (auto time : times) {
			std::cout << time.count() << std::endl;
		}
	}
	void Stoppuhr::resetTimer(){
		std::cout << "Timer reset" << std::endl;
		start = std::chrono::system_clock::now();
		last = start;
	}
}
