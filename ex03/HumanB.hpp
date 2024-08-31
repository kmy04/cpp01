#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private :
	std::string _name;
	Weapon* _weapon;
public :
	HumanB(std::string name);

	// 무기를 세팅해주는 함수
	void setWeapon(Weapon& weapon);

	// 이름과, 무기 이름을 출력해주는 메소드
	void attack();
};

#endif