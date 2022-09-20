/*
Autor:          Erik Nissen
Studiengang:    Informationstechnologie (INI)
Matrikelnummer: 937388
Datei:          Stoppuhr/Stoppuhr.cpp
Erstellt:       20.09.2022
*/

//Includes
#include <iostream>
#include <chrono>
#include <vector>

//Namespaces
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
		void startTimer(){};

		void setTimer(){};

		void resetTimer(){};

		void printTimes(){};

		long long diff(std::chrono::time_point<std::chrono
		::high_resolution_clock> start, std::chrono::time_point<std::chrono::high_resolution_clock> end){};

	};
}
