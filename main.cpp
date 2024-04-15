#include <YaApp.h>
#include <Tool.h>

using namespace Tool;

std::string OW_API_KEY = "e7c0bce5516c376f0d980ddc956bb225";
std::string YA_API_KEY = "ec846f28-142d-4543-aba7-ec9a3195a6ff";


int main() {
	//setlocale(LC_ALL, "");
	SetConsoleOutputCP(CP_UTF8);
	std::cout << "Введите пункт отправления: ";
	std::string cityFrom; std::cin >> cityFrom;
	std::cout << "Введите пункт назначения: ";
	std::string cityTo; std::cin >> cityTo;
	YaScheduleApp* app = new YaScheduleApp(OW_API_KEY, YA_API_KEY, cityFrom, cityTo);
	int choice;
	std::string transport;
	bool flag = true;

	while (flag) {
		showMenu();
		std::cout << "Vvedite variant otveta: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			showSchedule(app->getScheduleBetweenCities());
			break;
		case 2:
			std::cout << "Kakoi vid ts vas interesuet? ";
			std::cin >> transport;
			showSchedule(app->getScheduleByTransport(transport));
			break;
		case 3:
			flag = false;
			break;
		}

	}
	return 0;
}