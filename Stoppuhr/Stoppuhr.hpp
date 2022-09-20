/*
Autor:          Erik Nissen
Studiengang:    Informationstechnologie (INI)
Matrikelnummer: 937388
Datei:          /Stoppuhr.hpp
Erstellt:       20.09.2022
*/

#ifndef AUFGABEN_STOPPUHR_HPP
#define AUFGABEN_STOPPUHR_HPP

#include <chrono>
#include <vector>

namespace Stoppuhr {
	//Class
	class Stoppuhr {
	private:
		//Variables
		std::chrono::time_point<std::chrono::high_resolution_clock> start;
		std::chrono::time_point<std::chrono::high_resolution_clock> end;
		std::vector<std::chrono::duration<double>> times;
		bool running = false;
	public:
		//Functions
		void startTimer();

		void setTimer();

		void resetTimer();

		void printTimes();

		int diff(std::chrono::time_point<std::chrono::high_resolution_clock> start, std::chrono::time_point<std::chrono::high_resolution_clock> end);
	};
}

#endif //AUFGABEN_STOPPUHR_HPP
