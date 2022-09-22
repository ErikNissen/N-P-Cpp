/*
Autor:          Erik Nissen
Studiengang:    Informationstechnologie (INI)
Matrikelnummer: 937388
Datei:          Stoppuhr/Stoppuhr.hpp
Erstellt:       22.09.2022
*/

#ifndef AUFGABEN_STOPPUHR_HPP
#define AUFGABEN_STOPPUHR_HPP

#include <chrono>
#include <map>

namespace Stoppuhr{
	class Stoppuhr{
	public:
		void startTimer();
		void roundTimer();
		void printTimes();
		void resetTimer();

	private:
		std::chrono::time_point<std::chrono::system_clock> start;
		std::chrono::time_point<std::chrono::system_clock> end;
		std::chrono::time_point<std::chrono::system_clock> last;
		std::chrono::time_point<std::chrono::system_clock> current;
		std::map<int, std::chrono::duration<double>> times;

	};
}

#endif //AUFGABEN_STOPPUHR_HPP
