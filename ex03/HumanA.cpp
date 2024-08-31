#include "HumanA.hpp"

// 생성자.
// Weapon클래스 매개변수를 참조자로 받은 이유는 Weapon클래스 변수가
// 참조자로 선언됐기 때문에.
// 참조자로 선언한 이유는 Weapon클래스를 참조자가 아닌 그냥 변수로 선언할 경우
// 반드시 생성해서 Weapon변수를 초기화해줘야하는데 구조상 그것을 원하는 것이 아니기 때문에.
HumanA::HumanA(std::string name, Weapon& weapon)
: _name(name)
, _weapon(weapon)
{}

// 이름과, 무기이름을 출력해주는 메소드
void HumanA::attack() {
	std::cout << this->_name << " attacks with their " << \
		this->_weapon.getType() << std::endl;
}