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
	void complain(std::string level);

};

#endif