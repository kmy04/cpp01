#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl \
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl \
		<< "I cannot believe adding extra bacon costs more money." << std::endl \
		<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl \
	<< "I think I deserve to have some extra bacon for free." << std::endl \
	<< "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl \
	<< "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*functions[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int idx = -1;

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			idx = i;
			break ;
		}
	}

	// switch case문의 특성에는 참의 값이 나왔을 경우
	// 그 뒤에 모든 case들은 다 참이 된다는 특성을 활용하여
	// 입력받은 level의 상위 level들까지 모두 출력하게 하였다.
	switch (idx) {
		case 0:
			(this->*functions[0])();
		case 1:
			(this->*functions[1])();
		case 2:
			(this->*functions[2])();
		case 3:
			(this->*functions[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}