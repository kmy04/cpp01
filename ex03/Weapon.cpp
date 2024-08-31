#include "Weapon.hpp"

// 생성자
Weapon::Weapon(std::string type) {
	this->_type = type;
}

// 무기의 타입을 반환하는 getter메소드
// 참조자로 반환하는 이유는 복사를 막고, 원본을 반환하기 위해서
// 그러나 const를 통해서 변경은 불가하게 막아줬다.
const std::string& Weapon::getType() {
	return this->_type;
}

// 무기의 타입을 세팅하는 setter메소드
void Weapon::setType(std::string type) {
	this->_type = type;
}