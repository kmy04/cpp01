#ifndef HARL_CPP
# define HARL_CPP

#include <iostream>
#include <string>

class Harl {
private :
	void debug();

	void info();

	void warning();

	void error();

public :
	// log level을 입력받아 맞는 level에 log함수를 호출하여 출력해준다.
	void complain(std::string level);

};

#endif