#include <iostream>
#include <fstream>
#include <string>

void replaceString(std::string &content, const std::string &s1, const std::string &s2) {
    std::string::size_type pos = 0;  // 시작 위치

	if (s1.empty()) {
        return;  // s1이 비어 있으면 아무 작업도 하지 않음
    }

    while ((pos = content.find(s1, pos)) != std::string::npos) {  // s1을 찾을 때까지 반복
        content.erase(pos, s1.length());  // s1 제거
        content.insert(pos, s2);  // s2 삽입
        pos += s2.length();  // 다음 검색 위치로 이동
    }
}

int main(int argc, char **argv)
{
	// 입력 parameter 예외처리
	if (argc != 4) {
		std::cerr << "There must be 3 parameters" << std::endl;
		return (1);
	}

	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inFile(fileName);
	// 파일 open예외처리
	if (inFile.is_open() == false) {
		std::cerr << "Failed to open inFile!" << std::endl;
		return (1);
	}

	std::ofstream outFile(fileName + ".replace");
	// 파일 open에러처리
	if (outFile.is_open() == false) {
		std::cerr << "Failed to open outFile!" << std::endl;
		return (1);
	}

	// seekg() 메소드를 활용해서 파일의 읽기 포인터를 파일의 끝으로 이동
	inFile.seekg(0, std::ios::end);
	// tellg() 메서드는 현재 파일 스트림에서 읽기 포인터의 위치를 반환
	// 이전에 seekg(0, std::ios::end)로 포인터를 파일 끝으로 이동시켰으므로, 
	// tellg()는 파일의 전체 크기를 반환
    std::streamsize fileSize = inFile.tellg();
	// 파일을 읽기위해서 파일의 읽기 포인터를 처음으로 이동
    inFile.seekg(0, std::ios::beg);

	// std::string 변수인 content를 초기화하는 방법으로
	// char[]하고 비슷한 느낌이다, '\0'은 초기값을 나타낸다.
    std::string content(fileSize, '\0');
    if (!inFile.read(&content[0], fileSize)) {
        std::cerr << "Error: Unable to read file " << argv[1] << std::endl;
        return (1);
    }

	inFile.close();

	replaceString(content, s1, s2);

	outFile << content;

	outFile.close();

	return 0;
}