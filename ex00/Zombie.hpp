#ifndef  ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private :
	std::string name;

public :
	// 생성자
	Zombie(std::string zombieName) ;

	// 소멸자
	~Zombie() ;

	// 이름을 출력해주는 메소드
	void announce( void );

	// 동적할당으로 heap영역에 좀비를 생성해서 반환하는 함수
	static Zombie* newZombie(std::string name);

	// 정적할당으로 stack영역에 좀비를 생성해서 announce메소드로 소개하는 함수.
	static void randomChump(std::string name);
};

#endif