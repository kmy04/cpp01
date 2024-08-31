#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private :
	std::string _type;

public :
	Weapon(std::string type);

	// getter
	const std::string& getType();

	// setter
	void setType(std::string type);

};

#endif