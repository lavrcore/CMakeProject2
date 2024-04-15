#include "Tool.h"


void Tool::showMenu() {
	std::cout << "1 - ѕолучить полное расписание между городами" << std::endl;
	std::cout << "2 - ѕолучить полное расписание между городами опреденного траспорта" << std::endl;
	std::cout << "3 - ¬ыход" << std::endl << std::endl;
}


void Tool::showSchedule(std::vector <std::vector <std::map <std::string, std::string>>> schedule) {
	for (int i = 0; i < schedule.size(); i++) {
		for (int j = 0; j < schedule[i].size(); j++) {
			std::cout << schedule[i][j]["Race Title"] << " ";
			std::cout << schedule[i][j]["Race Number"] << " ";
			std::cout << schedule[i][j]["Departure Station Title"] << " ";
			std::cout << schedule[i][j]["Departure Station Code"] << " ";
			std::cout << schedule[i][j]["Arrival Station Title"] << " ";
			std::cout << schedule[i][j]["Arrival Station Code"] << " ";
			std::cout << schedule[i][j]["Transport Type"] << " ";
			std::cout << schedule[i][j]["Departure Date"] << " ";
			std::cout << schedule[i][j]["Arrival Date"] << " ";
			std::cout << schedule[i][j]["Transport Company Code"] << " ";
			std::cout << schedule[i][j]["Price"] << std::endl << std::endl;
		}
	}
}