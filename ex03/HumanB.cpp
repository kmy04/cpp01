#include "HumanB.hpp"

// 생성자.
// HumanA와는 다르게 B는 무기를 가지지 않아도 되기 때문에
// nullptr로 초기화
HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weapon = nullptr;
}

// 생성자에서 무기를 쥐어주지 않고 후에 필요에 따라 무기를
// 부여할 수 있기 때문에 필요한 메소드
// 참조자로 받는 이유는 단순히 복사를 방지하기 위함이다.
void HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

// 무기가 있을 때와 없을 때를 나눠서 출력해주는 메소드
void HumanB::attack() {
	if (this->_weapon == nullptr) {
		std::cout << _name << " has no weapon to attack with!" << std::endl;
	}
	else {
		std::cout << this->_name << " attacks with their " << \
		this->_weapon->getType() << std::endl;
	}	
}