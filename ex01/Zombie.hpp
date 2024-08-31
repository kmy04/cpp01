#ifndef  ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private :
	std::string name;

public :
	// 생성자
	Zombie() ;

	// 소멸자
	~Zombie() ;

	// 이름을 세팅해주는 메소드
	void setName(std::string name) ;

	void announce( void );

	/* 
	static으로 선언한 이유
		1. 특정 클래스의 객체와 직접적인 연관이 없고, 클래스의 멤버 데이터나 상태에 의존하지 않기 때문에
		static으로 선언하는 것이 일반적이다.

		2. 클래스의 멤버 함수로 선언하면, 해당 클래스의 객체를 생성할 때마다 이 함수가 필요하지 않은 경우에도 존재하게 된다.
		이는 클래스의 인터페이스를 불필요하게 복잡하게 만들 수 있다.

		3. 마지막으로 zombieHorde함수를 통해 클래스가 인스턴스화가 되기 때문에
		인스턴스화 전에 zombieHorde함수를 호출하게 되서 static으로 선언하지 않으면 컴파일과정에서 오류가 발생한다.
	*/
	// 좀비 군단을 생성해주는 메소드
	static Zombie* zombieHorde(int N, std::string name) ;

};

#endif