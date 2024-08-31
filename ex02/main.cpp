#include <iostream>
#include <string.h>

int main() {
	std::string brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain;

	/*
		1. 참조자는 선언과 동시에 초기화가 필수이다.

		2. 참조자는 원래 변수를 가리키는 또 다른 이름(별명)이다.
		즉, 참조자를 사용하면 원래 변수에 접근하는 것과 동일하게 동작한다.

		3. 참조자는 값 자체를 복사하지 않고 원본 데이터를 참조하기 때문에, 
		특히 대용량 데이터를 다룰 때 성능 면에서 매우 유리하다. 
		값을 복사하는 대신 참조를 전달함으로써 메모리 사용량을 줄이고, 복사 작업으로 인한 성능 저하를 방지할 수 있다.

		4. 참조자는 포인터와 달리 초기화 후 다른 변수를 가리킬 수 없다. 
		이 특성은 참조자가 항상 유효한 값을 가리키도록 보장하므로, 코드의 안정성을 높이는 데 도움을 준다.

		5. 참조자는 객체를 다룰 때 매우 유용하다. 
		클래스나 구조체와 같은 객체를 참조자로 전달하면 복사 없이 객체 자체에 접근할 수 있어, 
		메모리 낭비를 방지하고 성능을 높일 수 있습니다.
	*/

	// std::string test = "TEST";
	std::string &stringREF = brain;
	// stringREF = test;
	

	std::cout << std::endl;

	std::cout << "brain -> " << &brain << " address" << std::endl;
	std::cout << "stringPTR -> " << &stringPTR << " address" << std::endl;
	std::cout << "stringREF -> " << &stringREF << " address" << std::endl;

	std::cout << std::endl;

	std::cout << "brain -> " << brain << " value" << std::endl;
	std::cout << "stringPTR -> " << stringPTR << " value" << std::endl;
	std::cout << "stringREF -> " << stringREF << " value" << std::endl;

	std::cout << std::endl;

	// 포인터를 한 번 따라가서 brain의 주소에 도달한 뒤에 값을 변경하면 변경 됨.
	std::cout << "포인터를 이용한 brain의 값 변경" << std::endl;
	*stringPTR = "qwerqwer";


	std::cout << "brain -> " << &brain << " address" << std::endl;
	std::cout << "stringPTR -> " << &stringPTR << " address" << std::endl;
	std::cout << "stringREF -> " << &stringREF << " address" << std::endl;

	std::cout << std::endl;

	std::cout << "brain -> " << brain << " value" << std::endl;
	std::cout << "stringPTR -> " << stringPTR << " value" << std::endl;
	std::cout << "stringREF -> " << stringREF << " value" << std::endl;

	std::cout << std::endl;

	std::cout << "참조자를 이용한 brain의 값 변경" << std::endl;
	stringREF = "asdfasdf";


	std::cout << "brain -> " << &brain << " address" << std::endl;
	std::cout << "stringPTR -> " << &stringPTR << " address" << std::endl;
	std::cout << "stringREF -> " << &stringREF << " address" << std::endl;

	std::cout << std::endl;

	std::cout << "brain -> " << brain << " value" << std::endl;
	std::cout << "stringPTR -> " << stringPTR << " value" << std::endl;
	std::cout << "stringREF -> " << stringREF << " value" << std::endl;

	std::cout << std::endl;

	return 0;
}