#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>

#include "Stoppuhr/Stoppuhr.hpp"
#include "Usefull stuff.hpp"

// using Namespaces
using namespace std;

int main() {
	auto stoppuhr = Stoppuhr::Stoppuhr();
	int input, h_r, menu = 0, wahl, duration;
	bool exit = true, menu1 = true, menu1_1 = true, menu1_2 = true;
	//stoppuhr.startTimer();

	// Menu
	while (exit) {
		while (menu1) {
			// Hoch zählen (2) / runter zählen (1) - Hauptmenü
			cout << "Geben Sie an welche Art von Stoppuhr Sie haben"
					" m"<<oe<<"chten\n"
				<< "\t1. Runterz"<<ae<<"hlen - Coundown\n"
				<< "\t2. Hochz"<<ae<<"hlen\n"
				<< "\t3. Beenden - Programm wird beendet\n\t" <<
				endl;
			cin >> h_r;
			switch ( h_r ) {
				case 1:  // Runterzählen - menu
					menu = 1;
					menu1 = false;
					break;
				case 2:  // Hochzählen - menu
					menu = 2;
					menu1 = false;
					break;
				case 3:
					exit = false;
					menu1 = false;
					break;
				default:
					cout << "Falsche Eingabe" << endl;
					break;
			}
		}
		if (menu == 1){
			while (menu1_1 ){
				cout << "1. Countdown" << endl;
				cout << "2. Zeiten ausgeben" << endl;
				cout << "3. Stoppuhr zur"<<ue<<"cksetzen" << endl;
				cout << "4. Beenden"<<endl;
				cin >> wahl;
				switch ( wahl ) { // Runterzählen - menu
					case 1: // Case 1: roundTimer - chrono::seconds(duration));
						cout << "Geben Sie eine Zeit in Sekunden an\n\t:";
						cin >> duration;
						stoppuhr.startTimer();
						this_thread::sleep_for(chrono::seconds(duration));
						stoppuhr.roundTimer();
						break;
					case 2: // Case 2: print
						stoppuhr.printTimes();
						break;
					case 3: // Case 3: reset
						stoppuhr.resetTimer();
						break;
					case 4: // Case 4: exit
						menu1_1 = false;
						break;
					default:
						cout << "Falsche Eingabe" << endl;
						break;
				}
			}
		}else if(menu == 2){
			while (menu1_2 ) {
				cout << "1. Hochz" << ae << "hlen" << endl;
				cout << "2. Zeiten ausgeben" << endl;
				cout << "3. Stoppuhr zur" << ue << "cksetzen" << endl;
				cout << "4. Beenden" << endl;
				cin >> wahl;
				switch ( wahl ) { // Hochzählen - Menu
					case 1: // Case 1: Start Zählen bis input X - if(X){roundTimer; break;}
						stoppuhr.startTimer();
						// check if user input is "X"

						while ( true ) {
							if ( GetAsyncKeyState( 0x58 ) ) { // if input is x
								stoppuhr.roundTimer();
								// stoppuhr.printTimes();
								break;
							}

						}
						break;
					case 2: // Case 2: print
						stoppuhr.printTimes();
						break;
					case 3: // Case 3: reset - ggf erneut stoppuhr.startTimer();
						stoppuhr.resetTimer();
						break;
					case 4: // Case 4: exit
						menu1_2 = false;
						break;
					default:
						cout << "Falsche Eingabe" << endl;
						break;
				}
			}
		}
	}
	return 0;
}


/*
- folgende Funktionen haben:
- einmaliger Start
	- danach beliebig häufige Zeitnahme. Speicherung
	entweder mit einem vom Aufrufer zu vergebenden Token
	oder eines fortlaufenden Zählers.
- Reset
	- Abfrage der Zeitdifferenz zwischen beliebigen dieser Zeitnahmen mit Angabe
	ihrer Token
- mit den Spracheigenschaften aus C++11 realisiert werden
 */
