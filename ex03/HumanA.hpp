#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
private :
	std::string _name;
	Weapon& _weapon;
public :

	// 생성자
	HumanA(std::string name, Weapon& weapon);
	
	// 이름과, 무기이름을 출력해주는 메소드
	void attack();
};

#endif