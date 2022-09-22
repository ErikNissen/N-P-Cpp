/*
Autor:          Erik Nissen
Studiengang:    Informationstechnologie (INI)
Matrikelnummer: 937388
Datei:          Stoppuhr/Stoppuhr.cpp
Erstellt:       22.09.2022
*/
#include <iostream>
#include "Stoppuhr.hpp"
#include "..\Usefull stuff.hpp"

namespace Stoppuhr{
	void Stoppuhr::startTimer(){
		std::cout << "Stoppuhr gestartet." << std::endl;
		start = std::chrono::system_clock::now();
		last = start;
	}
	void Stoppuhr::roundTimer(){
		std::cout << "Runde gespeichert" << std::endl;
		current = std::chrono::system_clock::now();
		end = current;
		times.insert({ times.size(), current - last});
		last = current;
	}
	void Stoppuhr::printTimes() {
		long long total[] = {0, 0, 0, 0};

		std::cout << "Gebe Zeiten aus:" << std::endl;
		// format: 00:00:00.000
		for (auto time : times) {
			total[0] += std::chrono::duration_cast<std::chrono::hours>(
					time.second).count();
			total[1] += std::chrono::duration_cast<std::chrono
					::minutes>(
					time.second).count();
			total[2] += std::chrono::duration_cast<std::chrono
					::seconds>(
					time.second).count();
			total[3] += std::chrono::duration_cast<std::chrono
					::milliseconds>(
					time.second).count();
			std::cout << time.first+1 << ". " <<
			          std::chrono::duration_cast<std::chrono::hours>(
							  time.second).count() << ":"
			          << std::chrono::duration_cast<
			                  std::chrono::minutes>(time.second
							  ).count() << ":"
			          << std::chrono::duration_cast<
			                  std::chrono::seconds>(time.second
							  ).count() << "."
			          << std::chrono::duration_cast<
			                  std::chrono::milliseconds>(time.second
							  ).count()
					  << std::endl;
		}
		std::cout << "\nGesamt: " << total[0] << ":" << total[1] <<
		":" << total[2] << "." << total[3] <<
		"\n" << std::endl;
	}
	void Stoppuhr::resetTimer(){
		std::cout << "Stoppuhr zur"<<ue<<"ckgesetzt." << std::endl;
		start = std::chrono::system_clock::now();
		last = start;
		times.clear();
	}
}
